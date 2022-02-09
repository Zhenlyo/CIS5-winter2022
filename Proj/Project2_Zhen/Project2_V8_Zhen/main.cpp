/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on February 7, 2022, 18:30 PM
 * Purpose:  The card game "WAR" V8
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
    
    float pnt1;        //points/cards that player 1 won
    float pnt2;        //points/cards that player 2 won
    float percet;        ///Percentage of cards won from deck
               
    int player1,       //Card that the first player uses
        player2,       //Card that the second player uses
        val1,          //value assigned to the cards for player 1 
        val2,          //value assigned to the cards for player 2
        war1,          //The card that player 1 uses during war
        war2,          //The card that player 2 uses during war
        warpnts;       //Amount of cards awarded to whoever wins the war
    
    string card1,       //The name of player 1's card (I.E. ACE,KING,TWO)
           card2;       //The name of player 2's card(I.E. ACE,KING,TWO)
   
    char use;           //User selection in the menu
    card1="zero";
    card2="zero";
    
    bool bVal;              //bool value
    
    //User input their selection
    cout<<"Welcome To The Card Game Of War!"
        <<endl<<"Enter 'a' To Receive Instructions"
        <<endl<<"Enter 'b' To Start The Game"<<endl;
    cin>>use;                                  //User inputs their selection

    while(use != 'a' && use != 'b') {          //the user enter a or b
        cout<<"PLEASE ENTER EITHER NUMBER 'a' OR 'b' TO RESTART THE PROGRAM "<<endl;
        cin>>use; 
    }//User inputs choice 
    if(use == 'a'){                            //Reads instructions if a is entered
      do {
          info();
            cout<<"Enter 'a' to receive instructions"<<endl
                <<"Enter 'b' to play the game"<<endl;
            cin>>use;                          //User selects an option again
            
            while(use!='a' && use!='b'){  //Tells the user to enter a or b
                cout<<"Please enter either 'a' or 'b'"<<endl;
                cin>>use;                  //User inputs choice
            }
        
        }while(use == 'a');                       //Continues to display instructions if user enters 1
    }
        int num=52;
            while(use == 'b') {                //While the user has selected 2, play the game!
                int card[num];                 // Size of the deck
                for (int i = 0; i < num; i++) {
                    card[i] = i;               //Filles the array in order
                }
            
        pnt1 = pnt2 = 0;                       //point1, point2 = 0              
        
           
    //Shuffle the deck in random order
        for(int i = 0; i < 52; i++) {      
            int random = rand() % 52; 
            int temp = card[i]; card[i] = card[random]; card[random] = temp;
        }
        for(int i = 0; i < 52; i++) {          //The amount of 'battles' the players will have
            if(i == 0)
                cin.ignore();                  //Make the user press enter
                cout<<"Press ENTER to continue..."<<endl;
                cin.ignore();                  //Make the user press enter
                
                player1 = card[i];             //Assign player1's card to the next card
                i++;                           //Move over to the next number or card in the deck
                player2 = card[i];             //Assign player2's card to the next card
                
                val1 = assign1(player1,card1,val1);
                val2 = assign2(player2,card2,val2);
                bVal = val1 > val2 ? 1 : 0;    //Assign bool value based on which card is higher value
                
                if(bVal==true){                //Occurs if player1's card is a higher value
                    pnt1 += pow(2,2);          //Gives player1 two cards or points
                    pnt1 -= 2;
                    cout<<"PLAYER1 placed a "<<card1<<" and PLAYER2 placed a "<<card2<<endl;
                    cout<<"PLAYER1 has"<<setw(3)<<pnt1<<" cards and PLAYER2 has"<<setw(3)<<pnt2<<" cards"<<endl<<endl;
                }
                else if(bVal == false && val1 != val2) {
                    pnt2 += 3;
                    pnt2--;
                    cout<<"PLAYER1 placed a "<<card1<<" and PLAYER2 placed a "<<card2<<endl;
                    cout<<"PLAYER1 has"<<setw(3)<<pnt1<<" cards and PLAYER2 has"<<setw(3)<<pnt2<<" cards"<<endl<<endl;
                }
                else {
                    warpnts = 2;
                    while(val1 == val2) {
                        cout<<"PLAYER1 placed a "<<card1<<" and PLAYER2 placed a "<<card2<<endl;
                        cout<<"IT IS A WAR!"<<endl<<endl;
                        
                        cout<<"Press ENTER to continue..."<<endl;
                        cin.ignore();               //Make the user press enter
                    
                        i++;                        //Move to the next number or card in deck
                        player1 = card[i];          //Assign player1's card 
                        i++;                        //Move to the next number or card in deck
                        player2 = card[i];          //Assign player2's card
                        warpnts += 2;               //Increase the points awarded if multiple ties
                       
                        val1 = assign1(player1,card1,val1);
                        val2 = assign2(player2,card2,val2);
                        
                        cout<<"PLAYER1 placed a "<<card1<<" and PLAYER2 placed a "<<card2<<endl;
                        if(val1 > val2) {
                            pnt1 += warpnts;
                            cout<<"PLAYER1 WON THE WAR!"<<endl;
                            cout<<"PLAYER1 has "<<pnt1<<" cards and PLAYER2 has "<<pnt2<<" cards"<<endl<<endl;
                        }
                        else if(val1 < val2) {
                            pnt2 += warpnts;
                            cout<<"PLAYER2 WON THE WAR!"<<endl;
                            cout<<"PLAYER1 has "<<pnt1<<" cards and PLAYER2 has "<<pnt2<<" cards"<<endl<<endl;
                        }
                    }
                }
        }
                        if(pnt1 > pnt2)
                            cout<<"PLAYER1 WIN"<<endl;
        
                        else if(pnt1 == pnt2)
                            cout<<"IT IS A TIE!"<<endl;
        
                        else
                            cout<<"PLAYER2 WIN!"<<endl;
        
                            percet = (pnt1/52) * CNVPRNT;
                                cout<<"PLAYER1 won "<<setprecision(4)<<percet<<"% of the cards in the deck"<<endl<<endl;
                                cout<<"Would you like to play again?"<<endl<<"Enter 'b' to play again"<<endl<<    //Asks to play again
                                       "Enter anything else to quit"<<endl;
                                cin>>use;    //Plays game again if b is entered, else program ends
                                scores.push_back(percet);
            
            }
        int SIZE = scores.size();
        cout<<"Here are all the percentages of cards PLAYER1 ended with"<<endl;
        prntary(scores,SIZE);
        cout<<endl;
        
        cout<<"Here are all scores of PLAYER1 sorted"<<endl;
        selSrt(scores,SIZE);
        
        prntary(scores,SIZE);
        
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

