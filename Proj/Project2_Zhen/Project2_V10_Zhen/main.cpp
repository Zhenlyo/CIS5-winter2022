/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on February 8, 2022, 03:32 AM
 * Purpose:  The card game "WAR" V10
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
const int COLS=13;
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void bublsrt(float[],int);

int binSrch(float [],int,float,int&);      //Searches for a tie in all games played

//Execution Begins Here
int main(int argc, char** argv) {
//Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
 //Declare Variable Data Types and Constants
    vector<float> scores;
    
    float pnt1;        //points/cards that player 1 won
    float pnt2;        //points/cards that player 2 won
    float percet;        ///Percentage of cards won from deck
               
    int player1,       //Card that the first player uses
        player2,       //Card that the second player uses
        val1,          //value assigned to the cards for player 1 
        val2,          //value assigned to the cards for player 2
        war1,          //The card that player 1 uses during war
        war2,          //The card that player 2 uses during war
        warpnts,       //Amount of cards awarded to whoever wins the war
        first;
    
    bool bVal;              //bool value
     

    string card1,       //The name of player 1's card (I.E. ACE,KING,TWO)
           card2;       //The name of player 2's card(I.E. ACE,KING,TWO)
   
    char use;           //User selection in the menu
    card1 = "zero";
    card2 = "zero";
    first = 0;
    
    
        
 
      return 0;
        }



int binSrch(float array[],int SIZE, float value,int& indx){
   
    int first = 0,
    last = SIZE-1,
    mid,
    postion = -1;
    bool found = false;
    while(!found && first <= last){
        mid = (first + last)/2;
        if (array[mid] == value){
            found = true;
            postion = mid;
            indx = postion;
        }
        else if (array[mid] > value)
            last = mid - 1;
        else
            first = mid + 1;
    }
    return found;
}

void bublsrt(float array[],int size){
    int max;
    int index;
    
    for(max = size - 1; max > 0; max--){
        for(index = 0; index < max; index++){
            if(array[index] > array[index+1]){
                float temp = array[index];
                array[index] = array[index+1];
                array[index+1] = temp;
            }
                
        }
    }
}

    