/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 20, 2022, 18:06 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <math.h>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int day;
   
    //Initialize or input i.e. set variable values
  
    cin>>day;
    //Map inputs -> outputs
    if (day < 1) {
        cout<<"Enter a Number Greater Than One.";
    }
    else if (day >= 1 ) {
        cout<<fixed<<setprecision(2);
        cout<<"Pay = $"<<setw(3)<<((pow(2,day)-1)/100);
    }
    
    //Display the outputs
    
    //Exit stage right or left!
    return 0;
}