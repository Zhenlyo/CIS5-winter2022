/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 18, 2022, 21:15 PM
 * Purpose:  This is a program that asks for the beginning balance
             and the number of checks written. Compute and display 
             the bank’s service fees for the month.
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
    int   checks, beginBL;
    float extraCH, monthyF; 
    float chckfee, ttlMonF, fee1, fee2, fee3, fee4, newBlanc;
    
    //Initialize or input i.e. set variable values
    beginBL;           //current bank balance
    monthyF  = 10.0;   //monthy charge $10
    extraCH  = 15.0;   //extra charge $15 if the balance of the account falls below $400
    fee1     =   .01;  //$.10 each for fewer than 20 checks
    fee2     =   .08;  //$.08 each for 20–39 checks
    fee3     =   .06;  //$.06 each for 40–59 checks
    fee4     =   .04;  //$.04 each for 60 or more checks
    
    
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>beginBL>>checks;
    
    
    //Map inputs -> outputs
    if(beginBL<0) {                  
        cout<<"URGENT! YOUR ACCOUNT IS OVERDRAWN.";
    }else if(checks<0) {
        cout<<"NUMBER OF CHECKS MUST BE POSITIVE.";
    }else {
    
        if(beginBL>=0&&beginBL<400)     {extraCH=15.0;}
        if(beginBL>=400)                {extraCH=0.0;}
        ttlMonF=monthyF + extraCH;
        if(checks>=0&&checks<20)        {chckfee+=(checks*fee1);}   
        if(checks>=20&&checks<40)       {chckfee+=(checks*fee2);} 
        if(checks>=40&&checks<60)       {chckfee+=(checks*fee3);} 
        if(checks>=60&&checks)          {chckfee+=(checks*fee4);} 
        
    newBlanc = beginBL-ttlMonF-chckfee;   //new balance
        
        //Display the outputs
        cout<<fixed<<setprecision(2);
        cout<<"Balance     $"<<setw(9)<<(float)beginBL<<endl;
        cout<<"Check Fee   $"<<setw(9)<<chckfee<<endl;
        cout<<"Monthly Fee $"<<setw(9)<<monthyF<<endl;
        cout<<"Low Balance $"<<setw(9)<<extraCH<<endl;
        cout<<"New Balance $"<<setw(9)<<newBlanc;
    }
    //Exit stage right or left!
    return 0;
}