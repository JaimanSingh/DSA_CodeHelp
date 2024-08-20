#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n)
{

    int left = 0, right = n - 1;

    while (left < right)
    {

        while (arr[left] == 0 && left < right)
        {
            left++;
        }

        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        // agar yahan pohoch gaye ho, iska matlab:
        // arr[i]==1 and arr[j]==0
        if (arr[left] == 1 && arr[right] == 0 && left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    cout << " Returning the Sorted array" << endl;
    printArray(arr, 8);
}

int main()
{

    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};

    sortOne(arr, 8);
    cout << " printing after function call " << endl;
    printArray(arr, 8);

    return 0;
}