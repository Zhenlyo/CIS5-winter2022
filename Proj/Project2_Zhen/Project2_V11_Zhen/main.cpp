/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on February 8, 2022, 05:12 AM
 * Purpose:  The card game "WAR" V11
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
void overld(int i);                      //Overload function
void overld(char const *i);              //Overload function
void gendeck(int []);
void turn();
void twoD(int [][COLS],int [],int,int);
bool firstP(int);
void prntary(vector<float>,int);
void info();                         //Function to print instructions
void selSrt(vector<float>&,int);
int assign1(int,string &,int);       //assign card1
int assign2(int,string &,int);       //assign card2
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
     
    ifstream inFile;    
    ofstream outFile;
    string card1,       //The name of player 1's card (I.E. ACE,KING,TWO)
           card2;       //The name of player 2's card(I.E. ACE,KING,TWO)
   
    char use;           //User selection in the menu
    card1 = "zero";
    card2 = "zero";
    first = 0;
    
    //User input their selection
    cout<<"Welcome To The Card Game Of War!"
        <<endl<<"Enter 'a' To Receive Instructions"
        <<endl<<"Enter 'b' To Start The Game"
        <<endl<<"Enter 'x' To End The Program"<<endl;
    cin>>use;                                  //User inputs their selection
    
    if(use == 'x') {
        exit(0);
    }

    while(use != 'a' && use != 'b') {          //the user enter a or b
        cout<<"PLEASE ENTER EITHER NUMBER 'a' OR 'b' TO RESTART THE PROGRAM "<<endl;
        cin>>use;                              //User inputs choice 
    }
    if(use == 'a'){                            //Reads instructions if a is entered
      do {
          info();
            cout<<"Enter 'a' to receive instructions"<<endl
                <<"Enter 'b' to play the game"<<endl;
            cin>>use;                          //User selects an option again
            
            while(use!='a' && use!='b'){       //Tells the user to enter a or b
                cout<<"Please enter either 'a' or 'b'"<<endl;
                cin>>use;                      //User inputs choice
            }
        
        }while(use == 'a');                    //Continues to display instructions if user enters 1
    }
        int num;
        inFile.open("variable.dat");           //Open file
        inFile>>num;                           //Enter the number from file into num
        
        while(use == 'b') {                    //While the user has selected 2, play the game!
            int card[num];                     // Size of the deck
            gendeck(card);
            overld("Fifty-Two");               //Overload function with char
            overld(num);                       //Overload function with int
            cout<<endl<<"This is the randomly generated deck in a 2D array"<<endl<<endl;
        
            int ROWS=4;
            int table[ROWS][COLS];
            int z=0;
            twoD(table,card,z,ROWS);        //Initializes the 2D array and prints it 
            pnt1 = pnt2 = 0;                //point1, point2 = 0              
        

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
                    else if(bVal == false && val1 != val2) {//Occurs if player2's card is a higher value
                        pnt2 += 3;
                        pnt2--;//Gives player2 two cards or points
                        cout<<"PLAYER1 placed a "<<card1<<" and PLAYER2 placed a "<<card2<<endl;
                        cout<<"PLAYER1 has"<<setw(3)<<pnt1<<" cards and PLAYER2 has"<<setw(3)<<pnt2<<" cards"<<endl<<endl;
                    }
                    else {//If the cards are equal, it is a war
                        warpnts = 2;//Gives two points if the tie occurs only once
                            while(val1 == val2) {//While loop if there are multiple ties
                                cout<<"PLAYER1 placed a "<<card1<<" and PLAYER2 placed a "<<card2<<endl;
                                cout<<"IT IS A WAR!"<<endl<<endl;
                        
                                cout<<"Press ENTER to continue..."<<endl;
                                cin.ignore();               //Make the user press enter
                    
                            i++;                        //Move to the next number or card in deck
                            player1 = card[i];          //Assign player1's card 
                            i++;                        //Move to the next number or card in deck
                            player2 = card[i];          //Assign player2's card
                            warpnts += 2;               //Increase the points awarded if multiple ties
                       
                            val1 = assign1(player1,card1,val1);//Assigns player 1 card
                            val2 = assign2(player2,card2,val2);//Assigns player 2 card
                        
                            cout<<"PLAYER1 placed a "<<card1<<" and PLAYER2 placed a "<<card2<<endl;
                                if(val1 > val2) {           //if player1 wins the war
                                    pnt1 += warpnts;        //Award player1 the points/cards
                                    cout<<"PLAYER1 WON THE WAR!"<<endl;
                                    cout<<"PLAYER1 has "<<pnt1<<" cards and PLAYER2 has "<<pnt2<<" cards"<<endl<<endl;
                                }
                                else if(val1 < val2) {      //if player2 wins the war
                                    pnt2 += warpnts;        //Award player2 the points/cards
                                    cout<<"PLAYER1 LOST THE WAR!"<<endl;
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
                            cout<<"PLAYER1 LOST!"<<endl;
        
                        percet = (pnt1/52) * CNVPRNT;   //Equation to calculate percentage of cards won
                            
                        if(firstP(first)){
                            cout<<"The User Has Played ";
                            turn();
                            cout<<" Game"<<endl;            
                        }
        
                         else {
                            cout<<"The User Has Played A Total Of ";
                            turn();
                            cout<<" Games"<<endl;
                        }
                         first = 1;
                                cout<<"PLAYER1 won "<<setprecision(4)<<percet<<"% of the cards in the deck"<<endl<<endl;
                                cout<<"Would you like to play again?"<<endl<<"Enter 'b' to play again"    //Asks to play again
                                    <<endl<< "Enter 'x' to skip the statistics"
                                    <<endl<<"Enter anything else to quit"<<endl;
                                cin>>use;    //Plays game again if b is entered, else program ends
                        if(use == 'x')
                            exit(0);
        
                                scores.push_back(percet);
            
            }
        int SIZE = scores.size();
        
        int numgams[SIZE];                      //Initialize number of games for table
        float gamscrs[SIZE];                    //Initialize scores for table
        
        for(int i = 0; i < SIZE; i++){          //Fill array for game number
            numgams[i] = i+1;
        }
        for(int i = 0; i < SIZE; i++){          //Copy the scores from the vector before a sort
            gamscrs[i] = scores[i];
        }
        cout<<"Here are all the percentages of cards PLAYER1 ended with"<<endl;
        prntary(scores,SIZE);
        cout<<endl;
        
        cout<<"Here are all scores of PLAYER1 sorted"<<endl;
        selSrt(scores,SIZE);
        
        prntary(scores,SIZE);
        
        float findtie[SIZE];                    //Array for finding a tie in games played
        for(int i = 0; i < SIZE; i++){          //Set this array to be equal to sorted vector
            findtie[i] = scores[i]; 
        }

        float value = 50;                       //The tie value we are looking for
        int indx = -1;                          //Initializes index
        binSrch(findtie,SIZE,value,indx);       //Find where tie is
        
        if(indx == -1){                         //If the tie wasn't in the array
            cout<<endl<<"A Tie Was Not Played In This Run"<<endl;
        }
        
        else {                                  //If a tie was found in the array
            cout<<endl<<"A Tie Was Found In Element "<<indx<<"."<<endl;
        }
     
        cout<<endl<<setw(12)<<"Games"<<setw(12)<<"Scores"<<endl;
        for(int i = 0; i < SIZE; i++){          //Print table for game scores
           cout<<setw(12)<<numgams[i]<<setw(12)<<gamscrs[i];
           cout<<endl;
        }
        
        outFile.open("stats.dat");   //Open file
        outFile<<endl<<setw(12)<<"Games"<<setw(12)<<"Scores"<<endl;           //Send data to file
        for(int i = 0; i < SIZE; i++){                                       //Send data to file
           outFile<<setw(12)<<numgams[i]<<setw(12)<<setprecision(4)<<gamscrs[i];  
           outFile<<endl;
        }
        outFile.close();            //Close file
        
        bublsrt(gamscrs,SIZE);
        
        cout<<endl<<"Here are the scores sorted again"<<endl;              
        for(int i=0;i<SIZE;i++){    
            cout<<gamscrs[i]<<" ";
        }
     return 0;
}
void overld(int i){
    cout<<"There are "<<i<< " cards in a deck."<<endl;
}

void overld(const char *i){
    cout<<"There are "<<i<< " cards in a deck."<<endl;
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
bool firstP(int first){
    bool value;
    if(first == 0)
        value = true;
        
    else
        value = false;
        return false;   
}
void turn(){
    static int num = 1;
    cout<<num;
    num++;
}

void gendeck(int card[]){
        for(int i = 0; i < 52; i++) {
            card[i] = i;  //Filles the array in order
        }
        
        for(int i = 0; i < 52; i++) {   //Shuffles the deck in random order
            int random = rand() % 52;     
            int temp = card[i]; card[i] = card[random]; card[random] = temp;
        }
        
}

void twoD(int table[][COLS],int card[],int k,int ROWS){
    
        for(int i = 0; i < ROWS; i++){
            
            for(int j = 0; j < COLS; j++){
                table[i][j] = card[k];
                k++;
            }
        }
        
        for (int i = 0; i < ROWS; i++){
            int k = 0;
            for (int j = 0; j < COLS; j++){
                cout<<setw(4)<<table[i][j];
            }
            cout<<endl;
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

    