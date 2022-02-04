/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on February 1, 2022, 03:18 AM
 * Purpose:  The card game "WAR" V5
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library 
#include <iomanip>   //Formatting Library
#include <fstream>   //File Library
#include <cmath>     //Math library
#include <string>   
using namespace std;

//User Libraries

//Global Constants - No Global Variables
const float CNVPRNT=100.0f;          //Turns decimals to percentages
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
 //Declare Variable Data Types and Constants
    char player1,       //player 1
         player2;       //player 2
    int use;            //User inputs their selection         
    int val1,           //value assigned to the cards for player 1 
        val2,           //value assigned to the cards for player 2
        pnt1,           //points/cards that player 1 won
        pnt2,           //points/cards that player 2 won
        wPnts;          //points won from a war
    
    float perc1,        //Player1 percentage of cards won from deck
          perc2;        //Player2 percentage of cards won from deck
    
    string card1,       //Cards of player 1 (I.E. ACE,KING,TWO)
           card2;       //Cards of player 2 (I.E. ACE,KING,TWO)
    
    ifstream in;        //file input
    ofstream out;       //file output
    
    bool bVal;              //bool value
    const int SIZE = 52;    //constant for the array size
    int card[SIZE];         //an array of 52 integers
    //User input their selection
    cout<<"Welcome To The Card Game Of War!"
        <<endl<<"Enter 1 To Receive Instructions"
        <<endl<<"Enter 2 To Start The Game"<<endl;
    cin>>use;           //User inputs their selection

    if(use != 1 && use != 2)         //Tells the user to enter 1 or 2
        cout<<"PLEASE ENTER EITHER NUMBER 1 OR 2 TO RESTART THE PROGRAM "<<endl;
        
    if(use == 1){                    //Reads instructions if 1 is entered
      do {
        cout<<endl<<endl;
        cout<<"In the game of war, each player will be receiving 26 cards. "<<endl;
        cout<<"Each player turns up a card at the same time, "<<endl
            <<"whoever has the higher value card takes both as a form of points.  "
            <<endl;
        cout<<"If the cards are the same rank,it is a WAR! "<<endl;
        cout<<"The player who ends the game with the most cards wins the game! "
            <<endl<<endl;
        cout<<"Enter 1 To Receive Instructions"<<endl
            <<"Enter 2 To Start The Game"<<endl;
        cin>>use;                    //User selects an option again
     }while(use == 1);               //Continues to display instructions if user enters 1
    }
      while(use == 2) {              //While the user has selected 2, play the game!
    //Open the file and read-in the number
        pnt1 = pnt2 = 0;             //point1, point2 = 0              
        in.open("card.dat");         //Opens input file
        out.open("stats.dat");       //Opens output file
        for(int i = 0; i < 52; i++)
        in>>card[i];                 //to read from file
    
        for(int i = 0; i < 52; i++) {
            card[i] = i;
        }      
    //To get random cards
        for(int i = 0; i < 52; i++) {      //Shuffles the deck
            int random = rand() % 52; 
            int temp = card[i]; card[i] = card[random]; card[random] = temp;
        }
        for(int i = 0; i < 26; i++) {
            cout<<setw(2)<<card[i]<<" ";  //print cards for player1
        }
        cout<<endl;
        for(int i = 26; i < 52; i++) {
         cout<<setw(2)<<card[i]<<" ";     //print cards for player2
        }
        cout<<endl<<endl;
    
    //Set up the value with correspond to rank   
        for (int i = 0; i < 52; i++){
             if (i==0)                    //Makes user press enter
                cin.ignore();
        cout<<"Press ENTER to continue..."<<endl;
        cin.ignore();               //Makes user press enter
        player1 = card[i];          //Assign player1's card to the next card
        i++;                        //Move over to the next number or card in the deck
        player2 = card[i];          //Assign player2's card to the next card
     
    //Assigns a value and name to the card in deck to player1
    //0, 13, 26, 39 correspond to Two, values = 0
            if (player1 == 0 || player1 == 13 || player1 == 26 || player1 == 39) {
                val1 = 0;
                card1="TWO";    
            }
    //1, 14, 27, 40 correspond to THREE, values = 1
            if (player1 == 1 || player1 == 14 || player1 == 27 || player1 == 40) {
                val1 = 1; 
                card1="THREE";
            }            
    //2, 15, 28, 41 correspond to FOUR, values = 2           
            if (player1 == 2 || player1 == 15 || player1 == 28 || player1 == 41) {
                val1 = 2; 
                card1="FOUR";
            }        
    //3, 16, 29, 42 correspond to FIVE, values = 3           
            if (player1 == 3 || player1 == 16 || player1 == 29 || player1 == 42) {
               val1 = 3; 
               card1="FIVE";
            }
    //4, 17, 30, 43 correspond to SIX, values = 4           
            if (player1 == 4 || player1 == 17 || player1 == 30 || player1 == 43) {
               val1 = 4; 
               card1="SIX";
            }
    //5, 18, 31, 44 correspond to SEVEN, values = 5          
            if (player1 == 5 || player1 == 18 || player1 == 31 || player1 == 44) {
               val1 = 5; 
               card1="SEVEN";
            }
    //6, 19, 32, 45 correspond to EIGHT, values = 6          
            if (player1 == 6 || player1 == 19 || player1 == 32 || player1 == 45) {
               val1 = 6; 
               card1="EIGHT";
            }
    //7, 20, 33, 46 correspond to NINE, values = 7          
            if (player1 == 7 || player1 == 20 || player1 == 33 || player1 == 46) {
               val1 = 7; 
               card1="NINE";
            }   
    //8, 21, 34, 47 correspond to TEN, values = 8          
            if (player1 == 8 || player1 == 21 || player1 == 34 || player1 == 47) {
               val1 = 8; 
               card1="TEN";
            }
    //9, 22, 35, 48 correspond to JACK, values = 9          
            if (player1 == 9 || player1 == 22 || player1 == 35 || player1 == 48) {
               val1 = 9; 
               card1="JACK";
            }      
    //10, 23, 36, 49 correspond to QUEEN, values = 10          
            if (player1 == 10 || player1 == 23 || player1 == 36 || player1 == 49) {
               val1 = 10; 
               card1="QUEEN";
            } 
    //11, 24, 37, 50 correspond to KING, values = 11          
            if (player1 == 11 || player1 == 24 || player1 == 37 || player1 == 50){
               val1 = 11; 
               card1="KING";
            }
    //12, 25, 38, 51 correspond to ACE, values = 12          
            if (player1 == 12 || player1 == 25 || player1 == 38 || player1 == 51) {
               val1 = 12; 
               card1="ACE";
            }
    //Assigns a value and name to the card in deck to player2
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
            }

    //Display Outputs
    bVal = val1 > val2 ? 1 : 0;   //Assigns bool value based on which card is higher value
    if(bVal == true) {            //Occurs if player1's card is a higher value
        pnt1 += pow(2,2);         //Gives player1 two cards or points
        pnt1 -= 2;
        cout<<"PLAYER1 placed a "<<card1<<" and PLAYER2 placed a "<<card2<<endl;
        cout<<"PLAYER1 has "<<setw(3)<<pnt1<<
              " cards and PLAYER2 has "<<setw(3)<<pnt2<<" cards"<<endl; 
    }
    else if(bVal == false && val1 != val2) {      //Occurs if player2's card is a higher value
                pnt2 += 3; 
                pnt2--;                           //Gives player2 two cards or points
                cout<<"PLAYER1 placed a "<<card1<<" and PLAYER2 placed a "<<card2<<endl;
                cout<<"PLAYER1 has "<<setw(3)<<pnt1
                    <<" cards and PLAYER2 has "<<setw(3)<<pnt2<<" cards"<<endl;    
            }
            
    else {                          //If the ranks are equal, it is a war
        wPnts = 2;                  //Gives two points if the tie occurs only once
        while(val1 == val2) {       //While loop if there are multiple ties
                cout<<"PLAYER1 placed a "<<card1<<" and PLAYER2 placed a "<<card2<<endl;
                cout<<"IT IS A WAR!"<<endl;
                i++;                //Moves to the next number or card in deck
                player1=card[i];    //Assigns player1's card 
                i++;                //Moves to the next number or card in deck
                player2=card[i];    //Assigns player2's card
                wPnts +=2;          //Assigns player2's card
                cout<<"Press ENTER to continue..."<<endl;
                cin.ignore();
    //Assigns a value and name to the card in deck to player1            
            if (player1 == 0 || player1 == 13 || player1 == 26 || player1 == 39) {
                val1 = 0;
                card1="TWO";    
            }
    //1, 14, 27, 40 correspond to THREE, values = 1
            if (player1 == 1 || player1 == 14 || player1 == 27 || player1 == 40) {
                val1 = 1; 
                card1="THREE";
            }            
    //2, 15, 28, 41 correspond to FOUR, values = 2           
            if (player1 == 2 || player1 == 15 || player1 == 28 || player1 == 41) {
                val1 = 2; 
                card1="FOUR";
            }        
    //3, 16, 29, 42 correspond to FIVE, values = 3           
            if (player1 == 3 || player1 == 16 || player1 == 29 || player1 == 42) {
               val1 = 3; 
               card1="FIVE";
            }
    //4, 17, 30, 43 correspond to SIX, values = 4           
            if (player1 == 4 || player1 == 17 || player1 == 30 || player1 == 43) {
               val1 = 4; 
               card1="SIX";
            }
    //5, 18, 31, 44 correspond to SEVEN, values = 5          
            if (player1 == 5 || player1 == 18 || player1 == 31 || player1 == 44) {
               val1 = 5; 
               card1="SEVEN";
            }
    //6, 19, 32, 45 correspond to EIGHT, values = 6          
            if (player1 == 6 || player1 == 19 || player1 == 32 || player1 == 45) {
               val1 = 6; 
               card1="EIGHT";
            }
    //7, 20, 33, 46 correspond to NINE, values = 7          
            if (player1 == 7 || player1 == 20 || player1 == 33 || player1 == 46) {
               val1 = 7; 
               card1="NINE";
            }   
    //8, 21, 34, 47 correspond to TEN, values = 8          
            if (player1 == 8 || player1 == 21 || player1 == 34 || player1 == 47) {
               val1 = 8; 
               card1="TEN";
            }
    //9, 22, 35, 48 correspond to JACK, values = 9          
            if (player1 == 9 || player1 == 22 || player1 == 35 || player1 == 48) {
               val1 = 9; 
               card1="JACK";
            }      
    //10, 23, 36, 49 correspond to QUEEN, values = 10          
            if (player1 == 10 || player1 == 23 || player1 == 36 || player1 == 49) {
               val1 = 10; 
               card1="QUEEN";
            } 
    //11, 24, 37, 50 correspond to KING, values = 11          
            if (player1 == 11 || player1 == 24 || player1 == 37 || player1 == 50){
               val1 = 11; 
               card1="KING";
            }
    //12, 25, 38, 51 correspond to ACE, values = 12          
            if (player1 == 12 || player1 == 25 || player1 == 38 || player1 == 51) {
               val1 = 12; 
               card1="ACE";
            }    
    //Assigns a value and name to the card in deck to player2            
        switch(player2) 
            {
                case 0: case 13: case 26: case 39:
                    card2="TWO";
                    val2=0;
                    break;
                    
                case 1: case 14: case 27: case 40:
                    card2="THREE";
                    val2=1;
                    break;
                    
                case 2: case 15: case 28: case 41:
                    card2="FOUR";
                    val2=2;
                    break;
                    
                case 3: case 16: case 29: case 42:
                    card2="FIVE";
                    val2=3;
                    break;
                    
                case 4: case 17: case 30: case 43:
                    card2="SIX";
                    val2=4;
                    break;
                    
                case 5: case 18: case 31: case 44:
                    card2="SEVEN";
                    val2=5;
                    break;
                    
                case 6: case 19: case 32: case 45:
                    card2="EIGHT";
                    val2=6;
                    break;
                    
                case 7: case 20: case 33: case 46:
                    card2="NINE";
                    val2=7;
                    break;
                    
                case 8: case 21: case 34: case 47:
                    card2="TEN";
                    val2=8;
                    break;
                    
                case 9: case 22: case 35: case 48:
                    card2="JACK";
                    val2=9;
                    break;
                    
                case 10: case 23: case 36: case 49:
                    card2="QUEEN";
                    val2=10;
                    break;
                    
                case 11: case 24: case 37: case 50:
                    card2="KING";
                    val2=11;
                    break;
                    
                case 12: case 25: case 38: case 51:
                    card2="ACE";
                    val2=12;
                    break;
            }
                
           cout<<"PLAYER1 placed a "<<card1<<" and PLAYER2 placed a "<<card2<<endl;
           
           if(val1 > val2) {            //Occurs if player1 wins the war
               pnt1 += wPnts;           //Awards player1 the points/cards
               cout<<"PLAYER1 WON THE WAR!"<<endl<<endl;
               cout<<"PLAYER1 has "<<setw(3)<<pnt1<<
                     " cards and PLAYER2 has "<<setw(3)<<pnt2<<" cards"<<endl;
           }
           if(val1 < val2) {            //Awards player1 the points/cards
               pnt2 += wPnts;           //Awards player2 the points/cards
               cout<<"PLAYER1 LOST THE WAR!"<<endl<<endl;
               cout<<"PLAYER1 has "<<setw(3)<<pnt1<<
                     " cards and PLAYER2 has "<<setw(3)<<pnt2<<" cards"<<endl;
            }

         }
     }
    

    }
    //Player1 wins if has more cards at the end of game
        if(pnt1 > pnt2) {
            //Percentage of cards won from deck    
            float perc1;
                perc1 = (pnt1/52.0)*CNVPRNT;    //Equation to calculate percentage of cards won
            cout<<"PLAYER1 WIN!"<<endl;
            cout<<"PLAYER1 won "<<setprecision(4)<<perc1<<"% of the cards in the deck"<<endl;
            //to write on file
            out <<"PLAYER1 won "<<setprecision(4)<<perc1<<"% of the cards in the deck \n";        
        }
     //It's a tie if both players have 26 cards
            else if(pnt1 == pnt2) {
                cout<<"IT IS A TIE!"<<endl;
            }
     //Player1 loses
        else {//Percentage of cards won from deck    
                float perc2;
                perc2 = (pnt2/52.0)*CNVPRNT;    //Equation to calculate percentage of cards won
                cout<<"PLAYER2 WIN!"<<endl;
                cout<<"PLAYER2 won "<<setprecision(4)<<perc2<<"% of the cards in the deck"<<endl;
                //to write on file
                out <<"PLAYER2 won "<<setprecision(4)<<perc2<<"% of the cards in the deck \n";
        }
        cout<<endl;
        cout<<"Would You Like To Play Again?"<<endl<<"Enter 2 To Play Again"<<endl;
        cout<<"Enter Anything Else To End The Game"<<endl;
        cin>>use;    //Plays game again if 2 is entered, else program ends
      }
    
    in.close();         //Closes input file
    out.close();        //Closes output file
    //Exit stage right!
    
    return 0;
}
