#include <iostream>
using namespace std;

void initArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 41 - 20;
    }
}
void showArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findIndexRight(int arr[], int size)
{
    int right;

    for (int i = 0; i < size; i++)
    {

            if (arr[i]<0)
            {
                right = i;
            }

    }
    return right;
}

int findIndexLeft(int arr[], int size)
{
    int left;
    for (int i = size - 1; i > 0; i--)
    {
        if (arr[i]<0)
        {
            left = i;
        }
    }
    return left;
}

void Sort(int arr[], int size, int left, int right)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = right-1; j > left+1; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    srand(time(0));

    const int size = 10;
    int arr[size];
    initArr(arr, size);
    cout << "Unsorted : ";
    showArr(arr, size);
    int rightIndex = findIndexRight(arr, size);
    int leftIndex = findIndexLeft(arr, size);
    cout << arr[leftIndex] << " " << arr[rightIndex] << endl;
    cout << "Sorted : ";
    Sort(arr, size, leftIndex, rightIndex);
    showArr(arr, size);
}
