/* 
 * File:   main.cPP
 * Author: Zhen Liu
 * Created on January 21, 2022, 14:00 PM
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
    float mile1, liter1,
          mile2, liter2;
    float mpg1, mpg2;
    char option;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<fixed<<setprecision(2);
    flag = 0;
    do {
        if(flag == 1) {
            cout<<endl;
        }
    flag = 1;
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter1;
	    cout<<"Enter number of miles traveled:"<<endl;
	    cin>>mile1;
	    
	    mpg1 = mile1/(liter1*galPLtr);
	    cout<<"miles per gallon: "<<mpg1<<endl;
	    cout<<endl;
	    
	    
	    cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter2;
	    cout<<"Enter number of miles traveled:"<<endl;
	    cin>>mile2;
	    
	    mpg2 = mile2/(liter2*galPLtr);
	    cout<<"miles per gallon: "<<mpg2<<endl;
	    cout<<endl;
	    
	    if(mpg1>mpg2) {
	        cout<<"Car 1 is more fuel efficient"<<endl;
	        cout<<endl;
	    }
	    if(mpg1<mpg2) {
	        cout<<"Car 2 is more fuel efficient"<<endl;
	        cout<<endl;
	    }
	    cout<<"Again:"<<endl;
	    cin>>option;
    }
    while (option == 'y' || option == 'Y');
    //Display the outputs

    //Exit stage right or left!
    return 0;
}