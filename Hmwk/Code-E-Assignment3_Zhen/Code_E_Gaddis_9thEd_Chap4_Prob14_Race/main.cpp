/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 19, 2022, 14:06 PM
 * Purpose:  This is a program that asks for the names of three runners 
             and the time it took each of them to finish a race. 
             The program should display who came in first, second, 
             and third place.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float time1, time2, time3;
    string runner1;
    string runner2;
    string runner3;
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cin>>runner1>>time1;
    cin>>runner2>>time2;
    cin>>runner3>>time3;
    cout<<"Their names, then their times"<<endl;
    cout<<setprecision(0)<<fixed;
    
    //Map inputs -> outputs
    if(time1>0&&time2>0&&time3)
        if(time1<time2&&time1<time3)
            if(time2<time3) {
                cout<<runner1<<"\t"<<setw(3)<<time1<<endl;
                cout<<runner2<<"\t"<<setw(3)<<time2<<endl;
                cout<<runner3<<"\t"<<setw(3)<<time3;
            }else {
                cout<<runner1<<"\t"<<setw(3)<<time1<<endl;
                cout<<runner3<<"\t"<<setw(3)<<time3<<endl;
                cout<<runner2<<"\t"<<setw(3)<<time2;
            }
        else if(time2<time1&&time2<time3)
            if(time1<time3) {
                cout<<runner2<<"\t"<<setw(3)<<time2<<endl;
                cout<<runner1<<"\t"<<setw(3)<<time1<<endl;
                cout<<runner3<<"\t"<<setw(3)<<time3;
            }else {
                cout<<runner2<<"\t"<<setw(3)<<time2<<endl;
                cout<<runner3<<"\t"<<setw(3)<<time3<<endl;
                cout<<runner1<<"\t"<<setw(3)<<time1;
            }else if(time1<time2) {
                cout<<runner3<<"\t"<<setw(3)<<time3<<endl;
                cout<<runner1<<"\t"<<setw(3)<<time1<<endl;
                cout<<runner2<<"\t"<<setw(3)<<time2;
            }else {
                cout<<runner3<<"\t"<<setw(3)<<time3<<endl;
                cout<<runner2<<"\t"<<setw(3)<<time2<<endl;
                cout<<runner1<<"\t"<<setw(3)<<time1;
            }
        else    cout<<"Time Cannot Be Less Than Zero!";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}