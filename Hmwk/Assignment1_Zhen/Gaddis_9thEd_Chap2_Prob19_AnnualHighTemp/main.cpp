/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 8, 2022, 11:40 PM
 * Purpose:  Hmwk 1
 *           Annual High Temperatures
 *           The average July high temperature is 85 degrees Fahrenheit in New York City,
 *           88 degrees Fahrenheit in Denver, and 106 degrees Fahrenheit in Phoenix.
             This program calculates and reports what the new average July high temperature 
             would be for each of these cities if temperatures rise by 2 percent.
          
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float tempNYC,tempD,tempPh;
    
    float ntempNY,ntempD,ntempPh;
    
    //Initialize Variables
    tempNYC=85;  //degrees Fahrenheit
    tempD=88;    //degrees Fahrenheit
    tempPh=106;  //degrees Fahrenheit
    
    //Map the inputs/known to the outputs
    ntempNY=(tempNYC*2e-2)+tempNYC;
    ntempD=(tempD*2e-2)+tempD;
    ntempPh=(tempPh*2e-2)+tempPh;
    
    //Display the outputs
    cout<<"If temperatures rise by 2%, the new average high temperature in July would be :"<<endl;
    cout<<"In New York City is "<<ntempNY<<" °F"<<endl;
    cout<<"In Denver is "<<ntempD<<"  °F"<<endl;
    cout<<"In Phoenix is "<<ntempPh<<" °F"<<endl;
   
    //Exit the program
    return 0;
}