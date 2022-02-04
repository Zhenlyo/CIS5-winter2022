/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 19, 2022, 19:26 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char ply1, ply2;
   
    
    //Initialize or input i.e. set variable values
   cout<<"Rock Paper Scissors Game"<<endl;
   cout<<"Input Player 1 and Player 2 Choices"<<endl;
   cin>>ply1>>ply2;
   ply1=toupper(ply1);
   ply2=toupper(ply2);
   
    //Map inputs -> outputs
   if(ply1==ply2) 
    cout<<"Nobody wins"<<endl;
   else {
       switch(ply1) {
           case'p':
           case'P': if(ply2=='R'||ply2=='r')
                        cout<<"Paper covers rock.";
                    else 
                        cout<<"Scissors cuts paper.";
                    break;
           case'r':
           case'R': if(ply2=='S'||ply2=='s')
                        cout<<"Rock breaks scissors.";
                    else
                        cout<<"Paper covers rock.";
                    break;
           case's':
           case'S': if(ply2=='P'||ply2=='p')
                        cout<<"Scissors cuts paper.";
                    else
                        cout<<"Rock breaks scissors.";
                    break;
       }
   }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}