/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 17, 2022, 15:15 PM
 * Purpose:  This is a program that determines whether a meeting room 
             is in violation of fire law regulations regarding the 
             maximum room capacity.
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
    int roomCap,pplNum;
    int pplRedc,pplIncr;
    
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>roomCap>>pplNum;
    
    pplRedc=pplNum-roomCap;
    pplIncr=roomCap-pplNum;
    
    if(pplNum<=roomCap){     cout<<"Meeting can be held."<<endl;
                             cout<<"Increase number of people by "
                                 <<pplIncr<<" will be allowed without violation.";
    }
    
    if(pplNum>roomCap){      cout<<"Meeting cannot be held."<<endl;
                             cout<<"Reduce number of people by "
                                 <<pplRedc<<" to avoid fire violation.";
        
    }
    
    //Map inputs -> outputs
    
    
    //Display the outputs
    

    //Exit stage right or left!
    return 0;
}
