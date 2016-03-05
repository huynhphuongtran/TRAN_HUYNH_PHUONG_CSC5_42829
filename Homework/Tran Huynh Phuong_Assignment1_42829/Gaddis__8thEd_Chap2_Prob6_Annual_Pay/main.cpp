
/* 
 * File:   main.cpp
 * Author: Huynh Phuong Tran
 * Purpose:This program will calculate annual pay for an employee
 * Created on March 4, 2016, 7:43 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare variables
    float payAmount;            //To hold the amount of pay the employee earns
                                // each pay period
    unsigned short payPeriod;    //To hold the number of pay periods in a year
    float annualPay;            //To hold the employee's total annual pay
    
    //Initialize variables
    payAmount = 2200.0;
    payPeriod = 26;
    
    //Calculate annual pay
    annualPay = payAmount * payPeriod;
    
    //Print out result
    cout << "Employee's Annual Payment \n";
    cout << "Pay amount for each period:\t $" << payAmount << endl;
    cout << "The number pay of periods:\t " << payPeriod << endl;
    cout << "The total annual pay:\t\t $" << annualPay << endl;
    
    return 0;
}

