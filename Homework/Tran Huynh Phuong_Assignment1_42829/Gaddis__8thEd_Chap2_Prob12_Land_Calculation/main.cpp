
/* 
 * File:   main.cpp
 * Author: Huynh Phuong Tran
 * Purpose: This program will calculate the number of acres in a tract of land
 * Created on March 4, 2016, 10:05 PM
 */

#include <iostream>

using namespace std;

//Global constants
unsigned short Conversion_Acre_to_SquareFeet = 43560; //Conversion from Acre 
                                                        //to square feet

int main(int argc, char** argv) 
{

    //Declare variables
    float landAreaBySqft; //Area of land by quare feet
    float landAreaByAcre; //Area of land by acres
    
    //Initialize variables
    landAreaBySqft = 391876;
    
    //Calculate the area of land by acres
    landAreaByAcre = landAreaBySqft / Conversion_Acre_to_SquareFeet;
    
    //Print result
    cout <<"Area of land by Square feet:\t"<<landAreaBySqft<<" Square feet"<<endl;
    cout << "Area of land by Acres:\t\t" << landAreaByAcre << " Acre(s)"<< endl;
    
    return 0;
}

