/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Huynh Phuong Tran
 * Created on March 2, 2016, 10:06 AM
 * Purpose Calculating Nasa and Military Budget
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes


int main(int argc, char** argv) {
    //Declare Variables
    float Total_Fed;        //Total Federal Budget in 2015
    float Nasa_Budget;      //Nasa Budget in 2015
    float Military;         //Military Budget in 2015
    float Nasa_Percent;     //Percentage of Nasa Budget from Total Federal Budget
    float Military_Percent; //Percentage of Military Budget from Total Federal Budget
    
    //Initialize variables
    Total_Fed   =   3.8e12f;    //https://www.nationalpriorities.org/budget-basics/federal-budget-101/spending/
    Nasa_Budget =   18.01e9f;   //https://en.wikipedia.org/wiki/Budget_of_NASA
    Military    =   601e9f;     //http://www.businessinsider.com/the-us-defense-budget-is-massive-2015-8
    
    //Calculate percentage
    Nasa_Percent         =   Nasa_Budget/Total_Fed;
    Military_Percent     =   Military/Total_Fed;
    
    //Output the results
    cout<<"In 2015, Total Federal Budget is $ "<<Total_Fed<<endl;
    cout<<"Nasa Budget percentage is $ "<<Nasa_Percent<<endl;
    cout<<"Military Budget percentage is $ "<<Military_Percent<<endl;
    

    return 0;
}

