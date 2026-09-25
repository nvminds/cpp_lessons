#include <iostream>
#include <conio.h>
using  namespace std;

void Change(int& a)//adress
{
    a++;
}
int& findMax(int& a, int& b)
{
    if (a > b) return a;
    else return b;
}
void Test1()
{
    const int size = 10;
    int arr[size];
}
void Test2()
{
    int size = 10;
    cin >> size;
    int *arr = new int[size];
    delete[]arr;
}
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
int* addNewNumber(int *arr, int* size, int number)
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


int main()
{
    srand(time(0));

    int size = 3;
    //cout << "Enter size : "; cin >> size;
    int* arr = CreateArr(size);
    InitArray(arr, size);
    ShowArray(arr, size);

    int number;
    char choice = 'y';
    while (true)
    {
        cout << "Do you want add number ? y/n..." << endl;
        choice = _getch();
        if (choice == 'n') break;
        else {
            cout << "Enter number : "; cin >> number;
            arr = addNewNumber(arr, &size, number);
            //system("cls");
            ShowArray(arr, size);
        }
    }

    delete[]arr;

    //int a = 10; // stack memory

    //int* pa = new int(10); // heap memory
    //int* pb = new int;
    //int* pc = nullptr;

    //*pb = 5;
    //pc = new int(12);

    //cout << "pa = " << pa << endl;
    //cout << "pb = " << pb << endl;
    //cout << "pc = " << pc << endl;
    //cout << endl;
    //cout << "*pa = " << *pa << endl;
    //cout << "*pb = " << *pb << endl; // return trash
    //cout << "*pc = " << *pc << endl; 

    //delete pc;
    //pc = new int(55);
    //cout << endl;
    //cout << "*pa = " << *pa << endl;
    //cout << "*pb = " << *pb << endl; // return trash
    //cout << "*pc = " << *pc << endl; 








    //delete pa;
    //delete pb;
    //delete pc;
    
    /*
    // pointers  &  links
    int a = 10; // variable
    int* pa = &a; // pointer
    int& la = a; // link
    cout <<"a = " << a << endl;
    cout <<"pa = " << pa << endl;
    cout <<"*pa = " << *pa << endl;
    cout <<"la = " << la << endl;

    int b = 7;
    //int* pb;
    int* pb = nullptr;
    pb = &b;
    //int& lb; !error
    int& lb = b; 
    cout << "lb = " << lb << endl;
    cout << "lb = " << lb << endl;
    cout << "a = " << a << endl;
    Change(a);
    cout << "a = " << a << endl;
    cout << endl;

    findMax(a, b) = 25;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Max el : " << findMax(a, b) << endl;
    */
}

