/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 19, 2022, 14:36 PM
 * Purpose:  Write a program that calculates a customer’s monthly bill. 
             It should ask which packagethe customer has purchased and 
             how many hours were used. It should then display the total
             amount due.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char package;
    int hours;
    float packA, packB, packC;
    float ttlA, ttlB, ttlC;
    
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>package>>hours;
    cout<<fixed<<setprecision(2);
    
    //Map inputs -> outputs
    packA = 9.95;  //Package A $9.95 per month 10 hours access.Additional hours are $2.00 per hour.
    packB = 14.95; //Package B $14.95 per month 20 hours access. Additional hours are $1.00 per hour.
    packC = 19.95; //Package C $19.95 per month unlimited access.


    if(hours>774) {
        cout<<"The Number Of Hours Used In A Month Cannot Exceed 744."<<endl;
    }
    else if (package == 'a' || package == 'b' || package == 'c'||
             package == 'A' || package == 'B' || package == 'C')
           { switch (package) {  
                        case 'a':
                        case 'A': if(hours<=10) 
                                      ttlA = packA; 
                                  else          
                                      ttlA = packA + (2*(hours-10));
                                  cout<<"Bill = $ "<<ttlA;
                                  break;
                        case 'b':
                        case 'B': if(hours<=20) 
                                      ttlB  = packB;
                                  else          
                                      ttlB  = (packB + (1*(hours-20)));
                                  cout<<"Bill = $ "<<ttlB;
                                  break;
                        case 'c':
                        case 'C': if(hours<=774) 
                                      ttlC = packC;
                                  cout<<"Bill = $ "<<ttlC;
                       }
           } else  {
        cout<<"Invalid Package Choice"<<endl;
        cout<<"Please Enter Package A, B, or C.";
        
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}