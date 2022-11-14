#include<vector> 
#include<iostream>
using namespace std; 

void insertionSort(vector <int> &a)
{
     int n1 = a.size(); 
     int key; 
     int i ; 
     for(int j = 1 ; j<n1; j++){
         key = a[j];
          i= j-1; 

    while(i>=0 && a[i]>= key){
        a[i+1]= a[i]; 
        i = i-1; 

    }
    a[i+1] =key; 
    i = i+1; 


     }

}
void printout(vector<int> a, int n ){
    for (int i = 0 ; i<n-1; i++){
        cout<<a[i]<<endl;
    }
}
