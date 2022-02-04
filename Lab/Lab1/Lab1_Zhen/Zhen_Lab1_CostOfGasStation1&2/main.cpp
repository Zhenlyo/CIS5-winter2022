/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created on January 7, 2022, 10:40 PM
 * Purpose:  Lab 1 
 *           Calculate the cost of Gas Station 1 and Gas Station 2
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const unsigned char CNVPERC=100;//Conversion to Percentage

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float  gGage,  //Gas Gage percentage full
           tnkSize,  //Size of tank in gallons
           mpg,      //Miles per Gallon
           galReq,   //Gallons Required at fill-up
           reGasGa,  //Regular Gas $/Gallon
           miles;     //Miles to Gas Station
         
    float costTFU,  //cost to fill up
          ttlDist,  //Total distance driven in miles back and forth to Gas Station
          cotoGS,   //Cost to drive distance to and from Gas Station
          ttlCosM,  //Total cost $ with mileage to Gas Station
            prcPG,  //Price per gallon when adding in mileage to station
            input;
    
    //Initialize Known Variables
    gGage=0.75f;//75% full
    tnkSize=2.2e1f;//22.0 -> Number of gallons
    mpg=0.17e2f;   //17.0 -> Gas mileage 
    galReq=0.55e1f;//5.5
    
    cout<<"Enter number of station:"; 
    cin>>input;
    
    //Gas station 1 variables
    if (input == 1){
        reGasGa=4.25f;
        miles=10;
    }
    
    
    //Gas station 2 variables
    if (input == 2){
        reGasGa=4.09f;
        miles=20;   
    }
    
    //Map the inputs/known to the outputs
    costTFU=reGasGa*galReq;
    ttlDist=2*miles;
    cotoGS=ttlDist/mpg*reGasGa;
    ttlCosM=costTFU+cotoGS;
    prcPG=ttlCosM/galReq;
    
    
    //Display the outputs
    cout<<"Gas Station No."<<input<<endl;
    cout<<"Gas Gage % Full                                               = "<<gGage*CNVPERC<<"%"<<endl;
    cout<<"Miles to Gas Station                                          = "<<miles<<" miles"<<endl;
    cout<<"Total distance driven in miles back and forth to Gas Station  = "<<ttlDist<<" miles"<<endl;
    cout<< fixed;
    cout<< setprecision(2);
    //cout.unsetf( ios_base::floatfield );  for undo fixed
    cout<<"Regular Gas                                                   = $"<<reGasGa<<" /gallon"<<endl;
    cout<<"Cost to fill up                                               = $"<<costTFU<<endl;
    cout<<"Cost to drive distance to and from Gas Station                = $"<<cotoGS<<endl;
    cout<<"Total cost with mileage to Gas Station                        = $"<<ttlCosM<<endl;
    cout<<"Price per gallon when adding in mileage to station            = $"<<prcPG<<" /gallon"<<endl;

    //Exit the program
    return 0;
}