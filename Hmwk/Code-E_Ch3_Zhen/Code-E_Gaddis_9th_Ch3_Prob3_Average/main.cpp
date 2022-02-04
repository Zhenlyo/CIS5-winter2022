/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 11, 2022, 10:36 PM
 * Purpose:  calculate the average for five test scores
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
    int   numscor = 5; //5 test scores
    float score;    // holds a test score
    float avg;      //average of all scores
          
    
    
    //Initialize or input i.e. set variable values
    for (int i = 0; i<numscor; i++){
        cin>>score;   //store the value
        avg += score; //accumulate to total scores
    }
    
    //Map inputs -> outputs
    avg /= numscor;
    
    //Display the outputs
    cout<<fixed<<setprecision(1);
    cout<<"Input 5 numbers to average."<<endl;
    cout<<"The average = "<<avg;
    
    //Exit stage right or left!
    return 0;
}
