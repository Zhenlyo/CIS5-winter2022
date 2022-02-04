/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 11, 2022, 9:07 PM
 * Purpose:  Temperature Conversion
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
    float f, c;
    
    //Initialize or input i.e. set variable values
    cin>>f;
    
    //Map inputs -> outputs
    c=5.0f/9*(f-32);
    
    //Display the outputs
    cout<<fixed<<setprecision(1);
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cout<<f<<" Degrees Fahrenheit = "<<c<<" Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}