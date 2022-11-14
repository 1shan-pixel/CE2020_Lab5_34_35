#include "sorting.h"
#include <cstdlib>
#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

void generateRandonArray(int arr[], int numOfElement)
{
    // Use current time as seed for random generator
    srand(time(0));
    for (int i = 0; i < numOfElement; i++)
    {
        arr[i] = rand();
    }
}

void quickSort(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high + 1;
    while (i < j)
    {
        while (arr[j] < pivot)
        {
            j = j - 1;
        }
        while (arr[i] > pivot)
        {
            i = i + 1;
        }
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
}


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
