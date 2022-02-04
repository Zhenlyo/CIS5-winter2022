/* 
 * File:   main.cPP
 * Author: Zhen Liu
 * Created on January 21, 2022, 14:36 PM
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
const unsigned char CNVPERC=100;//Conversion to Percentage
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    bool flag;
    float curnt, yrAgo;
    float rate;
    char option;
    //Initialize or input i.e. set variable values
    curnt;  //current price
    yrAgo;  //year-ago price
    rate;   //inflation rate
    //Map inputs -> outputs
    cout<<fixed<<setprecision(2);
    flag = 0;
    do {
        if(flag == 1) {
            cout<<endl;
        }
    flag = 1;
        cout<<"Enter current price:"<<endl;
        cin>>curnt;
        cout<<"Enter year-ago price:"<<endl;
        cin>>yrAgo;
        
        rate = ((curnt - yrAgo) / yrAgo);
        cout<<"Inflation rate: "<<rate*CNVPERC<<"%"<<endl;
        cout<<endl;
        cout<<"Again:"<<endl;
	    cin>>option;
        
    }
    while (option == 'y' || option == 'Y');
    //Display the outputs

    //Exit stage right or left!
    return 0;
}