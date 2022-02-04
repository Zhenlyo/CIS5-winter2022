/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 20, 2022, 20:30 PM
 * Purpose:  Rectangle
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
    int num;
    char letter;
    
    cin>>num>>letter;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    if (num <= 15 && num >= 1) {
        for (int i = num; i > 0; i--) {
            for (int i = num; i > 0; i--) {
                cout<<letter;
                 } 
                 if (i > 1) {
                     cout<<endl;
                }
        }
        } 
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}