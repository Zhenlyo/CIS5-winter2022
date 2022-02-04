/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 13, 2022, 1:00 AM
 * Purpose:  Claculates the gross paycheck
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
    float newSalr, //new annual salary 
          payincr, //pay increase 
          retro,   // retroactive pay
          newMonS; //new monthly salary
          
    float oldSalr; //old salary
          
          
 
    
    //Initialize or input i.e. set variable values
    payincr = .076f;                //pay increase 76%
   
    
    cout<<"Input previous annual salary."<<endl;
    cin>>oldSalr;
             
    //Map inputs -> outputs
    retro   = (oldSalr/2.0)*payincr; 
    newSalr = oldSalr*payincr+oldSalr;   
    newMonS = newSalr/12.0;
    
    //Display the outputs
    cout<<fixed<<setprecision(2);
    cout<<"Retroactive pay    = $"<<setw(7)<<retro<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<newSalr<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<newMonS;
    //Exit stage right or left!
    return 0;
}