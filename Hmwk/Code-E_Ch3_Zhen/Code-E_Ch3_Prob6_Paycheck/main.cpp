/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 12, 2022, 4:00 PM
 * Purpose: Paycheck
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float payChck, // paycheck $
          payRate, // $/hr 
          ovrRate; // overtime ovrRate
          
    int   wrkhr,  // working hrs
          ovrTime; // overtime starts
    
    //Initialize or input i.e. set variable values
    ovrTime = 40; //hrs
    ovrRate = 2; //double time 
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payRate>>wrkhr;
             
     
    //Map inputs -> outputs
    payChck = wrkhr>ovrTime?
              (ovrRate-1)*(wrkhr-ovrTime)*payRate+(wrkhr*payRate):  //straight and overtime hrs
              wrkhr*payRate;                                        //straight time
    
    //Display the outputs
    cout<<fixed<<setprecision(2);
    cout<<"Paycheck = $"<<setw(7)<<payChck;
    
    //Exit stage right or left!
    return 0;
}