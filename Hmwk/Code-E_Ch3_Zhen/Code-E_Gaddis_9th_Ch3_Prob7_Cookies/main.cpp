/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 12, 2022, 16:36 PM
 * Purpose:  Calculates the number of cookies that one's ate 
             vs. total calories one's consumed
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
    int numCuki; //number of cookies ate
    
    float ttlCal;  //total calories
    float cukiPSr; //cookies per serving
    float calPSr;  //calories per serving
    
    //Initialize or input i.e. set variable values
    cukiPSr = 40/10;
    calPSr  = 300;
    
    cin>>numCuki;
    
    //Map inputs -> outputs
    ttlCal  = numCuki/cukiPSr*calPSr;
    
    //Display the outputs
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cout<<"You consumed "<<ttlCal<<" calories.";

    //Exit stage right or left!
    return 0;
}