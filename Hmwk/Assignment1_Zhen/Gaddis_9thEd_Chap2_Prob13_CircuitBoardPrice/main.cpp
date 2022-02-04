/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 8, 2022, 11:40 PM
 * Purpose:  Hmwk 1
 *           Circuit Board Price
 *           This program calculates the selling price of a circuit board that costs $14.95
          
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
    float profit,cost;
    
    float selPrc;
    
    //Initialize Variables
    profit=.35;  //35 percent
    cost=14.95; //in dollars
    
    //Map the inputs/known to the outputs
    selPrc=(cost*profit)+cost;
    
    //Display the outputs
    cout<<"Profit = 35% "<<endl;
    cout<<"Cost   ="<<" $"<<cost<<endl;
    cout.precision(4);
    cout<<"Selling Price Of Circuit Board is "<<"$"<< selPrc<<endl;
   
    //Exit the program
    return 0;
}