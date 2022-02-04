/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 21, 2022, 13:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    const float galPLtr = .264179;  //0.264179 gallon per liter;
    bool flag;
    float mile, liter;
    float mpg;
    char option;
    
    //Initialize or input i.e. set variable values
    mpg = mile/(liter*galPLtr);  //miles per gallon
    mile;  //miles traveled
    liter; //liters consumed 
    
    //Map inputs -> outputs
    cout<<fixed<<setprecision(2);
    flag = 0;
    do {
        if(flag == 1) {
            cout<<endl;
        }
    flag = 1;
        cout<<"Enter number of liters of gasoline:"<<endl;
	    cout<<endl;
	    
	    cin>>liter;
	    cout<<"Enter number of miles traveled:"<<endl;
	    cout<<endl;
	    cin>>mile;
	    
	    mpg = mile/(liter*galPLtr);
	    
	    cout<<"miles per gallon:" <<endl;
	    cout<<mpg <<endl;
	    cout<<"Again:"<<endl;
	    cin>>option;
        
    }
    while (option == 'y' || option == 'Y');

	    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}