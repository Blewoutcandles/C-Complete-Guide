#include <iostream>
#include <stdexcept>

class Calculator {
public:
    // Overload the + operator for adding two integers
    int operator+(std::pair<int, int> values) {
        return values.first + values.second;
    }

    // Overload the + operator for adding three integers
    int operator+(std::tuple<int, int, int> values) {
        return std::get<0>(values) + std::get<1>(values) + std::get<2>(values);
    }

    // Overload the + operator for adding two doubles
    double operator+(std::pair<double, double> values) {
        return values.first + values.second;
    }

    // Overload the - operator for subtracting two integers
    int operator-(std::pair<int, int> values) {
        return values.second - values.first;
    }

    // Overload the - operator for subtracting two doubles
    double operator-(std::pair<double, double> values) {
        return values.first - values.second;
    }

    // Overload the * operator for multiplying two integers
    int operator*(std::pair<int, int> values) {
        return values.first * values.second;
    }

    // Overload the * operator for multiplying three integers
    int operator*(std::tuple<int, int, int> values) {
        return std::get<0>(values) * std::get<1>(values) * std::get<2>(values);
    }

    // Overload the / operator for dividing two integers
    int operator/(std::pair<int, int> values) {
        if (values.second == 0) {
            throw std::invalid_argument("Division by zero");
        }
        return values.first / values.second;
    }

    // Overload the / operator for dividing two doubles
    double operator/(std::pair<double, double> values) {
        if (values.second == 0.0) {
            throw std::invalid_argument("Division by zero");
        }
        return values.first / values.second;
    }
};

int main() {
    Calculator calc;

    // Test Case 3: Multiplication Overloads
    std::cout << "Multiply two integers (2, 3): " << calc * std::make_pair(2, 3) << std::endl; // Expected output: 6
    std::cout << "Multiply three integers (1, 2, 3): " << calc * std::make_tuple(1, 2, 3) << std::endl; // Expected output: 6

    // Test Case 4: Division Overloads
    std::cout << "Divide two integers (10, 2): " << calc / std::make_pair(10, 2) << std::endl; // Expected output: 5
    std::cout << "Divide two doubles (10.0, 2.5): " << calc / std::make_pair(10.0, 2.5) << std::endl; // Expected output: 4.0
    
    try {
        std::cout << "Attempt to divide by zero with integers (10, 0): " << calc / std::make_pair(10, 0) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << std::endl; // Expected output: Error: Division by zero
    }

    try {
        std::cout << "Attempt to divide by zero with doubles (10.0, 0.0): " << calc / std::make_pair(10.0, 0.0) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << std::endl; // Expected output: Error: Division by zero
    }

    return 0;
}