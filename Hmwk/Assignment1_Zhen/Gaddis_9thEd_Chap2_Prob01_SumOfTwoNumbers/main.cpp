/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 5, 2022, 8:00 PM
 * Purpose:  Sum Of Two Numbers
 *           This program stores the integers 50 and 100 in variables,
             and stores the sum of these two in a variable named Total.
             Total is displayed on the screen.
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    short int V1,V2,Total;
    
    //Initialize Variables
    V1=50;
    V2=100;
    
    //Map the inputs/known to the outputs
    Total = V1 + V2;
    
    //Display the outputs
    cout<<"Variable 1 = "<<V1<<endl;
    cout<<"Variable 2 = "<<V2<<endl;
    cout<<"Total = "<<Total<<endl;
    
   
    //Exit the program
    return 0;
}