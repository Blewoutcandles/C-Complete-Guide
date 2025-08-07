#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <limits> 

using namespace std;

class Date {
public:
    int day, month, year;

    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    string displayDate() const {
        return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    }

    bool isValid() const {
        if (day <= 0 || month <= 0 || year <= 0 || month > 12 || day > 31 || (month == 2 && day>29)) return false;
        // Additional checks for month-specific days (e.g., Feb, April) can be added.
        return true;
    }
};

class Flight {
public:
    string flightName;
    int totalSeats;
    map<string, int> bookedSeats; // Maps date to number of booked seats

    Flight(string name, int seats) : flightName(name), totalSeats(seats) {}

    bool checkAvailability(const Date& date, int seatsRequired) const {
        if (seatsRequired <= 0) {
            cout << "Error: Number of seats requested must be positive." << endl;
            return false;
        }
        string dateStr = date.displayDate();
        int seatsBooked = bookedSeats.find(dateStr) != bookedSeats.end() ? bookedSeats.at(dateStr) : 0;
        if (seatsBooked + seatsRequired > totalSeats) {
            cout << "Error: Only " << totalSeats - seatsBooked << " seats are available." << endl;
            return false;
        }
        return true;
    }

    void reserveSeats(const Date& date, int seats) {
        string dateStr = date.displayDate();
        bookedSeats[dateStr] += seats;
    }

    void cancelSeats(const Date& date, int seats) {
        string dateStr = date.displayDate();
        if (bookedSeats.find(dateStr) != bookedSeats.end() && bookedSeats[dateStr] >= seats) {
            bookedSeats[dateStr] -= seats;
        }
    }

    void updateFlightDetails(string newName = "", string newTime = "") {
        if (!newName.empty()) {
            flightName = newName;
        }
        if (!newTime.empty()) {
            cout << "Flight " << flightName << " has a new departure time: " << newTime << endl;
        }
    }

    void generateDetailedReport() const {
        cout << "\nFlight: " << flightName << "\n" << endl;
        for (const auto& entry : bookedSeats) {
            cout << "Date: " << entry.first << " | Booked Seats: " << entry.second
                 << " | Available Seats: " << totalSeats - entry.second << endl;
        }
        cout << "-------------------------------------------------\n";
    }
};

class Passenger {
public:
    string name;
    string username;
    string password;
    string address;
    string reasonForTravel;
    bool isAdmin;
    vector<pair<Flight*, pair<Date, int>>> reservations; // Stores flight, date, and number of seats booked

    Passenger(string n, string user, string pass, bool admin = false)
        : name(n), username(user), password(pass), isAdmin(admin) {}

    bool login(string user, string pass) const {
        return username == user && password == pass;
    }

    void enterDetails() {
        cout << "Enter your address: ";
        getline(cin >> ws, address);//removing the whitespace
        cout << "Enter reason for travel: ";
        getline(cin >> ws, reasonForTravel);
    }

    void makeReservation(Flight* flight, const Date& date) {
        if (!date.isValid()) {
            cout << "Error: Invalid date entered!" << endl;
            return;
        }
        enterDetails();

        int seatsRequired;
        cout << "Enter the number of seats to book: ";
        while (!(cin >> seatsRequired) || seatsRequired <= 0) {
            cout << "Error: Please enter a valid number of seats: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (flight->checkAvailability(date, seatsRequired)) {
            int paymentAmount = seatsRequired * 100; // Example: each seat costs 100 units
            cout << "Total payment required: " << paymentAmount << " units.\nProceed with payment? (y/n): ";
            char confirmPayment;
            cin >> confirmPayment;

            if (confirmPayment == 'y' || confirmPayment == 'Y') {
                reservations.push_back({flight, {date, seatsRequired}});
                flight->reserveSeats(date, seatsRequired);
                cout << "Reservation successful for " << flight->flightName << " on " << date.displayDate()
                     << " for " << seatsRequired << " seat(s)." << endl;
            } else {
                cout << "Payment cancelled. Reservation not completed." << endl;
            }
        }
    }

    void cancelReservation(Flight* flight, const Date& date, int seats) {
        if (seats <= 0) {
            cout << "Error: Number of seats to cancel must be positive." << endl;
            return;
        }

        auto it = find_if(reservations.begin(), reservations.end(), [&](const pair<Flight*, pair<Date, int>>& reservation) {
            return reservation.first == flight && reservation.second.first.displayDate() == date.displayDate();
        });

        if (it != reservations.end() && it->second.second >= seats) {
            if (it->second.second < seats) {
                cout << "Error: You are trying to cancel more seats than you have reserved!" << endl;
                return;
            }

            it->second.second -= seats; // Decrease seats from the reservation
            flight->cancelSeats(date, seats);
            cout << "Reservation for " << seats << " seat(s) on " << flight->flightName << " on " << date.displayDate()
                 << " cancelled." << endl;

            if (it->second.second == 0) { // Remove reservation if no seats are left
                reservations.erase(it);
            }
        } else {
            cout << "No matching reservation found or insufficient seats to cancel." << endl;
        }
    }

    void generateReservationReport() const {
        cout << "\nPassenger: " << name << "\nAddress: " << address << "\nReason for Travel: " << reasonForTravel << endl;
        cout << "Reservations:\n";
        for (const auto& reservation : reservations) {
            cout << "Flight: " << reservation.first->flightName
                 << " | Date: " << reservation.second.first.displayDate()
                 << " | Seats Booked: " << reservation.second.second << endl;
        }
        cout << "-------------------------------------------------\n";
    }
};

int main() {
    // Create some flights
    Flight flight1("Air123", 100);
    Flight flight2("Air456", 200);

    // Create a passenger
    Passenger passenger1("John Doe", "john_doe", "pass123");

    // Create a date
    Date date1(26, 8, 2024);

    // Login and simulate reservation process
    if (passenger1.login("john_doe", "pass123")) {
        passenger1.makeReservation(&flight1, date1);
        passenger1.makeReservation(&flight2, date1);

        // Cancel a reservation
        passenger1.cancelReservation(&flight1, date1, 1); // Example: Cancel 1 seat

        // Generate a passenger reservation report
        passenger1.generateReservationReport();
    }

    // Admin updating flight details
    Passenger admin("Admin", "admin", "admin123", true);
    if (admin.login("admin", "admin123")) {
        flight1.updateFlightDetails("", "14:00");
        flight2.updateFlightDetails("Air789", "16:30");

        // Admin generates detailed flight reports
        flight1.generateDetailedReport();
        flight2.generateDetailedReport();
    }

    return 0;
}
