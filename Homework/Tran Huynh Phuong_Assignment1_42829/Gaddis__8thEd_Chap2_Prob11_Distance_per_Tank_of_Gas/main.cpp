
/* 
 * File:   main.cpp
 * Author: Huynh Phuong Tran
 * Purpose:This program will calculate and display the distance the car can
 * travel on one tank of gas when driven in town and when driven on the highway
 * Created on March 4, 2016, 9:39 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare variables
    unsigned short gasTank; //Number gallons of gas tank 
    float mpgInTown;    //Average of miles per gallon when car driving in town
    float mpgOnHighway;//Average of miles per gallon when car driving on highway
    float distanceInTown;//Distance the car can travel on one tank in town
    float distanceOnHighway;//Distance the car can travel on one tank on highway
    
    //Initialize variables
    gasTank = 20;
    mpgInTown = 23.5;
    mpgOnHighway = 28.9;
    
    //Calculate distance the car can travel on one tank of gas
    distanceInTown = gasTank * mpgInTown;
    distanceOnHighway = gasTank * mpgOnHighway;
    
    //Display result
    cout << "Gas tank capacity:\t\t " << gasTank << " gallon(s)\n";
    cout << "Travel distance in town:\t " << distanceInTown <<"mile(s)\n";
    cout << "Travel distance on highway:\t " << distanceOnHighway <<"mile(s)\n";

    return 0;
}

