/* 
 * File:   main.cpp
 * Author: Zhen Liu
 * Created: Februray 3, 2022, 16:40 PM
 * Purpose:  Binary Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void selSrt(int [],int);
bool binSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    indx = 0;
    fillAry(array,SIZE);

    //Sorted List
    selSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
    return 0;
}

void fillAry(int a[],int n) {
    for(int i = 0; i < n; i++) {
        a[i] = rand()%90 + 10;
        cin>>a[i];
    }
}

void prntAry(int a[], int n, int perLine) {
     for(int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
        if(i%perLine == (perLine - 1)) cout<<endl;
    }cout<<endl;
}

void selSrt(int a[], int n) {
    int min;
    for(int i = 0; i < n - 1; i++) {
        min = i;
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[min]) {
               min = j;
            }
        }swap(a[min], a[i]);
    }
}

bool binSrch(int a[], int SIZE, int val, int &indx) {
    int left = 0,
        right = SIZE - 1;
    while(left <= right) {
        int mid = (left + right)/2;
    if(a[mid] == val) {
        indx = mid;
        return true;
    }
    else if(a[mid] >  val) {
        right = mid - 1;
    }
    else if(a[mid] < val) {
        left = mid + 1;
    } 
}
return false;
}