int assign1(int player1, string &card1,int val1) {
        switch(player1) 
            {   //0, 13, 26, 39 correspond to Two, values = 0
                case 0: case 13: case 26: case 39:
                    card1="TWO";
                    val1=0;
                    break;
                //1, 14, 27, 40 correspond to THREE, values = 1    
                case 1: case 14: case 27: case 40:
                    card1="THREE";
                    val1=1;
                    break;
                //2, 15, 28, 41 correspond to FOUR, values = 2   
                case 2: case 15: case 28: case 41:
                    card1="FOUR";
                    val1=2;
                    break;
                //3, 16, 29, 42 correspond to FIVE, values = 3    
                case 3: case 16: case 29: case 42:
                    card1="FIVE";
                    val1=3;
                    break;
                //4, 17, 30, 43 correspond to SIX, values = 4    
                case 4: case 17: case 30: case 43:
                    card1="SIX";
                    val1=4;
                    break;
                //5, 18, 31, 44 correspond to SEVEN, values = 5    
                case 5: case 18: case 31: case 44:
                    card1="SEVEN";
                    val1=5;
                    break;
                //6, 19, 32, 45 correspond to EIGHT, values = 6    
                case 6: case 19: case 32: case 45:
                    card1="EIGHT";
                    val1=6;
                    break;
                //7, 20, 33, 46 correspond to NINE, values = 7     
                case 7: case 20: case 33: case 46:
                    card1="NINE";
                    val1=7;
                    break;
                //8, 21, 34, 47 correspond to TEN, values = 8    
                case 8: case 21: case 34: case 47:
                    card1="TEN";
                    val1=8;
                    break;
                //9, 22, 35, 48 correspond to JACK, values = 9    
                case 9: case 22: case 35: case 48:
                    card1="JACK";
                    val1=9;
                    break;
                //10, 23, 36, 49 correspond to QUEEN, values = 10    
                case 10: case 23: case 36: case 49:
                    card1="QUEEN";
                    val1=10;
                    break;
                //11, 24, 37, 50 correspond to KING, values = 11     
                case 11: case 24: case 37: case 50:
                    card1="KING";
                    val1=11;
                    break;
                //12, 25, 38, 51 correspond to ACE, values = 12    
                case 12: case 25: case 38: case 51:
                    card1="ACE";
                    val1=12;
                    break;
            }return val1;
}
int assign2(int player2, string &card2,int val2) {
        switch(player2) 
            {   //0, 13, 26, 39 correspond to Two, values = 0
                case 0: case 13: case 26: case 39:
                    card2="TWO";
                    val2=0;
                    break;
                //1, 14, 27, 40 correspond to THREE, values = 1    
                case 1: case 14: case 27: case 40:
                    card2="THREE";
                    val2=1;
                    break;
                //2, 15, 28, 41 correspond to FOUR, values = 2   
                case 2: case 15: case 28: case 41:
                    card2="FOUR";
                    val2=2;
                    break;
                //3, 16, 29, 42 correspond to FIVE, values = 3    
                case 3: case 16: case 29: case 42:
                    card2="FIVE";
                    val2=3;
                    break;
                //4, 17, 30, 43 correspond to SIX, values = 4    
                case 4: case 17: case 30: case 43:
                    card2="SIX";
                    val2=4;
                    break;
                //5, 18, 31, 44 correspond to SEVEN, values = 5    
                case 5: case 18: case 31: case 44:
                    card2="SEVEN";
                    val2=5;
                    break;
                //6, 19, 32, 45 correspond to EIGHT, values = 6    
                case 6: case 19: case 32: case 45:
                    card2="EIGHT";
                    val2=6;
                    break;
                //7, 20, 33, 46 correspond to NINE, values = 7     
                case 7: case 20: case 33: case 46:
                    card2="NINE";
                    val2=7;
                    break;
                //8, 21, 34, 47 correspond to TEN, values = 8    
                case 8: case 21: case 34: case 47:
                    card2="TEN";
                    val2=8;
                    break;
                //9, 22, 35, 48 correspond to JACK, values = 9    
                case 9: case 22: case 35: case 48:
                    card2="JACK";
                    val2=9;
                    break;
                //10, 23, 36, 49 correspond to QUEEN, values = 10    
                case 10: case 23: case 36: case 49:
                    card2="QUEEN";
                    val2=10;
                    break;
                //11, 24, 37, 50 correspond to KING, values = 11     
                case 11: case 24: case 37: case 50:
                    card2="KING";
                    val2=11;
                    break;
                //12, 25, 38, 51 correspond to ACE, values = 12    
                case 12: case 25: case 38: case 51:
                    card2="ACE";
                    val2=12;
                    break;
            }return val2;
}

    