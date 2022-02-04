/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 19, 2022, 19:30 PM
 * Purpose:  Roman_Conversion
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    short arabic;
    string roman = "";
    char n1s, n10s, n100s, n1000s;
    
    //Initialize or input i.e. set variable values
   
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>arabic;
    

    n1s      = arabic%10 ;
    n10s     = (arabic/10)%10 ;
    n100s    = (arabic/100)%10 ;
    n1000s   = (arabic/1000)%10 ;
    
    
    switch(n1000s){
        case 3:roman+="M";
        case 2:roman+="M";
        case 1:roman+="M";
    }
    
    
    //Map inputs -> outputs
    if(n100s==9)roman+="CM";
    if(n100s==8)roman+="DCCC";
    if(n100s==7)roman+="DCC";
    if(n100s==6)roman+="DC";
    if(n100s==5)roman+="D";
    if(n100s==4)roman+="CD";
    if(n100s==3)roman+="CCC";
    if(n100s==2)roman+="CC";
    if(n100s==1)roman+="C";
    
    if(n10s==9)roman+="XC";
    if(n10s==8)roman+="LXXX";
    if(n10s==7)roman+="LXX";
    if(n10s==6)roman+="LX";
    if(n10s==5)roman+="L";
    if(n10s==4)roman+="XL";
    if(n10s==3)roman+="XXX";
    if(n10s==2)roman+="XX";
    if(n10s==1)roman+="X";
    
    if(n1s==9)roman+="IX";
    if(n1s==8)roman+="VIII";
    if(n1s==7)roman+="VII";
    if(n1s==6)roman+="VI";
    if(n1s==5)roman+="V";
    if(n1s==4)roman+="IV";
    if(n1s==3)roman+="III";
    if(n1s==2)roman+="II";
    if(n1s==1)roman+="I";
    //Display the outputs

   arabic < 1000 || arabic > 3000
        ? cout << arabic << " is Out of Range!"
        : cout << arabic << " is equal to " << roman;

    //Exit stage right or left!
    return 0;
}