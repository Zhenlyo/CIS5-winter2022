/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created: Februray 3, 2022, 15:30 PM
 * Purpose: Standard Deviation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);//Initialize the array
void  print(float [],int,int);//Print the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int);//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,5);
    cout<<setprecision(7)<<fixed;
    cout<<"The average            = "<<avgX(test,SIZE)<<endl;
    cout<<"The standard deviation = "<<stdX(test,SIZE)<<endl;

    //Exit stage right or left!
    return 0;
}

float avgX(float a[],int n) {
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    } return sum/n;
}

float stdX(float a[],int n) {
    float mean = avgX(a, n);
    float sum  = 0;
    for(int i = 0; i < n; i++) {
        sum += pow((a[i] - mean), 2);
    }
    sum = sum/(n-1);
    return sqrt(sum);
}

void  print(float a[],int n,int m) {

}

void  init(float a[],int n) {
    for(int i = 0; i < n; i++) {
        scanf("%f",&a[i]);
    } 
}