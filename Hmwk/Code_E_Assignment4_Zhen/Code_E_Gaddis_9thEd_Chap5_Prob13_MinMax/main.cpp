/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 21, 2022, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    int num,
        max,
        min;
    //Initialize or input i.e. set variable values
    

    //Map inputs -> outputs
    cin>>num;
    max = min = num;
    while (num != -99) {
        cin>>num;
   
        if(num > max && num != -99) {
            max = num;
        }
        if(num < min && num != -99) {
            min = num;
        }
    }
    //Display the outputs
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;
    //Exit stage right or left!
    return 0;
}