/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 8, 2022, 11:40 PM
 * Purpose:  Hmwk 1
 *           Total Purchase
 *           This program holds the prices of five items in five variables.
 *           Display each item's prices, the subtotal of sales, the amount
 *           of sales tax, and the total.Assume the sales tax is 7%. 
          
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const unsigned char CNVPERC=100;//Conversion to Percentage

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
         float  saletTax, item1P, item2P, item3P, item4P, item5P;
    
         float  subttl, taxR, ttlP;
    
    //Initialize Variables
    float  saleTax = .7e-1;  
           item1P = 15.95;  //in dollars
           item2P = 24.95;  //in dollars
           item3P = 6.95;  //in dollars
           item4P = 12.95;  //in dollars
           item5P = 3.95;  //in dollars
    
    //Map the inputs/known to the outputs
     subttl = (item1P + item2P + item3P + item4P + item5P);  //subtotal of sales
     taxR = subttl * saleTax;  //Amount of sales tax
     ttlP = subttl + taxR;  //The total        
    
    //Display the outputs
    cout<<"Price of Items:"<<endl;
     cout.precision(4);
    cout<<"Item 1 = $"<<item1P<<endl;
    cout<<"Item 2 = $"<<item2P<<endl;
    cout<<"Item 3 = $"<<item3P<<endl;
    cout<<"Item 4 = $"<<item4P<<endl;
    cout<<"Item 5 = $"<<item5P<<endl;
    cout<<"Sale Tax "<<saleTax*CNVPERC<<"%"<<endl;
    cout<<"The subtotal of sales = $"<<subttl<<endl;
    cout.precision(3);
    cout<<"The amount of sales tax = $"<<taxR<<endl;
    cout.precision(4);
    cout<<"The total = $"<<ttlP<<endl;
   
    //Exit the program
    return 0;
}