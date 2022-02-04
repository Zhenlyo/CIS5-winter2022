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

    
    //Declare  Variables here
    string sign1, sign2, type1, type2;

    //Initialize Variables here
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> sign1 >> sign2;

    //Map inputs/knowns to the output
    //find type of sign 1
    type1 = (sign1 == "Aries"  || sign1 == "Leo"     || sign1 == "Sagittarius")   ? "Fire" :
            (sign1 == "Taurus" || sign1 == "Virgo"   || sign1 == "Capricorn")     ? "Earth":
            (sign1 == "Gemini" || sign1 == "Libra"   || sign1 == "Aquarius")      ? "Air"  : "Water";
    //find type of sign 2
    type2 = (sign2 == "Aries"  || sign2 == "Leo"     || sign2 == "Sagittarius")   ? "Fire" :
            (sign2 == "Taurus" || sign2 == "Virgo"   || sign2 == "Capricorn")     ? "Earth":
            (sign2 == "Gemini" || sign2 == "Libra"   || sign2 == "Aquarius")      ? "Air"  : "Water";

    //Display Output
    type1 == type2
        ? cout << sign1 << " and " << sign2 << " are compatible " << type1 << " signs."
        : cout << sign1 << " and " << sign2 << " are not compatible signs.";

    //Exit the program
    return 0;
}
