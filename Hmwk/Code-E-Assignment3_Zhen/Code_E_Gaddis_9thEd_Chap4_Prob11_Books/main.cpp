/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 18, 2022, 21:09 PM
 * Purpose:  This is  a program that asks the user to enter the 
             number of books that he or she has purchased this 
             month and then displays the number of points awarded.
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
    int books;
    int points;
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>books;
    cout<<"Books purchased =  "<<books<<endl;
    
    //Map inputs -> outputs
    if(books<=0)    cout<<"Points earned   = 0";
    if(books==1)    cout<<"Points earned   = 5";
    if(books==2)    cout<<"Points earned   = 15";
    if(books==3)    cout<<"Points earned   = 30";
    if(books>=4)    cout<<"Points earned   = 60";
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}