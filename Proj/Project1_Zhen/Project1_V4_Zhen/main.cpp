/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on February 1, 2022, 00:20 AM
 * Purpose:  The card game "WAR" V4
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <string>    //
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

    char player1,        //player 1
         player2;        //player 2
            
    int val1,           //value of card for player 1 
        val2,           //value of card for player 2
        pnt1,           //points/cards that player 1 won
        pnt2,           //points/cards that player 2 won
        wPnts;          //points won from a war
    
    string card1,       //the card player 1 drew
           card2;       //the card player 2 drew
    ifstream in;        //Create a file object named file
    
    //Initialize Variables
    pnt1 = pnt2 = 0;
    
    //Open the text file
    in.open("card.dat");    //Opens input file
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
        
    //Set up the value with correspond to rank   
    for (int i = 0; i < 52; i++){
            player1 = card[i];
            i++;
            player2 = card[i];
            
    //0, 13, 26, 39 correspond to Two, values = 0
            if (player1 == 0 || player1 == 13 || player1 == 26 || player1 == 39)
            {
                val1 = 0;
                card1="TWO";    
            }
            if (player2 == 0 || player2 == 13 || player2 == 26 || player2 == 39)
            {
                val2 = 0;
                card2="TWO";  
            }
    //1, 14, 27, 40 correspond to THREE, values = 1
            if (player1 == 1 || player1 == 14 || player1 == 27 || player1 == 40)
            {
               val1 = 1; 
               card1="THREE";
            }
            if (player2 == 1 || player2 == 14 || player2 == 27 || player2 == 40)
            {
                val2 = 1;
                card2="THREE";
            }
    //2, 15, 28, 41 correspond to FOUR, values = 2           
            if (player1 == 2 || player1 == 15 || player1 == 28 || player1 == 41)
            {
               val1 = 2; 
               card1="FOUR";
            }
            if (player2 == 2 || player2 == 15 || player2 == 28 || player2 == 41)
            {
                val2 = 2;
                card2="FOUR";
            }        
    //3, 16, 29, 42 correspond to FIVE, values = 3           
            if (player1 == 3 || player1 == 16 || player1 == 29 || player1 == 42)
            {
               val1 = 3; 
               card1="FIVE";
            }
            if (player2 == 3 || player2 == 16 || player2 == 29 || player2 == 42)
            {
                val2 = 3;
                card2="FIVE";
            }  
    //4, 17, 30, 43 correspond to SIX, values = 4           
            if (player1 == 4 || player1 == 17 || player1 == 30 || player1 == 43)
            {
               val1 = 4; 
               card1="SIX";
            }
            if (player2 == 4 || player2 == 17 || player2 == 30 || player2 == 43)
            {
                val2 = 4;
                card2="SIX";
            }  
    //5, 18, 31, 44 correspond to SEVEN, values = 5          
            if (player1 == 5 || player1 == 18 || player1 == 31 || player1 == 44)
            {
               val1 = 5; 
               card1="SEVEN";
            }
            if (player2 == 5 || player2 == 18 || player2 == 31 || player2 == 44)
            {
                val2 = 5;
                card2="SEVEN";
            } 
    //6, 19, 32, 45 correspond to EIGHT, values = 6          
            if (player1 == 6 || player1 == 19 || player1 == 32 || player1 == 45)
            {
               val1 = 6; 
               card1="EIGHT";
            }
            if (player2 == 6 || player2 == 19 || player2 == 32 || player2 == 45)
            {
                val2 = 6;
                card2="EIGHT";
            } 
    //7, 20, 33, 46 correspond to NINE, values = 7          
            if (player1 == 7 || player1 == 20 || player1 == 33 || player1 == 46)
            {
               val1 = 7; 
               card1="NINE";
            }
            if (player2 == 7 || player2 == 20 || player2 == 33 || player2 == 46)
            {
                val2 = 7;
                card2="NINE";
            }     
    //8, 21, 34, 47 correspond to TEN, values = 8          
            if (player1 == 8 || player1 == 21 || player1 == 34 || player1 == 47)
            {
               val1 = 8; 
               card1="TEN";
            }
            if (player2 == 8 || player2 == 21 || player2 == 34 || player2 == 47)
            {
                val2 = 8;
                card2="TEN";
            }
    //9, 22, 35, 48 correspond to JACK, values = 9          
            if (player1 == 9 || player1 == 22 || player1 == 35 || player1 == 48)
            {
               val1 = 9; 
               card1="JACK";
            }
            if (player2 == 9 || player2 == 22 || player2 == 35 || player2 == 48)
            {
                val2 = 9;
                card2="JACK";
            }       
    //10, 23, 36, 49 correspond to QUEEN, values = 10          
            if (player1 == 10 || player1 == 23 || player1 == 36 || player1 == 49)
            {
               val1 = 10; 
               card1="QUEEN";
            }
            if (player2 == 10 || player2 == 23 || player2 == 36 || player2 == 49)
            {
                val2 = 10;
                card2="QUEEN";
            }  
    //11, 24, 37, 50 correspond to KING, values = 11          
            if (player1 == 11 || player1 == 24 || player1 == 37 || player1 == 50)
            {
               val1 = 11; 
               card1="KING";
            }
            if (player2 == 11 || player2 == 24 || player2 == 37 || player2 == 50)
            {
                val2 = 11;
                card2="KING";
            }   
    //12, 25, 38, 51 correspond to ACE, values = 12          
            if (player1 == 12 || player1 == 25 || player1 == 38 || player1 == 51)
            {
               val1 = 12; 
               card1="ACE";
            }
            if (player2 == 12 || player2 == 25 || player2 == 38 || player2 == 51)
            {
                val2 = 12;
                card2="ACE";
            }         

    //Display Outputs
    if(val1 > val2) {
        pnt1 += 2;
        cout<<"PLAYER1 placed a "<<card1<<" and PLAYER2 placed a "<<card2<<endl;
        cout<<"PLAYER1 has "<<pnt1<<" cards and PLAYER2 has "<<pnt2<<" cards"<<endl; 
    }
            else if(val1 < val2) {
                pnt2 += 2;
                cout<<"PLAYER1 placed a "<<card1<<" and PLAYER2 placed a "<<card2<<endl;
                cout<<"PLAYER1 has "<<pnt1<<" cards and PLAYER2 has "<<pnt2<<" cards"<<endl;    
            }
            
    else {
        wPnts = 2;
        while(val1 == val2) {
                cout<<"PLAYER1 placed a "<<card1<<" and PLAYER2 placed a "<<card2<<endl;
                cout<<"IT IS A WAR!"<<endl;
                i++;
                player1=card[i];
                i++;
                player2=card[i];
                wPnts +=2;
                cout<<"Press ENTER to continue..."<<endl;
                cin.ignore();
            if (player1 == 0 || player1 == 13 || player1 == 26 || player1 == 39)
            {
                val1 = 0;
                card1="TWO";    
            }
            if (player2 == 0 || player2 == 13 || player2 == 26 || player2 == 39)
            {
                val2 = 0;
                card2="TWO";  
            }
    //1, 14, 27, 40 correspond to THREE, values = 1
            if (player1 == 1 || player1 == 14 || player1 == 27 || player1 == 40)
            {
               val1 = 1; 
               card1="THREE";
            }
            if (player2 == 1 || player2 == 14 || player2 == 27 || player2 == 40)
            {
                val2 = 1;
                card2="THREE";
            }
    //2, 15, 28, 41 correspond to FOUR, values = 2           
            if (player1 == 2 || player1 == 15 || player1 == 28 || player1 == 41)
            {
               val1 = 2; 
               card1="FOUR";
            }
            if (player2 == 2 || player2 == 15 || player2 == 28 || player2 == 41)
            {
                val2 = 2;
                card2="FOUR";
            }        
    //3, 16, 29, 42 correspond to FIVE, values = 3           
            if (player1 == 3 || player1 == 16 || player1 == 29 || player1 == 42)
            {
               val1 = 3; 
               card1="FIVE";
            }
            if (player2 == 3 || player2 == 16 || player2 == 29 || player2 == 42)
            {
                val2 = 3;
                card2="FIVE";
            }  
    //4, 17, 30, 43 correspond to SIX, values = 4           
            if (player1 == 4 || player1 == 17 || player1 == 30 || player1 == 43)
            {
               val1 = 4; 
               card1="SIX";
            }
            if (player2 == 4 || player2 == 17 || player2 == 30 || player2 == 43)
            {
                val2 = 4;
                card2="SIX";
            }  
    //5, 18, 31, 44 correspond to SEVEN, values = 5          
            if (player1 == 5 || player1 == 18 || player1 == 31 || player1 == 44)
            {
               val1 = 5; 
               card1="SEVEN";
            }
            if (player2 == 5 || player2 == 18 || player2 == 31 || player2 == 44)
            {
                val2 = 5;
                card2="SEVEN";
            } 
    //6, 19, 32, 45 correspond to EIGHT, values = 6          
            if (player1 == 6 || player1 == 19 || player1 == 32 || player1 == 45)
            {
               val1 = 6; 
               card1="EIGHT";
            }
            if (player2 == 6 || player2 == 19 || player2 == 32 || player2 == 45)
            {
                val2 = 6;
                card2="EIGHT";
            } 
    //7, 20, 33, 46 correspond to NINE, values = 7          
            if (player1 == 7 || player1 == 20 || player1 == 33 || player1 == 46)
            {
               val1 = 7; 
               card1="NINE";
            }
            if (player2 == 7 || player2 == 20 || player2 == 33 || player2 == 46)
            {
                val2 = 7;
                card2="NINE";
            }     
    //8, 21, 34, 47 correspond to TEN, values = 8          
            if (player1 == 8 || player1 == 21 || player1 == 34 || player1 == 47)
            {
               val1 = 8; 
               card1="TEN";
            }
            if (player2 == 8 || player2 == 21 || player2 == 34 || player2 == 47)
            {
                val2 = 8;
                card2="TEN";
            }
    //9, 22, 35, 48 correspond to JACK, values = 9          
            if (player1 == 9 || player1 == 22 || player1 == 35 || player1 == 48)
            {
               val1 = 9; 
               card1="JACK";
            }
            if (player2 == 9 || player2 == 22 || player2 == 35 || player2 == 48)
            {
                val2 = 9;
                card2="JACK";
            }       
    //10, 23, 36, 49 correspond to QUEEN, values = 10          
            if (player1 == 10 || player1 == 23 || player1 == 36 || player1 == 49)
            {
               val1 = 10; 
               card1="QUEEN";
            }
            if (player2 == 10 || player2 == 23 || player2 == 36 || player2 == 49)
            {
                val2 = 10;
                card2="QUEEN";
            }  
    //11, 24, 37, 50 correspond to KING, values = 11          
            if (player1 == 11 || player1 == 24 || player1 == 37 || player1 == 50)
            {
               val1 = 11; 
               card1="KING";
            }
            if (player2 == 11 || player2 == 24 || player2 == 37 || player2 == 50)
            {
                val2 = 11;
                card2="KING";
            }   
    //12, 25, 38, 51 correspond to ACE, values = 12          
            if (player1 == 12 || player1 == 25 || player1 == 38 || player1 == 51)
            {
               val1 = 12; 
               card1="ACE";
            }
            if (player2 == 12 || player2 == 25 || player2 == 38 || player2 == 51)
            {
                val2 = 12;
                card2="ACE";
            }
                
           cout<<"PLAYER1 placed a "<<card1<<" and PLAYER2 placed a "<<card2<<endl;
           if(val1 > val2) {
               pnt1 += wPnts;
               cout<<"PLAYER1 WON THE WAR!"<<endl<<endl;
               cout<<"PLAYER1 has "<<pnt1<<" cards and PLAYER2 has "<<pnt2<<" cards"<<endl;
           }
           if(val1 < val2) {
               pnt2 += wPnts;
               cout<<"PLAYER1 LOST THE WAR!"<<endl<<endl;
               cout<<"PLAYER1 has "<<pnt1<<" cards and PLAYER2 has "<<pnt2<<" cards"<<endl;
           }

        }
    }
    
  
            cout<<"Press ENTER to continue..."<<endl;
            cin.ignore();
    }
        if(pnt1 > pnt2)
            cout<<"PLAYER1 WIN!";
        
            else if(pnt1 == pnt2)
                cout<<"IT IS A TIE!";
        else
            cout<<"PLAYER1 LOSE!";
    //Exit stage right!
    in.close();         //Closes input file
    return 0;
}