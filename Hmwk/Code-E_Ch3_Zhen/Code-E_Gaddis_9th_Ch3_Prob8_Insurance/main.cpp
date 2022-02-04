/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 12, 2022, 5:06 PM
 * Purpose:  Calculates the minimum amount of insurance
             that one should but for their property.
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float insPerc; //insurance percentage
    
    float rePlacm; //the replacement cost of the building
    float minIns;  //minimum amount of insurance cost
    
    //Initialize or input i.e. set variable values
    insPerc = .8f;//insurance percentage 80%
    
    cin>>rePlacm;
    
    //Map inputs -> outputs
    minIns = rePlacm*insPerc;
    
    //Display the outputs
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cout<<"You need $"<<minIns<<" of insurance.";
    
    //Exit stage right or left!
    return 0;
}