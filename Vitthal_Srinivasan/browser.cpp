#include<iostream>
#include<algorithm>
#include<exception>
#include<regex>

#include"browserexception.h" //already included in the invalidinputexception
#include"NavigationException.h"
#include"InvalidInputException.h"
// #include"MalformedException.h"
#include"browser.h"

using std :: cerr;
using std :: cout;
using std :: string;
using std :: stack;
using std :: endl;
using std :: regex;
using std :: regex_match;
using std :: invalid_argument;
using std :: out_of_range;

//first example
// void Browser:: open_url(string url){
//     url_history.push(url);
// }

// string Browser::back(int times){
//     //pop the current page from the URL history, the back button //
//     //always moves back from the current page
//     if(!url_history.empty()){
//         url_history.pop();
//     }
//     string url_navigate_to {};
//     string error_message = "Unable to load the requested web page";

//     for(int i  = 0; i<times; i++){
//         if(url_history.empty()){
//             throw error_message;
//         }

//         url_navigate_to = url_history.top();
//         cout << "Navigating to: " <<url_navigate_to << endl;

//         url_history.pop();
//     }
//     return url_navigate_to;
// }

//second example

// void Browser :: open_url(string url){
//     regex url_matcher{"(http|https)://(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)"};

//     if(regex_match(url, url_matcher)){
//         url_history.push(url);
//         if(url_history.size() > 4){
//             throw BrowserException("History size is limited on this browser");
//         }
//     }
//     else{
//         throw MalformedUrlException("Error 402: Unable to access the malformed URL"+url);
//     }
// }

void Browser :: open_url(string url){
    regex url_matcher{"(http|https)://(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)"};

    if(regex_match(url, url_matcher)){
        url_history.push(url);
    }
    else{
            throw InvalidInputException("Unable to navigate to the malformed url","sorry");
    }
    

}

string Browser :: back(int times){
    if(times < 0){
        throw InvalidInputException("Invalid passing for times variable times cannot be negative","!!sorry");
    }

    if(!url_history.empty()){
        url_history.pop();
    }
    string url_navigate_to {};


    for(int i  = 0; i<times; i++){
        
        if(url_history.empty()){
            throw NavigationException("The url_history is out of range: unable to navigate","url");
        }


        url_navigate_to = url_history.top();
        cout << "Navigating to: " <<url_navigate_to << endl;
        url_history.pop();
    }
    return url_navigate_to;
}