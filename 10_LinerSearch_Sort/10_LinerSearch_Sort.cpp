#include <iostream>
using namespace std;

void initArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
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

int linerSearch(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;   
}

void selectSort(int arr[], int size)
{
    int temp, index;
    for (int i = 0; i < size; i++)
    {
        index = i;
        temp = arr[i];
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < temp) {
                temp = arr[j];
                index = j;
            }
           
        }
        if (index != i) {
            arr[index] = arr[i];
            arr[i] = temp;
        }
    }
}

void bubbleSort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = size-1; j > i ; j--)
        {
            if(arr[j - 1]>arr[j])
            {
                temp = arr[j-1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void shakerSort(int arr[], int size)
{
    int index = size - 1;
    int left = 1, right = size - 1;
    int temp;
    do {
        for (int j = right; j>=left ; j--)
        {
            if (arr[j-1]>arr[j])
            {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
            index = j;
        }
        left = index + 1;
        for (int j = left; j <= right; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
            index = j;
        }
        right = index -1;
    } while (left < right);
}

int main()
{
    srand(time(0));

    const int size = 15;
    int arr[size];
    initArr(arr, size);
    showArr(arr, size);
   
    //int searchKey;
    //cout << endl;
    //cout << "Enter search key >> "; cin >> searchKey;
    //int indexFind = linerSearch(arr, size, searchKey);
    //if (indexFind!=-1)
    //{
    //    cout << "Element [" << searchKey << "] find in index [" << indexFind << "]" << endl;
    //}
    //else {
    //    cout << "Element [" << searchKey << "] not found" << endl;
    //}

    //selectSort(arr, size);
    //showArr(arr, size);

    /*bubbleSort(arr, size);
    showArr(arr, size);*/

    shakerSort(arr, size);
    showArr(arr, size);
}
