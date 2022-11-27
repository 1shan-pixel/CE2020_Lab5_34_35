#include <vector>
#include <iostream>
#include <cstdlib>
#include "sorting.cpp"
#include <ctime>

using namespace std;

int main()
{
    vector<int> array;
    srand(time(NULL));
    int n;

    cout << "Enter the numebr of elements in the array" << endl;
    cin >> n;
    int m = 200000;
    int arr[200000];
    generateRandonArray(arr, m);
    for (int i = 0; i < n - 1; i++)
    {
        array.push_back(rand() % 10);
    }
    time_t before;
    time_t after;
    time(&before);

    insertionSort(array);
    
    time(&after);
    cout<<after-before;

    cout << difftime(after, before) << endl;

    const clock_t begin_time = clock();
    quickSort(arr, 0, m - 1);
    
    std::cout << float(clock() - begin_time) / CLOCKS_PER_SEC;
}