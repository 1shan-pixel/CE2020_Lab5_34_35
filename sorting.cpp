<<<<<<< HEAD
#include "sorting.h"
#include <cstdlib>
#include <iostream>
#include <time.h>

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
=======
>>>>>>> 9aaf7f7f963c28330550fb2761aace370774cb41
