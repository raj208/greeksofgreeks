// Given an array Arr of size N, print second largest distinct element from an array.

#include <iostream>
using namespace std;

int main()
{
    int n; // number of elements
    cout << "Enter the number of digit you want to sort" << endl;
    cin >> n;

    int arr[n]; // declare array with size n

    // input elements of the array
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort the array in ascending order using Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // display the sorted array
    cout << "Second largest number is : " ;
    for (int i = n - 2 ; i < n- 1 ; i++)
    {
        
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}