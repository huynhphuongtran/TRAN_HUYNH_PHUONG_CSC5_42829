
/* 
 * File:   main.cpp
 * Author: Tran Huynh Phuong
 * Created on March 9, 2016, 9:07 AM
 * Purpose: 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float payIncrease=0.076;//Pay increase 6.7% for 6 months

//Function Prototypes

//Execution begin here
int main(int argc, char** argv) 
{
    //Declare variables
    float oldSalary;//To hold the previous annual salary of an employee
    float oldMSalary;//To hold the previous monthly salary of an employee
    float newSalary;//To hold the new annual salary
    float newMSalary;//To hold the new monthly salary
    float backPay;//To hold back pay
    short unsigned int bpTimeFrame;//Back pay time frame
    
    //Input previous annual salary and back pay tim frame
    cout<<"What is your previous annual salary?"<<endl;
    cin>>oldSalary;
    cout<<"How many month would you like to get back pay?"<<endl;
    cin>>bpTimeFrame;
    
    //Calculations
    oldMSalary=oldSalary/12;//converse from annual to monthly salary
    newSalary=oldSalary*(1+payIncrease);
    newMSalary=newSalary/12;
    backPay=(newSalary-oldSalary)/(12/bpTimeFrame);
    
    //Output results
    cout<<"Your previous annual salary:\t\t\t $"<<oldSalary<<endl;
    cout<<"Your previous monthly salary:\t\t\t $"<<oldMSalary<<endl;
    cout<<"Your new annual salary:\t\t\t\t $"<<newSalary<<endl;
    cout<<"Your new monthly salary:\t\t\t $"<<newMSalary<<endl;
    cout<<"In "<<bpTimeFrame<<" month(s)"<<"your back pay is $"<<backPay<<endl;
   
    return 0;
}

