/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 11, 2022, 5:19 PM
 * Purpose:  Lab 1 
 *           calculate the military budget as a percentage of the federal budge
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const unsigned char CNVPERC=100;//Conversion to Percentage

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float  dodB,  //DOD == military Budget
           natinlB;  //National==federal Budget
           
         
    float  MlitryB;  //Military Budget of federal budget as a %
          
    
    //Initialize Known Variables
    natinlB=.682e13f;
    dodB=.7529e12f;
   
    
    //Map the inputs/known to the outputs
    MlitryB=dodB/natinlB;
    
    
    //Display the outputs
    cout<<"The Military Budget as A Percentage of The Federal Budge"<<endl;
    cout<<endl;
    cout<<"Federal Budget                                          = $"<<natinlB<<endl;
    cout<<"Military Budget                                         = $"<<dodB<<endl;
    cout<< fixed;
    cout<< setprecision(1);
    cout<<"Military budget as a percentage of the federal budge    =  "<<MlitryB*CNVPERC<<"%"<<endl;
    

    //Exit the program
    return 0;
}