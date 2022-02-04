/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 20, 2022, 20:36 PM
 * Purpose:  Pattern
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
    short num;
    char plus; 
    
    //Initialize or input i.e. set variable values
   
   cin>>num; 
   plus = '+';
    //Map inputs -> outputs
    for(int i = 0; i < num; i++) {
        for(int j = 0; j <= i; j++) {
            cout<<plus;
        }
        cout<<endl;
        
        if(i != num) {
          cout<<endl;  
        }
        
    }
    
    for(int i = 0; i < num; i++) {
        for(int j = num; j > i; j--) {
            cout<<plus;
        }
        if(i != num-1) {
          cout<<endl; 
          cout<<endl;
        }
        
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}