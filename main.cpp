#include<vector>
#include<iostream>
#include<cstdlib>
#include "sorting.cpp"
#include<ctime>

using namespace std; 


int main(){
    vector <int> array ; 
    srand(time(NULL)); 
    int n ; 
    cout<<"Enter the numebr of elements in the array"<<endl;
    cin>> n ; 
    for(int i = 0 ; i<n-1; i++){
        array.push_back(rand()%10); 

    }
    
    insertionSort(array); 
    printout(array,n); 

   




}