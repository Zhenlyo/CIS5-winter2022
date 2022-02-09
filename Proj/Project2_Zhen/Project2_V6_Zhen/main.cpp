/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on February 6, 2022, 15:52 PM
 * Purpose:  The card game "WAR" V6
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library 
#include <iomanip>   //Formatting Library
#include <fstream>   //File Library
#include <string>    //String Library
#include <vector>    //Vector Library
#include <cmath>     //Math library
using namespace std;

//User Libraries

//Global Constants - No Global Variables
const float CNVPRNT=100.0f;          //Turns decimals to percentages
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void prntary(vector<float>,int);
void info();                         //Function to print instructions
void selSrt(vector<float>&,int);
int assign1(int,string &,int);       //assign card1
int assign2(int,string &,int);       //assign card2
//Execution Begins Here
int main(int argc, char** argv) {
//Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
 //Declare Variable Data Types and Constants
    vector<float> scores;
    
   return 0; 
}
void info() {
    cout<<endl<<"In the game of war, each player will be receiving 26 cards. "<<endl;
    cout<<"Each player will place one card at the same time, "<<endl
        <<"whoever has the higher value card takes both as a form of points.  "
        <<endl;
    cout<<"If the cards are the same rank,it is a WAR! "<<endl;
    cout<<"The player who ends the game with the most cards wins the game! "
        <<endl<<endl;
}

void prntary(vector<float> scores,int SIZE=5){
        for(int i = 0; i < SIZE; i++){
            cout<<fixed<<setprecision(2)<<scores[i]<<" ";
        }
        cout<<endl;
}

void selSrt(vector<float> &array,int SIZE){
    float minIndx;
    float minVal;

    for (int start = 0; start < SIZE-1; start++){
        minIndx = start;
        minVal  = array[start];
        for (int index = start+1; index < SIZE; index++){
            if (array[index] < minVal){
                minVal  = array[index];
                minIndx = index;
            }
        }
        float temp = array[minIndx];
        array[minIndx] = array[start];
        array[start] = temp;
    }
}



    