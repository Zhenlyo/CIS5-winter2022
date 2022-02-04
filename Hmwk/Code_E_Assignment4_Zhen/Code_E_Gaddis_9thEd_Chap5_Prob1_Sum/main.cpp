/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 20, 2022, 15:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries>

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int number;
    int i,
        sum;
    
    //Initialize or input i.e. set variable values
    sum = number;
    cin>>number;
    
    //Map inputs -> outputs
    while (number<1) {
        cout<<"Enter a Number Greater Than Zero.";
    }
    for (int i = 0; i <= number; i++) {
        sum += i;
    }
    //Display the outputs
    cout<<"Sum = "<<sum;
    
    //Exit stage right or left!
    return 0;
}