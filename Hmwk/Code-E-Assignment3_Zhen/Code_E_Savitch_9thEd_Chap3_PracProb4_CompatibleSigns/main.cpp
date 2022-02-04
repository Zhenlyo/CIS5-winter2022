/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 19, 2022, 20:36 PM
 * Purpose:  Horoscope
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
    string sign1, sign2;
    int fire1, fire2,
         earth1, earth2,
         air1, air2,
         water1, water2;
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>sign1>>sign2;
    
    //Map inputs -> outputs
    if(sign1=="Aries" || sign1=="Leo" || sign1=="Sagittarius"||
       sign1=="aries" || sign1=="leo" || sign1=="sagittarius") {
        fire1=true;
    }else if(sign1=="Taurus" || sign1=="Virgo" || sign1=="Capricorn"||
             sign1=="taurus" || sign1=="virgo" || sign1=="capricorn") {
        earth1=true;
    }else if(sign1=="Gemini" || sign1=="Libra" || sign1=="Aquarius"||
             sign1=="gemini" || sign1=="libra" || sign1=="aquarius") {
        air1=true;
    }else if(sign1=="Cancer" || sign1=="Scorpio" || sign1=="Pisces"||
             sign1=="cancer" || sign1=="scorpio" || sign1=="pisces") {
        water1=true;
    }
    else {
        cout<<"Invalid Input For Sign 1."<<endl;
    }
    
    if(sign2=="Aries" || sign2=="Leo" || sign2=="Sagittarius"||
       sign2=="aries" || sign2=="leo" || sign2=="sagittarius") {
        fire2=true;
    }else if(sign2=="Taurus" || sign2=="Virgo" || sign2=="Capricorn"||
             sign2=="taurus" || sign2=="virgo" || sign2=="capricorn") {
        earth2=true;
    }else if(sign2=="Gemini" || sign2=="Libra" || sign2=="Aquarius"||
             sign2=="gemini" || sign2=="libra" || sign2=="aquarius") {
        air2=true;
    }else if(sign2=="Cancer" || sign2=="Scorpio" || sign2=="Pisces"||
             sign2=="cancer" || sign2=="scorpio" || sign2=="pisces") {
        water2=true;
    }
    else {
        cout<<"Invalid Input For Sign 2."<<endl;
    }
    
    if(fire1==true&&fire2==true) {
        cout<<sign1<<" and "<<sign2<<" are compatible Fire signs.";
    }else if(earth1==true&&earth2==true) {
        cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
    }else if(air1==true&&air2==true) {
        cout<<sign1<<" and "<<sign2<<" are compatible Air signs.";
    }else if(water1==true&&water2==true) {
        cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
    }
    else {
        cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}