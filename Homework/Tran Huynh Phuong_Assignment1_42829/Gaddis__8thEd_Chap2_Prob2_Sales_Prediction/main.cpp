
/* 
 * File:   main.cpp
 * Author: Huynh Phuong Tran
 * Purpose: This program will predict the East Coast division of a company  
 * if the company has $8.6 million in sales this year.
 * Created on March 4, 2016, 4:54 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare variables
    float total_Sales;  //Total sales of a company
    float sale_Rate;  //The sale rate of the East Coast division of a company
    float east_coast_Sale;  // sales of East Coast division
    
    //Initialize variables
    total_Sales = 8.6e6f;   //Assign total sales of a company in this year
    sale_Rate = 0.58;   //Assign sale rate of East Coast division in this year
    
    //Calculate East Coast sale division
    east_coast_Sale = sale_Rate * total_Sales;
    
    //Display result
    cout << "Total sales of a company: $" << total_Sales << endl;
    cout << "Rate of East Coast sale division: " << sale_Rate << endl;
    cout << "East Coast division sales: $" << east_coast_Sale << endl;

    return 0;
}

