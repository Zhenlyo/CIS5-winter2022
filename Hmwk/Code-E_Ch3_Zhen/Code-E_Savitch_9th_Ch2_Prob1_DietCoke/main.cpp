/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 12, 2022, 6:50 PM
 * Purpose:  Calculate the number of cans of soda the user 
             can consume before he/she hits the expiration 
             quantity.
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
    float massOfM, massOfS, convGLb, concOfS, sodaMas;
    float weitFrd;
    
    
    float frendM, swetnKF, maxcans;
    

    
    //Initialize or input i.e. set variable values
    massOfM = 35.0f;                //mass of a mouse 35 grams
    massOfS = 5.0f;                 //mass of sweetener needed to kill a mouse 5 grams
    sodaMas = 350.0f;               //mass of signle can of soda 350 grams
    convGLb = 45359.2f/100.0;       //45359.2 grams for a 100 lbs person)
    concOfS = .001f ;               //concentration of sweetener
    
    cout<<"Enter the weight in lbs of friend:";
    cin>>weitFrd;                   //weight of friend in lbs
    
    //Map inputs -> outputs
    frendM  = convGLb*weitFrd;                   //mass of friend in grams
    swetnKF = massOfS*frendM/massOfM;            //mass of sweetener needed to kill a friend
    maxcans = swetnKF/(sodaMas*concOfS);         //maximum cans of soda the user can consume
    
    //Display the outputs
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<(int)maxcans<<" cans";
    
    //Exit stage right or left!
    return 0;
}