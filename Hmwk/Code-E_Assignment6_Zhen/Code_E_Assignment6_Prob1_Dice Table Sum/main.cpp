/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created: Februray 2, 2022, 11:49 AM
 * Purpose:  Dice Table Sum
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS = 6;
    
    int tablSum[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tablSum,ROWS);
    
    //Display the outputs
    prntTbl(tablSum,ROWS);

    //Exit stage right or left!
    return 0;
}

void fillTbl(int a[][COLS],int n) {
    for(int i = 0; i < n; i++) {
       for(int j = 0; j < n; j++) {
          a[i][j] = (i + 1) + (j + 1);
       } 
    }
}
void prntTbl(const int a[][COLS],int n) {
    cout<<"Think of this as the Sum of Dice Table"<<endl;
    cout<<"           C o l u m n s"<<endl;
    cout<<"     |   1   2   3   4   5   6"<<endl;
    cout<<"----------------------------------"<<endl;
    for(int row = 0; row <= 5; row++) {
        if(row == 0) cout<<"   ";
        if(row == 1) cout<<"R  ";
        if(row == 2) cout<<"O  ";
        if(row == 3) cout<<"W  ";
        if(row == 4) cout<<"S  ";
        if(row == 5) cout<<"   ";
        cout<<row + 1<<" |";
    for(int col = 0; col <= 5; col++) {
        cout<<setw(4)<<a[row][col];
    }
    cout<<endl;
    }
}