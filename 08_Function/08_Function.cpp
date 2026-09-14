#include <iostream>
using namespace std;

void sayHello()
{
    cout << "Hello World!" << endl;

}
void sayHello1();//prototype function
void star();
void AnyLine(int count, char symbol);
int myPow(int number, int step);
int maxElem(int a, int b);
int minElem(int a, int b);
void First();
void Second();
void Change(int a,int b);
void initArr(int arr[], int size);
void showArr(int arr[], int size);
int summArr(int arr[], int size);
void initMatrix(int arr[][7], int rows, int cols);
void showMatrix(int arr[][7], int rows, int cols);
void setA();
void showA();
void setSecond();
int A = 199;// local > glogal

int main()
{
    srand(time(0));
    int A = 15;// local > glogal
    cout << A << endl;
    cout << ::A << endl;
    ::A = 333;
    cout << ::A << endl;
    setA();
    showA();
    setSecond();
    showA();
    //int a = 5;
    //if (a == 5) {
    //    int b = 3;
    //    cout << b << endl;
    //}



    const int size = 10;
    const int rows=5;
    const int cols=7;
    int arr1[rows][cols];
    int arr[size];
    initArr(arr, size);
    showArr(arr, size);
    cout << "Summ of arr : " << summArr(arr, size) << endl;
    
    initMatrix(arr1, rows, cols);
    showMatrix(arr1, rows, cols);


    cout << "Max element : " << maxElem(8, 12) << endl;
    cout << "Max element : " << maxElem(182, 112) << endl;
    cout << "Min element : " << minElem(8, 12) << endl;
    cout << "Min element : " << minElem(182, 112) << endl;
    sayHello();
    sayHello1();
    star();
    AnyLine(150, '%');
    myPow(3, 2);
    int res = myPow(2, 3);
    cout << "Pow returned : " << res << endl;
    First();
    cout << endl;
    int a = 4, b = 6;
    Change(a, b);//copy
    cout << "a = " << a << " b = " << b << endl;//original
    cout << "a = " << a << " b = " << b << endl;//original
}



void sayHello1()
{
    cout << "1Hello World!" << endl;
}

void star()
{
    for (int i = 0; i < 15; i++)
    {
        cout << "*" << "";
    }cout << endl;
}

void AnyLine(int count, char symbol)
{
    for (int i = 0; i < count; i++)
    {
        cout << symbol << "";
    }cout << endl;
}

int myPow(int number, int step)
{
    int pow=1;
    for (int i = 0; i < step; i++)
    {
        pow *= number;
    }
    cout << "Pow number : " << number << " = " << pow << endl;
    return pow;
}

int maxElem(int a,int b)
{
    //if (a > b) {
    //    return a;
    //}
    //else
    //{
    //    return b;
    //}
    return (a > b) ?  a : b;
}

int minElem(int a,int b)
{
    return (a < b) ?  a : b;
}

void Second()
{
    cout << "Second function working" << endl;
}

void First()
{
    cout << "First function start" << endl;
    Second();
    cout << "Firs function end" << endl;
}

void Change(int a, int b)
{
    cout << "a = " << a << " b = " << b << endl;
    int t=a;
    a = b;
    b = t;
    cout << "a = " << a << " b = " << b << endl;
}

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
    }cout << endl;
}

int summArr(int arr[], int size)
{
    int summ=0;
    for (int i = 0; i < size; i++)
    {
        summ += arr[i];
    }
        return summ;
    
}

void initMatrix(int arr[][7], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 90 + 10;
        }
    }
}

void showMatrix(int arr[][7], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;;
    }
}

void setA()
{
    A = 99;
}

void showA()
{
    cout << A << endl;
}

void setSecond()
{
    int A = 77;
    cout << A << endl;
}