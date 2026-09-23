#include <iostream>
using namespace std;

void initArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void showArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int* maxArr(int* arr, int size)
{
    int* max = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *max)
        {
            max = arr + i;
        }
    }
    return max;
}
int* minArr(int* arr, int size)
{
    int* min = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) < *min)
        {
            min = arr + i;
        }
    }
    return min;
}
void swapMinMax(int* arr, int size, int* Min, int* Max)
{
    int temp;
    temp = *Min;
    *Min = *Max;
    *Max = temp;
}
void findEven(int* arr, int size)
{
    for (int i = 0; i < size; i += 2)
    {
        cout << arr[i] << " ";
    }cout << endl;
}
void findOdd(int* arr, int size)
{
    for (int i = 1; i < size; i += 2)
    {
        cout << arr[i] << " ";
    }cout << endl;
}
void swapEvenOdd(int* arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i+=2)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i+1] = temp;
    }
}

int main()
{
    srand(time(0));

    //3
    //const int size = 10;
    //int arr[size]{};
    //initArr(arr, size);
    //showArr(arr, size);
    //int* maxNum = maxArr(arr, size);
    //int* minNum = minArr(arr, size);
    //cout << "Max number in array : " << *maxNum << endl;
    //cout << "Min number in array : " << *minNum << endl;
    //swapMinMax(arr, size, minNum, maxNum);
    //showArr(arr, size);

    //4
    const int size = 10;
    int arr[size]{};
    initArr(arr, size);
    cout << "Array : "; showArr(arr, size);

    cout << endl;
    cout << "Even numbers in array : "; findEven(arr, size);
    cout << "Odd numbers in array : "; findOdd(arr, size); 
    cout << endl;

    swapEvenOdd(arr, size);
    cout << "Array with swapped odd and even numbers : "; showArr(arr, size);

}
