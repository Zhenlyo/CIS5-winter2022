/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 31, 2022, 5:23 PM
 * Purpose:  The card game "WAR" V1
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
  
    //This reads in one integer at a time and stores it 
    ifstream in;            //Create a file object named file
    in.open("card.dat");    //Open the input file
    for(int i = 0; i < 52; i++)
        in>>card[i];        //to read from file

    //To get random cards
    for (int i = 0; i < 52; i++) {
        card[i] = i;  
    }
    for (int i = 0; i < 52; i++) {
            int random = rand() % 52; 
            int temp = card[i]; card[i] = card[random]; card[random] = temp;
        }
    for(int i = 0; i < 26; i++) {
            cout<<setw(2)<<card[i]<<" "; 
           
        }
    cout<<endl;
    for(int i = 26; i < 52; i++) {
            cout<<setw(2)<<card[i]<<" ";
        
    }
  
       
    cout<<endl<<endl;
        
        
    in.close();         //Closes input file
    return 0;
}