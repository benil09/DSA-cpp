#include <iostream>
using namespace std;

void mergeSorted(int arr1[], int arr2[], int arr3[], int m, int n)
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < m)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < n)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int num1[5] = {1, 3, 5, 7, 9}; // size m
    int num2[4] = {2, 4, 6, 8};    // size n

    int num3[9] = {0};

    mergeSorted(num1, num2, num3, 5, 4);
    print(num3, 9);
    return 0;
}