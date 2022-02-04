/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 31, 2022, 5:23 PM
 * Purpose:  The card game "WAR" V0
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <string>    //
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
#include <fstream>   //File Library
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    

    //Declare Variable Data Types and Constants
    const int SIZE = 52;
    int card[SIZE];
    ifstream in;            //Create a file object named file
    in.open("card.dat");    //Open the input file
            
    
    //This reads in one integer at a time and stores it 
    for(int i = 0; i < 52; i++)
        in>>card[i];        //to read from file
    //Print and to check that it worked
    for(int i = 0; i < 52; i++)
        cout<<card[i]<<" ";
    
        
       
    //Exit stage right!
    in.close();             //Closes input file
    return 0;
}