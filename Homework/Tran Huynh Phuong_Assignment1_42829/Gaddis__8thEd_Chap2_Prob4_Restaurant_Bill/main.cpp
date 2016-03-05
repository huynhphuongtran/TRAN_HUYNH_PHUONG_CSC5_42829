/* 
 * File:   main.cpp
 * Author: Huynh Phuong Tran
 * Purpose: This program computes the tax and tip on a restaurant bill
 * Created on March 4, 2016, 6:55 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Local constants
    float tax_Rate = 0.0675;    //Tax rate for restaurant
    float percent_Tip = 0.2;    //The percentage of tip on the cost meal 
                                //after adding tax
    //Declare variables
    float meal_Cost;    //Value of a meal charge
    float tax_Amount;   //Tax amount
    float tip_Amount;   //Tip amount
    float total_Bill;   //Total bill 
    //Initialize variables
    meal_Cost = 88.67;  //The value of a meal cost
    
    //Calculate tax amount
    tax_Amount = meal_Cost * tax_Rate; 
    
    //Calculate tip amount
    tip_Amount = percent_Tip * (meal_Cost + tax_Amount);
    
    //Calculate total bill
    total_Bill = meal_Cost + tax_Amount + tip_Amount;
    
    //Print the restaurant bill
    cout << "Restaurant Bill \n";
    cout << "The meal cost:\t $" << meal_Cost << endl;
    cout << "Tax amount:\t $" << tax_Amount << endl;
    cout << "Tip amount:\t $" << tip_Amount << endl;
    cout << "Total bill:\t $" << total_Bill << endl;

    return 0;
}

