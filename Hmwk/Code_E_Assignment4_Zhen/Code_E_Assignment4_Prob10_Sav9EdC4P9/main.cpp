/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 21, 2022, 20:20 PM
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
    float a, b, c; 
    
    
 
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:"<<endl;
    cout<<endl;
    cin>>a;
    cout<<"Enter Second number:"<<endl;
    cout<<endl;
    cin>>b;
    cout<<"Enter third number:"<<endl;
    cout<<endl;
    cin>>c;
    cout<<fixed<<setprecision(1);
    
   

    //Map inputs -> outputs
     cout<<"Largest number from two parameter function:"<<endl;
        if (a > b) {
            cout<<a<<endl;
            cout<<endl;
        }
        else {
            cout<<b<<endl;
            cout<<endl;
        }

    
    cout<<"Largest number from three parameter function:"<<endl; 
        if (b < a && a > c) {
           cout<<a<<endl;
            }
          
        else if (a < b && b > c) {
            cout<<b<<endl;
            }
            
            else 
            cout<<c<<endl;
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}