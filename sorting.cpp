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

int partition(int arr[], int low, int high)
{
 
    int pivot = arr[low];
 
    int count = 0;
    for (int i = low + 1; i <= high; i++) {
        if (arr[i] <= pivot)
            count++;
    }
 
    int pivotIndex = low + count;
    swap(arr[pivotIndex], arr[low]);
 
    
    int i = low, j = high;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}
 
void quickSort(int arr[], int low, int high)
{
 
    
    if (low >= high)
        return;
 
   
    int pivot = partition(arr, low, high);
 
   
    quickSort(arr, low, pivot - 1);
 
   
    quickSort(arr, pivot + 1, high);
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
