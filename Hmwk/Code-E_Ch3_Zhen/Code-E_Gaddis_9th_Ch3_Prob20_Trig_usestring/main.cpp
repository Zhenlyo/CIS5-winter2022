/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 13, 2022, 00:40 AM
 * Purpose:  Display the sine, cosine, and tangent of the angle
             in fixed-point notation, rounded to four decimal 
             places of precision.
 */

//System Level Libraries
#include<cmath>
#include<iostream>
#include<iomanip>
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
    float  s, c, t, angle;
    string strg1, strg2, strg3;
    
    //Initialize Known Variables
    s=sin(angle);
    c=cos(angle);
    t=tan(angle); 
    
    cout<<"Enter angle: ";
    
    cin>>angle;
    
   
    //Map the inputs/known to the outputs
    strg1 = "sin("+to_string(angle)+")=";
    strg2 = "cos("+to_string(angle)+")=";
    strg3 = "tan("+to_string(angle)+")=";
    
    //Display the outputs
   
    cout.unsetf( ios_base::floatfield );  
    cout<<strg1<<fixed<<setprecision(4)<<s<<endl;
    cout.unsetf( ios_base::floatfield ); 
    cout<<strg2<<fixed<<setprecision(4)<<c<<endl;
    cout.unsetf( ios_base::floatfield ); 
    cout<<strg3<<fixed<<setprecision(4)<<t<<endl;

    //Exit the program
    return 0;
}

