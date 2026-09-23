#include <iostream>
using namespace std;

int* FindMax(int* a, int* b, int* c)
{
    if (*a > *b and *a > *c)
    {
        return a;
    }
    else if (*b > *a and *b > *c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int* FindMin(int* a, int* b, int* c)
{
    if (*a < *b and *a < *c)
    {
        return a;
    }
    else if (*b < *a and *b < *c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int multyNumb(int* a, int* b, int* c)
{
    int q = (*a * *b * *c);
    return q;
}
int avgNumb(int* a, int* b, int* c)
{
    int q = (*a + *b + *c)/3;
    return q;
}
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
void showArrReverse(int* arr, int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int summArr(int* arr, int size)
{
    int summ = 0;
    for (int i = 0; i < size; i++)
    {
        summ += arr[i];
    }
    return summ;
}


int main()
{
    srand(time(0));

    //1
    int a = 3, b = 2, c = 4;
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    int* maxNum = FindMax(&a, &b, &c);
    int* minNum = FindMin(&a, &b, &c);
    int avgNum = avgNumb(&a, &b, &c);
    int multyNum = multyNumb(&a, &b, &c);
    cout << "Max : " << *maxNum << endl;
    cout << "Min : " << *minNum << endl;
    cout << "Average : " << avgNum << endl;
    cout << "Multiply : " << multyNum << endl;

    //2
    const int size = 10;
    int arr[size]{};
    initArr(arr, size); 
    showArr(arr, size);
    showArrReverse(arr, size);
    int summa = summArr(arr, size);
    cout << "Summ of numbers in array : " << summa << endl;
}
