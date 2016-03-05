

/* 
 * File:   main.cpp
 * Author: Huynh Phuong Tran
 * Purpose: This program calculate the sum of two numbers
 * Created on March 4, 2016, 4:38 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare variables
    int number1;    //To hold value of the first number
    int number2;    //To hold value of the second number
    int total;        //To hold the sum of two numbers
    
    //Initialize variable
    number1 = 50;
    number2 = 100;
    
    //Calculate the sum of two number
    total = number1 + number2;
    
    //Print out of result
    cout << number1 << " + " << number2 << " = " << total << endl;
    
    return 0;
}

