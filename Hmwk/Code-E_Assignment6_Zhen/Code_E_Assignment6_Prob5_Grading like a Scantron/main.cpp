/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created: Februray 3, 2022, 21:30 PM
 * Purpose: Compare the answer sheet to the key
 *          and grade
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(string &);

int  compare(string &,string &,string &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const int SIZE = 20;
    string useless;
    string key,answers,score;
    cin>>useless;
    for(int i = 0; i < SIZE; i++) {
        char letter;
        cin>>letter;
        key += letter;
    } 
    cin>>useless;
    for(int i = 0; i < SIZE; i++) {
        char letter;
        cin>>letter;
        answers += letter;
    } 
    
    float pRight;
    
    //Initialize or input i.e. set variable values

    
    //Score the exam
    pRight=compare(key,answers,score);
    
    //Display the outputs
    cout<<"C/W     ";print(score);
    cout<<"Percentage Correct = "<<pRight/score.size()*100<<"%"<<endl;
    

    //Exit stage right or left!
    return 0;
}

void print(string &score){
    for(int i = 0; i < score.size(); i++) {
        cout<<score[i]<<" ";
    }
    cout<<endl;
}

int  compare(string &key, string &answers, string &score) {
    int correct = 0;
    for(int i = 0; i < key.size(); i++) {
        if(key[i] == answers[i]) {
            correct++;
            score+='C';
        }
        if(key[i] != answers[i]) {
            score+='W';
        }
    }
    return correct;
}
