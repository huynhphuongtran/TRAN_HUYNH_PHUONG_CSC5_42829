
/* 
 * File:   main.cpp
 * Author: Tran Huynh Phuong
 * Created on March 9, 2016, 8:12AM
 * Purpose: Babylonian Square Root Approximation
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begin Here
int main(int argc, char** argv) 
{
    //Declare variables
    float n,r,guess;
    
    //Input our number to square root
    cout<<"What number would you like to find the square root of?"<<endl;
    cin>>n;
    
    //Calculate the first approximation
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the first approximation
    cout<<"First approximation = square root("<<n<<") = r("<<r<<"),guess("<<guess<<")"<<endl;
    
    //Calculate the second approximation
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the second approximation
    cout<<"Second approximation = square root("<<n<<") = r("<<r<<"),guess("<<guess<<")"<<endl;

    //Calculate the third approximation
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the third approximation
    cout<<"Third approximation = square root("<<n<<") = r("<<r<<"),guess("<<guess<<")"<<endl;
    
    //Calculate the fourth approximation
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the fourth approximation
    cout<<"Fourth approximation = square root("<<n<<") = r("<<r<<"),guess("<<guess<<")"<<endl;
    
    //Calculate the fifth approximation
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the fifth approximation
    cout<<"Fifth approximation = square root("<<n<<") = r("<<r<<"),guess("<<guess<<")"<<endl;

    //Calculate the sixth approximation
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the sixth approximation
    cout<<"Sixth approximation = square root("<<n<<") = r("<<r<<"),guess("<<guess<<")"<<endl;

    
    //Exit Stage Left
    return 0;
}

