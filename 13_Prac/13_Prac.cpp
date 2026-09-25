#include <iostream>
using namespace std;

int* CreateArr(int size)
{
    int* arr = new int[size];
    return arr;
}
void InitArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }cout << endl;
}
void ShowArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}
int* removeLastNumber(int* arr, int* size)
{
    int* temp = new int[*size - 1];
    for (int i = 0; i < *size-1; i++)
    {
        temp[i] = arr[i];
    }
    delete[]arr;
    (*size)--;
    return temp;
}
int* addNumberToEnd(int* arr, int* size, int number)
{
    int* temp = new int[*size + 1];
    for (int i = 0; i < *size; i++)
    {
        temp[i] = arr[i];
    }
    temp[*size] = number;
    delete[]arr;
    (*size)++;
    return temp;
}
int* addNumberToPos(int* arr, int* size, int number, int pos)
{
    int* temp = new int[*size + 1];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    temp[pos] = number;
    for (int i = pos; i < *size; i++)
    {
        temp[i+1] = arr[i];
    }
    delete[]arr;
    (*size)++;
    return temp;
}
int* removeNumberByPos(int* arr, int* size, int pos)
{
    int* temp = new int[*size - 1];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = pos+1; i < *size; i++)
    {
        temp[i-1] = arr[i];
    }
    delete[]arr;
    (*size)--;
    return temp;
}


int main()
{
    srand(time(0));

    //1
    //int* pa = new int(10);
    //float* pb = new float(6.7);
    //double* pc = new double(13.37);

    //cout << "pa = " << pa << endl;
    //cout << "pb = " << pb << endl;
    //cout << "pc = " << pc << endl;
    //cout << endl;
    //cout << "*pa = " << *pa << endl;
    //cout << "*pb = " << *pb << endl; 
    //cout << "*pc = " << *pc << endl; 
    //cout << endl;
    //cout << "(*pa) * (*pb) * (*pc) = " << (*pa) * (*pb) * (*pc) << endl;

    //delete pa;
    //delete pb;
    //delete pc;

    //2
    int size=1;
    int number, pos;
    cout << "Enter array size : "; cin >> size;
    int* arr = CreateArr(size);
    InitArray(arr, size);
    cout << "Default array : "; ShowArray(arr, size); cout << endl;
    

    cout << "Enter number add to end : "; cin >> number;
    arr = addNumberToEnd(arr, &size, number);
    cout << "Array with added number to end : "; ShowArray(arr, size);

    cout << "Enter number position to add : "; cin >> pos;
    cout << "Enter number : "; cin >> number;
    arr = addNumberToPos(arr, &size, number, pos);
    cout << "Array with added number to pos : "; ShowArray(arr, size);
    
    cout << "Enter number position to remove : "; cin >> pos;
    arr = removeNumberByPos(arr, &size, pos);
    cout << "Array with removed number from pos : "; ShowArray(arr, size);

    arr = removeLastNumber(arr, &size);
    cout << "Array with deleted last : "; ShowArray(arr, size);


    delete[]arr;
}
