/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 12, 2022, 11:20 PM
 * Purpose:  Display the sine, cosine, and tangent of the angle
             in fixed-point notation, rounded to four decimal 
             places of precision.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //setprecision()
#include <cmath>     //sin(),cos(), and tan()

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const float PI = 4*atan(1);
    float sine, cosine, tangent;
    float angle;
   

    
    //Initialize or input i.e. set variable values
    cout<<"Enter the Angle in Degrees:"<<endl;
    
    cin>>angle;
    
    //Map inputs -> outputs
    sine    = sin(angle*PI/180);
    cosine  = cos(angle*PI/180);
    tangent = tan(angle*PI/180);
    
    //Display the outputs
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cout<<"sin("<<angle<<") = " <<fixed<<setprecision(4)<<(float)sine<<endl;
    cout.unsetf( ios_base::floatfield ); 
    cout<<"cos("<<angle<<") = " <<fixed<<setprecision(4)<<(float)cosine<<endl;
    cout.unsetf( ios_base::floatfield ); 
    cout<<"tan("<<angle<<") = " <<fixed<<setprecision(4)<<(float)tangent;

    //Exit stage right or left!
    return 0;
}