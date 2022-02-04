/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on Jan 19th, 2022, 21:48 PM
 * Purpose:  Basic Menu with functions and examples
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time library
#include <iomanip>   //Formatting Lbrary
#include <cmath>     //Math Library - Log Function
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const unsigned char CNVPERC=100;//Conversion to Percentage

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void prob10();

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //Display the menu
        cout<<endl;
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 1 - Sum-Gaddis 9thEd Chap5 Prob1"<<endl;
        cout<<"Problem 2 - Pay In Pennies - Gaddis 9thEd Chap5 Prob7"<<endl;
        cout<<"Problem 3 - Min Max - Gaddis 9thEd Chap5 Prob13"<<endl;
        cout<<"Problem 4 - Rectangle- Gaddis 9thEd Chap5 Prob22"<<endl;
        cout<<"Problem 5 - Pattern - Gaddis 9thEd Chap5 Prob23"<<endl;
        cout<<"Problem 6 - Sav9EdC4P1"<<endl;
        cout<<"Problem 7 - Sav9EdC4P2"<<endl;
        cout<<"Problem 8 - Sav9EdC4P4"<<endl;
        cout<<"Problem 9 - Sav9EdC4P5"<<endl;
        cout<<"Problem 10 - Sav9EdC4P9"<<endl;
        cout<<"Greater than 10, all negatives to exit"<<endl;
        cout<<endl;
        cin>>choose;
        
        //Display the Solution to the problems
        switch(choose){
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            case 5:prob5();break;
            case 6:prob6();break;
            case 7:prob7();break;
            case 8:prob8();break;
            case 9:prob9();break;
            case 10:prob10();break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

    return 0;
}

void prob1(){
    //Declare Variables
    int number;
    int i,
        sum;
    
    //Initialize or input i.e. set variable values
    sum = number;
    cin>>number;
    
    //Map inputs -> outputs
    while (number<1) {
        cout<<"Enter a Number Greater Than Zero.";
    }
    for (int i = 0; i <= number; i++) {
        sum += i;
    }
    //Display the outputs
    cout<<"Sum = "<<sum;
    cout<<endl;
  
    
    
}

void prob2(){
    //Declare Variables
    int day;
   
    //Initialize or input i.e. set variable values
  
    cin>>day;
    //Map inputs -> outputs
    if (day < 1) {
        cout<<"Enter a Number Greater Than One.";
    }
    else if (day >= 1 ) {
        cout<<fixed<<setprecision(2);
        cout<<"Pay = $"<<setw(3)<<((pow(2,day)-1)/100);
    }
    
    //Display the outputs
    cout<<endl;

    //Exit stage right or left!
    
}
void prob3(){
    //Declare Variables
    int num,
        max,
        min;
    //Initialize or input i.e. set variable values
    

    //Map inputs -> outputs
    cin>>num;
    max = min = num;
    while (num != -99) {
        cin>>num;
   
        if(num > max && num != -99) {
            max = num;
        }
        if(num < min && num != -99) {
            min = num;
        }
    }
    //Display the outputs
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;
    cout<<endl;
    }
    


void prob4(){
     //Declare Variables
    int num;
    char letter;
    
    cin>>num>>letter;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    if (num <= 15 && num >= 1) {
        for (int i = num; i > 0; i--) {
            for (int i = num; i > 0; i--) {
                cout<<letter;
                 } 
                 if (i > 1) {
                     cout<<endl;
                }
        }
        } 
    //Display the outputs
cout<<endl;
    //Exit stage right or left!
    
}

void prob5(){
     //Declare Variables
    short num;
    char plus; 
    
    //Initialize or input i.e. set variable values
   
   cin>>num; 
   plus = '+';
    //Map inputs -> outputs
    for(int i = 0; i < num; i++) {
        for(int j = 0; j <= i; j++) {
            cout<<plus;
        }
        cout<<endl;
        
        if(i != num) {
          cout<<endl;  
        }
        
    }
    
    for(int i = 0; i < num; i++) {
        for(int j = num; j > i; j--) {
            cout<<plus;
        }
        if(i != num-1) {
          cout<<endl; 
          cout<<endl;
        }
        
    }
   //Display the outputs
     cout<<endl;   
    }
    
 
    //Exit stage right or left!
    


