/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 6, 2022, 9:04 PM
 * Purpose: Hmwk 1
 *          Energy Drink Consumption
            A soft drink company recently surveyed 16,500 of its customers and found that
            approximately 15 percent of those surveyed purchase one or more energy drinks
            per week. Of those customers who purchase energy drinks, approximately 58
            percent of them prefer citrus flavored energy drinks. Write a program that
            displays the following:
 * 
 *          The approximate number of customers in the survey who purchase one or
	    more energy drinks per week.
 * 
	    The approximate number of customers in the survey who prefer citrus
	    flavored energy drinks.
 
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
    float   cstmers = 1.65e4,
            buyEnDr = cstmers * 1.5e-1,
            citrus = buyEnDr  * 5.8e-1;
    
    
    //Initialize Variables
   
    
    //Map the inputs/known to the outputs
   
    
    //Display the outputs
   cout.precision(4);
   cout << "Approximately " << buyEnDr << " customers in the survey purchase one or more energy drinks per week."<<endl;
   cout << "Approximately " << citrus << " customers in the survey prefer citrus-flavored energy drinks."<<endl;
  
    
   
    //Exit the program
    return 0;
}