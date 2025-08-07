#include<iostream>
#include<exception>
#include"browser.h"
#include"browserexception.h" //already included in the invalidinputexception
#include"NavigationException.h"
#include"InvalidInputException.h"
// #include"MalformedException.h"

using std :: cerr;
using std :: cout;
using std :: string;
using std :: stack;
using std :: endl;
using std :: cin;
using std :: invalid_argument;
using std :: out_of_range;
using std :: exception;


void manage_exception(Browser &browser, string url) noexcept{
  try{
    browser.open_url(url);
    cout << "opened url"<< url << endl;
  }
  catch(BrowserException &ex){
    cout << ex.what() << endl;
    cout << "Exception while opening url" << endl;
  }

}

void manage_exception_back(Browser &browser, int times) noexcept{
  try{
    string final_navigation = browser.back(times);;
    cout << "Navigation successful final url is : " << final_navigation << endl;
   
  }
  catch(BrowserException &ex){
    cout << ex.what() << endl;
    cout << "Navigating back failure" << endl;
    throw;
    // throw "invalidexception";//cant throw other exception since the usage of the noexcept keyword is available 
    //even if we throw after removing the noexcept keyword object slicing will occur inorder to prevent that just use the throw keyword
    //try throwing the ex as you get it then, you will get the invalid input exception or navigation exception yet still the
    //object slicing exist so to remove just use the throw keyword
  }

}

int main(){

    // Browser firefox;
    // firefox.open_url("www.google.com");
    // firefox.open_url("www.yahoo.com");
    // firefox.open_url("www.brainstorm.com");
    // firefox.open_url("www.leetcode.com");
    // cout << "How far have to navigate?" ;
    // int times;
    // cin >> times;
    // try{
    //     string final_url_navigated_to = firefox.back(times);
    //     //this might throw error
    //     cout << "Navigation successful the final url"<< final_url_navigated_to <<endl;
    // }
    // catch(string message){//to handle the error thrown by try block
    //     cout << message<< endl;
    //     cout << "navigation not successful" << endl;
    // }

    // //finally block as in java is not available in c++ since because resource cleaning 
    // //is a part of RAII resource aquisition in initialization
    // //all of the stack variables when an exception is invoked all the stack variables
    // //are cleared by RAII

    //the above is the prior example
    //second example

    Browser firefox;
    string url;
    int num_urls = 0;
    while(num_urls < 3){
        cout << "please enter the url";
        cin >> url;
        manage_exception(firefox, url);
        num_urls++;
    }
    // try{
    // firefox.open_url("https://www.google.com");
    // firefox.open_url("https://www.yahoo.com");
    // firefox.open_url("https://www.brainstorm.com");
    // firefox.open_url("https://www.leetcode.com");
    try{cout << "How far have to navigate?" ;
    int times;
    cin >> times;
    manage_exception_back(firefox, times);
    }
    catch(exception &ex){
      cout << "unhandling of the error" << endl;
    }
    
    // string url_navigate_to = firefox.back(times);
    // cout << "Navigation successful, final url" + url_navigate_to;


    // }
    // catch( invalid_argument & inv_arg_val){
    //     cout << inv_arg_val.what() << endl;
    //     cout << "Navigation not successfull (invalid argument exception)" << endl;

    // }
    // catch(out_of_range &out_of_range_ex){
    //     cout << out_of_range_ex.what() << endl;
    //     cout << "Navigation tracing back not successfull (out of range)" << endl;
    // }
//the above two can be tweaked in to a simple piece of code.
    // catch(exception &ex){
    //     cout << ex.what() << endl;
    //     cout << "Navigation not successful" << endl;
    // }
    //next scenarios
//the catch blocks are placed on their inheritance order basis
//this below catch block implementation is called inheritance heirarchy
    //   catch(MalformedUrlException &ex){//the most derived class first which is inherited from the Invalid Input Exception
    //     cout << ex.what() << endl;
    //     cout << "Navigation not successful Malformed Exception" << endl;
    // }
  
    //   catch(InvalidInputException &ex){//the second most derived class from the browser exception
    //     cout << ex.what() << endl;
    //     cout << "Navigation not successful InvalidInput Exception" << endl;
    // }
    //     catch(BrowserException &ex){//the derived class from the std :: exception // parent for which the class InvalidInputException
    //     //and malformedexception classes are derived. 
    //     cout << ex.what() << endl;
    //     cout << "Navigation not successful Browser Exception" << endl;
    // }
    //   catch(NavigationException &ex){//separate base class
    //     cout << ex.what() << endl;
    //     cout << "Navigation not successful Navigation Exception" << endl;
    // }
    /***NOTE: if the above order changes except for the navigation exception which is the base exception and all other are the child classses of the
    parent class browserexceptino then some handlers cannot when the navigation exception is not commented result in error abort trap: 6 
    BUT if we want to catch any exception that is being thrown you have to implement the below catch block */

    // catch(...){//three dot specifies the ellipses which catches any exception that arises.
    //       cout << "Something went wrong " << endl;
    // }

    //third implementation
  
    // catch(InvalidInputException  &ex)
    // {
    //   cout  << ex.what() << endl;
    //   cout << "input  was not valid (invalid input exception thrown)" << endl;
    // }

    // catch(NavigationException &ex){
    //   cout  << ex.what() << endl;
    //   cout << "Input was not valid (navigation exception thrown) " <<endl;
    // }
    
 
    
    return 0;
}