void prob6(){
    //Declare Variables
    const float galPLtr = .264179;  //0.264179 gallon per liter;
    bool flag;
    float mile, liter;
    float mpg;
    char option;
    
    //Initialize or input i.e. set variable values
    mpg = mile/(liter*galPLtr);  //miles per gallon
    mile;  //miles traveled
    liter; //liters consumed 
    
    //Map inputs -> outputs
    cout<<fixed<<setprecision(2);
    flag = 0;
    do {
        if(flag == 1) {
            cout<<endl;
        }
    flag = 1;
        cout<<"Enter number of liters of gasoline:"<<endl;
	    cout<<endl;
	    
	    cin>>liter;
	    cout<<"Enter number of miles traveled:"<<endl;
	    cout<<endl;
	    cin>>mile;
	    
	    mpg = mile/(liter*galPLtr);
	    
	    cout<<"miles per gallon:" <<endl;
	    cout<<mpg <<endl;
	    cout<<"Again:"<<endl;
	    cin>>option;
        
    }
    while (option == 'y' || option == 'Y');
   cout<<endl;
    //Exit stage right or left!
    
}
void prob7(){
     //Declare Variables
    const float galPLtr = .264179;  //0.264179 gallon per liter;
    bool flag;
    float mile1, liter1,
          mile2, liter2;
    float mpg1, mpg2;
    char option;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<fixed<<setprecision(2);
    flag = 0;
    do {
        if(flag == 1) {
            cout<<endl;
        }
    flag = 1;
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter1;
	    cout<<"Enter number of miles traveled:"<<endl;
	    cin>>mile1;
	    
	    mpg1 = mile1/(liter1*galPLtr);
	    cout<<"miles per gallon: "<<mpg1<<endl;
	    cout<<endl;
	    
	    
	    cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter2;
	    cout<<"Enter number of miles traveled:"<<endl;
	    cin>>mile2;
	    
	    mpg2 = mile2/(liter2*galPLtr);
	    cout<<"miles per gallon: "<<mpg2<<endl;
	    cout<<endl;
	    
	    if(mpg1>mpg2) {
	        cout<<"Car 1 is more fuel efficient"<<endl;
	        cout<<endl;
	    }
	    if(mpg1<mpg2) {
	        cout<<"Car 2 is more fuel efficient"<<endl;
	        cout<<endl;
	    }
	    cout<<"Again:"<<endl;
	    cin>>option;
    }
    while (option == 'y' || option == 'Y');
        cout<<endl;
    //Exit stage right or left!
    
}

void prob8(){
    //Declare Variables
    bool flag;
    float curnt, yrAgo;
    float rate;
    char option;
    //Initialize or input i.e. set variable values
    curnt;  //current price
    yrAgo;  //year-ago price
    rate;   //inflation rate
    //Map inputs -> outputs
    cout<<fixed<<setprecision(2);
    flag = 0;
    do {
        if(flag == 1) {
            cout<<endl;
        }
    flag = 1;
        cout<<"Enter current price:"<<endl;
        cin>>curnt;
        cout<<"Enter year-ago price:"<<endl;
        cin>>yrAgo;
        
        rate = ((curnt - yrAgo) / yrAgo);
        cout<<"Inflation rate: "<<rate*CNVPERC<<"%"<<endl;
        cout<<endl;
        cout<<"Again:"<<endl;
	    cin>>option;
        
    }
    while (option == 'y' || option == 'Y');
    cout<<endl;
}

void prob9(){
    //Declare Variables
    bool flag;
    float curnt, yrAgo;
    float rate,pric1, pric2;
    char option;
    //Initialize or input i.e. set variable values
    curnt;  //current price
    yrAgo;  //year-ago price
    rate;   //inflation rate
    pric1;  //price in one year
    pric2;  //price in two year
    
    //Map inputs -> outputs
    cout<<fixed<<setprecision(2);
    flag = 0;
    do {
        if(flag == 1) {
            cout<<endl;
        }
    flag = 1;
        cout<<"Enter current price:"<<endl;
        cin>>curnt;
        cout<<"Enter year-ago price:"<<endl;
        cin>>yrAgo;
        
        rate = ((curnt - yrAgo) / yrAgo);
        cout<<"Inflation rate: "<<rate*CNVPERC<<"%"<<endl;
        cout<<endl;
        
        pric1 = ((curnt*rate)+curnt);
        cout<<"Price in one year: $"<<pric1<<endl;
        
        pric2 = ((pric1*rate)+pric1);
        cout<<"Price in two year: $"<<pric2<<endl;
        cout<<endl;
        
        cout<<"Again:"<<endl;
	    cin>>option;
        
    }
    while (option == 'y' || option == 'Y');
    cout<<endl;
}

void prob10(){
    //Declare Variables
    float a, b, c; 
    
    
 
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:"<<endl;
    cout<<endl;
    cin>>a;
    cout<<"Enter Second number:"<<endl;
    cout<<endl;
    cin>>b;
    cout<<"Enter third number:"<<endl;
    cout<<endl;
    cin>>c;
    cout<<fixed<<setprecision(1);
    
   

    //Map inputs -> outputs
     cout<<"Largest number from two parameter function:"<<endl;
        if (a > b) {
            cout<<a<<endl;
            cout<<endl;
        }
        else {
            cout<<b<<endl;
            cout<<endl;
        }

    
    cout<<"Largest number from three parameter function:"<<endl; 
        if (b < a && a > c) {
           cout<<a<<endl;
            }
          
        else if (a < b && b > c) {
            cout<<b<<endl;
            }
            
            else 
            cout<<c<<endl;
    cout<<endl;
}
