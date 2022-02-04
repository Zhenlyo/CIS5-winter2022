/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 8, 2022, 1:00 PM
 * Purpose:  Hmwk 1
 *           Land Calculation
 *           This program calculates the number of acres in a tract of land
 *           with 391,876 square feet.            
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
    float sqftAcr,ttlsqft;
    
    float acre;
    
    //Initialize Variables
    sqftAcr=4.356e4;  //43560 feet^2 per Acre
    ttlsqft=3.91876e5; //Total 391876 feet^2
    
    //Map the inputs/known to the outputs
    acre=ttlsqft/sqftAcr;
    
    //Display the outputs
    cout<<"One acre = "<<sqftAcr<<" square feet"<<endl;
    cout.precision(4);
    cout<<"A track of land with 391,876 square feet convert to acre is = "<<acre<<" acres"<<endl;
   
    //Exit the program
    return 0;
}