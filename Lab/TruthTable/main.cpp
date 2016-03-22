/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Tran Huynh Phuong
 * Created on March 14, 2016, 9:43 AM
 * Purpose: Print out Truth Table
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
    bool x=true;
    bool y=false;
    
    cout<<"TRUTH TABLE"<<endl;    
    cout<<"x  y  !x  !y  x&&y  x||y  x^y  x^y^y  x^y^x   !x||!y  !(x||y)  !x&&!y"<<endl;
    //Print out the first line
    (x)?cout<<"T":cout<<"F";
    (y)?cout<<"  T":cout<<"  F";
    (!x)?cout<<" T":cout<<"  F";
    (!y)?cout<<"   T":cout<<"   F";
    (x&&y)?cout<<"   T":cout<<"   F";
    (x||y)?cout<<"     T":cout<<"   F";
    (x^y)?cout<<"     T":cout<<"     F";
    (x^y^y)?cout<<"    T":cout<<"    F";
    (x^y^x)?cout<<"      T":cout<<"      F";
    (!x||!y)?cout<<"       T":cout<<"       F";
    (!(x||y))?cout<<"       T":cout<<"       F";
    (!x&&!y)?cout<<"         T":cout<<"        F";
    cout<<endl;

     //Print out the second line
    y=true;
    (x)?cout<<"T":cout<<"F";
    (y)?cout<<"  T":cout<<"  F";
    (!x)?cout<<" T":cout<<"  F";
    (!y)?cout<<"   T":cout<<"   F";
    (x&&y)?cout<<"   T":cout<<"   F";
    (x||y)?cout<<"     T":cout<<"   F";
    (x^y)?cout<<"     T":cout<<"     F";
    (x^y^y)?cout<<"    T":cout<<"    F";
    (x^y^x)?cout<<"      T":cout<<"      F";
    (!x||!y)?cout<<"       T":cout<<"       F";
    (!(x||y))?cout<<"       T":cout<<"       F";
    (!x&&!y)?cout<<"         T":cout<<"        F";
    cout<<endl;
    
    //Print out the third line
    x=false;
    y=false;
    (x)?cout<<"T":cout<<"F";
    (y)?cout<<"  T":cout<<"  F";
    (!x)?cout<<"  T":cout<<"  F";
    (!y)?cout<<"   T":cout<<"   F";
    (x&&y)?cout<<"   T":cout<<"   F";
    (x||y)?cout<<"     T":cout<<"     F";
    (x^y)?cout<<"     T":cout<<"     F";
    (x^y^y)?cout<<"    T":cout<<"    F";
    (x^y^x)?cout<<"      T":cout<<"      F";
    (!x||!y)?cout<<"       T":cout<<"       F";
    (!(x||y))?cout<<"       T":cout<<"       F";
    (!x&&!y)?cout<<"        T":cout<<"        F";
    cout<<endl;
    
    //Print out the fourth line
    y=true;
    (x)?cout<<"T":cout<<"F";
    (y)?cout<<"  T":cout<<"  F";
    (!x)?cout<<"  T":cout<<"  F";
    (!y)?cout<<"   T":cout<<"   F";
    (x&&y)?cout<<"   T":cout<<"   F";
    (x||y)?cout<<"     T":cout<<"     F";
    (x^y)?cout<<"     T":cout<<"     F";
    (x^y^y)?cout<<"    T":cout<<"    F";
    (x^y^x)?cout<<"      T":cout<<"      F";
    (!x||!y)?cout<<"       T":cout<<"       F";
    (!(x||y))?cout<<"       T":cout<<"       F";
    (!x&&!y)?cout<<"         T":cout<<"        F";
    cout<<endl;

    return 0;
}

