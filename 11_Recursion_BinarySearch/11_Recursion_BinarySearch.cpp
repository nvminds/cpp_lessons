#include <iostream>
using namespace std;

int Foo(int a)
{
    if (a==0){
        return 0; //break
    }
    cout << "Hello " << a << endl;
    a--;
    return Foo(a);
}
int Summa(int arr[], int size, int index)
{
    if (index == size-1) {
        return arr[index];
    }
    else {
        return arr[index] + Summa(arr, size, index + 1);
    }
}
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
void quickSort(int arr[], int size, int start, int end)
{
    int i = start, j = end;
    int temp, p;
    p = arr[(start+end)/2];
    do
    {
        while (arr[i] < p)i++;
        while (arr[j] > p)j--;
        if (i <= j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);
    if (start < j) {
        quickSort(arr, size, start, j);
    }
    if (i < end) {
        quickSort(arr, size, i, end);
    }
}
int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    while (true)
    {
        int p = (start + end) / 2;
        if (key > arr[p])
        {
            start = p + 1;
        }
        else if (key < arr[p])
        {
            end = p - 1;
        }
        else if (key == arr[p])
        {
            return p;
        }
        if (start > end) return -1;
    }
}

int main()
{
    srand(time(0));

    Foo(10);
    cout << Foo << endl;

    const int size = 10;
    int arr[size] = {1,52,83,44,5,6,76,8,19,10};
    int summa = 0;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        summa += arr[i];
    }
    cout << endl;
    cout << "Summ of elements : " << summa << endl;
    cout << endl;
    summa = Summa(arr, size, 0);
    cout << "Summ of elements 2: " << summa << endl;
    initArr(arr, size);
    showArr(arr, size);
    quickSort(arr, size, 0, size - 1);
    showArr(arr, size);
    //Quick sort

    int searchKey;
    cout << endl;
    cout << "Enter search key >> "; cin >> searchKey;
    int indexFind = binarySearch(arr, size, searchKey);
    if (indexFind!=-1)
    {
        cout << "Element [" << searchKey << "] find in index [" << indexFind << "]" << endl;
    }
    else {
        cout << "Element [" << searchKey << "] not found" << endl;
    }

}
