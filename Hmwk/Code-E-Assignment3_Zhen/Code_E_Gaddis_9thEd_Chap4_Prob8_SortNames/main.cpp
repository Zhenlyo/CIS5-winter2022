/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 17, 2022, 5:11 PM
 * Purpose:  This a program that receives three names from user at run-time
             and then displays the names sorted in alphabetical order.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string.h>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    
    //Declare Variables
    string  name1;
    string  name2;
    string  name3;
    
    //Initialize or input i.e. set variable values

    //Map inputs -> outputs
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1;
    cin>>name2;
    cin>>name3;
    if(name1<=name2&&name1<=name3)
        if(name2<=name3) {
        cout<<name1<<endl;
        cout<<name2<<endl;
        cout<<name3;
    }else {
        cout<<name1<<endl;
        cout<<name3<<endl;
        cout<<name2;
    }
else if(name2<name1&&name1<name3)
       if(name1<name3) {
        cout<<name2<<endl;
        cout<<name1<<endl;
        cout<<name3;
       }else {
        cout<<name2<<endl;
        cout<<name3<<endl;
        cout<<name1;
       }else if(name1<name2) {
        cout<<name3<<endl;
        cout<<name1<<endl;
        cout<<name2;
       }else {
        cout<<name3<<endl;
        cout<<name2<<endl;
        cout<<name1;
       }
           

  
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}