
/* 
 * File:   main.cpp
 * Author: Huynh Phuong Tran
 * Purpose:This program will calculate stock commission
 * Created on March 4, 2016, 10:40 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare variables
    long int numberShare;// Total shares buying
    unsigned int priceShare;// Price of each share
    float commissionRate; // Commission rate for stockbroker
    float payAmountNoCommission;// Pay amount without commission
    float commission; //Amount of the commission
    float totalPayAmount;// total amount paid
    
    //Initialize variables
    numberShare = 750;
    commissionRate = 0.02;
    priceShare = 35.00;
    
    //Calculate amount paid without commission
    payAmountNoCommission = numberShare * priceShare;
    //Calculate amount of the commission
    commission = payAmountNoCommission * commissionRate;
    //Calculate total amount paid
    totalPayAmount = payAmountNoCommission + commission;
    
    //Print out result
    cout<<"Stock Commission"<<endl;
    cout<<"Number of shares:\t\t"<numberShare<<endl;
    cout<<"Price of each share:\t "<<priceShare<<endl;
    cout<<"Pay amount without commission:\t $"<<payAmountNoCommission<<endl;
    cout<<"Commission pay:\t $"<<commission<<endl;
    cout<<"Total pay amount:\t $"<<totalPayAmount<<endl;

    return 0;
}

