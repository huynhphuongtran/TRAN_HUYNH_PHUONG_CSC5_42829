/* 
 * File:   main.cpp
 * Author: Tran Huynh Phuong
 * Created on March 21, 2016, 10:36 AM
 * Purpose: This program calculates winning lottery
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

int main(int argc, char** argv) 
{
    //Declare variables
    float winningPrize;//To hold winning lottery prize
    float lumpSumPenalty;//To hold rate of lump sum penalty
    float taxPenalty;//To hold rate of tax penalty
    float marriageEquity;//To hold rate of marriage equity
    float receivingAmount;//To hold money which a lottery winner get
    bool marriageStatus;//To hold marriage status of lottery winner
    
    //Initialize variables
    lumpSumPenalty=0.62;
    taxPenalty=0.52;
    marriageEquity=0.50;
    //Input winning lottery prize
    cout<<"How much is your winning lottery prize?(Value from 1 to 10000000000): ";
    cin>>winningPrize;
    if(winningPrize>0 && winningPrize<=10000000000)
    {
        //Input marriage status
        cout<<"Are you married?(Yes typing 1 / No typing any keys): ";
        cin>>marriageStatus;   
        //Calculate money which a lottery winner get

         if(marriageStatus)
         {
             receivingAmount=winningPrize*lumpSumPenalty*(1-taxPenalty)*marriageEquity;
         }
         else
             receivingAmount=winningPrize*lumpSumPenalty*(1-taxPenalty);
         //Print output
         cout<<"Your winning lottery prize:\t $"<<winningPrize<<endl;
         cout<<"Amount money you get:\t\t $"<<receivingAmount<<endl;
    }
    else
    {
        cout<<"Your winning prize is not valid!!!"<<endl;
        cout<<"----------------------------------"<<endl;
    }
    
    return 0;
}

