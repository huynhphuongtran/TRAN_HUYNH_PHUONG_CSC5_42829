/* 
 * File:   main.cpp
 * Author: Huynh Phuong Tran
 * Purpose: 
 * Created on March 7, 2016, 9:45 AM
 */

#include <iostream>
#include<cmath>

using namespace std;

//System Libraries


int main(int argc, char** argv) 
{
    //Declare variables
    float loanAmount;   //Loan amount
    float annualRate;   //Annual interest rate
    float interestRate; //Monthly interest rate
    unsigned short int n;   //Number of payments
    float monthlyPay; //Monthly payment
    float paybackAmount;    //Amount paid back
    float interestPay;  //Interest pay amount
    
    //Initialize variables
    
    cout<<"How much is your loan amount: ";
    cin>>loanAmount;
    
    cout<<"How much is your annual interest rate: ";
    cin>>annualRate;
    
    cout<<"How many payments do you make: ";
    cin>>n;
    
    //Calculate monthly interest rate
    interestRate=annualRate/12;
    //Calculate monthly payment
    monthlyPay= ((interestRate*pow((1+interestRate),n))/(pow((1+interestRate),n)-1))*loanAmount;
    //Calculate amount paid back
    paybackAmount=monthlyPay*n;
    //Calculate interest pay
    interestPay=paybackAmount-loanAmount;
    
    //Print report
    cout<<"Loan Amount:\t\t\t\t $"<<loanAmount<<endl;
    cout<<"Monthly Interest Rate:\t\t\t "<<interestRate<<endl;
    cout<<"Number of Payments:\t\t\t "<<n<<endl;
    cout<<"Monthly Payment:\t\t\t $"<<monthlyPay<<endl;
    cout<<"Amount Paid Back:\t\t\t $"<<paybackAmount<<endl;
    cout<<"Interest Paid:\t\t\t\t $"<<interestPay<<endl;
    


    return 0;
}

