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
void bubbleSortAcend(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
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
void bubbleSortDecend(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (arr[j - 1] < arr[j])
            {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void Sort(int arr[], int size, int parametr=1)
{
    if (parametr==0)
    {
        bubbleSortAcend(arr, size);
    }
    else
    {
        bubbleSortDecend(arr, size);
    }
}

int main()
{
    const int size = 10;
    int arr[size];
    int user_input;
    initArr(arr, size);
    showArr(arr, size);
    cout << "Enter type of sorting [0] - acend   [1] - decent >> "; cin >> user_input;
    Sort(arr, size, user_input);
    showArr(arr, size);
}
