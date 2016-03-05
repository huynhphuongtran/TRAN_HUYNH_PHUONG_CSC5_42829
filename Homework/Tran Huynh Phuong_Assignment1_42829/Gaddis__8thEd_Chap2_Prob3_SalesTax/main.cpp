
/* 
 * File:   main.cpp
 * Author: Huynh Phuong Tran
 * Purpose: This program calculate total sale tax on a purchase
 * Created on March 4, 2016, 6:22 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare variables
    float state_Tax;    // State sale tax rate on a purchase
    float country_Tax;  // Country sale tax rate on a purchase
    float total_Tax;    // Total sale tax on a purchase
    float purchase;     // Value of a purchase
    
    //Initialize variables
    state_Tax = 0.04;   //Assign state sale tax rate
    country_Tax = 0.02; //Assign country sale tax rate
    purchase = 95;      //Assign value of a purchase
    
    //Calculate sale tax
    total_Tax = purchase * (state_Tax + country_Tax);
    
    //Print result
    cout << "Value of a purchase: $" << purchase << endl;
    cout << "State sale tax rate: " << state_Tax << endl;
    cout << "Country sale tax rate: " << country_Tax << endl;
    cout << "Total sale tax of a purchase: $"<< total_Tax << endl;
    
    return 0;
}

