#include <iostream>
using namespace std;

//int Change(int a)
//{
//    a++;
//    return a;
//}
void Change(int *a)//adress
{
    (*a)++;
}
int findMax(int a, int b, int c)
{
    if (a > b and a > c)
    {
        return a;
    }
    else if (b > a and b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int* FindMax(int *a, int *b, int *c)
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
void initArr(int *arr, int size)
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
}
int* maxElem(int* arr, int size)
{
    int* max = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr+i) > *max)
        {
            max = arr + i;
        }
    }
    return max;
}

int main()
{
    srand(time(0));

    const int size = 10;
    int arr[size]{};
    initArr(arr, size);
    showArr(arr, size);
    int* maxElement = maxElem(arr, size);
    cout << "Max element in arr : " << maxElement << endl;
    cout << "Max element in arr : " << *maxElement << endl;
    *maxElement *= 2;
    showArr(arr, size);
    cout << "Max element in arr : " << *maxElement << endl;


    //int a = 5, b = 67, c = 7;
    //cout << "a = " << a << " b = " << b << " c = " << c << endl;
    //int max = findMax(a, b, c);
    //cout << "Max : " << max << endl;
    //cout << "a = " << a << " b = " << b << " c = " << c << endl;
    //int* Max = FindMax(&a, &b, &c);
    //cout << "Max el : " << *Max << endl;
    //(*Max)++;
    //cout << "Max el : " << *Max << endl;
    //cout << "a = " << a << " b = " << b << " c = " << c << endl;


    //int a = 5;
    //int* pa = &a;

    //int b = 10;
    //int* pb = &b;

    //cout << "a = " << a << endl;
    //Change(&a);
    //cout << "a = " << a << endl;
    //Change(&a);
    //cout << "a = " << a << endl;
    //Change(&a);
    //cout << "a = " << a << endl;
    //Change(&a);

    //cout << "a : " << a << endl;
    //cout << "pa : " << pa << endl;
    //cout << "*pa : " << *pa << endl;

    //cout << "b : " << b << endl;
    //cout << "pb : " << pb << endl;
    //cout << "*pb : " << *pb << endl;

    //cout << a + b << endl;
    ////cout << pa + pb << endl; ERROR
    //cout << *pa + *pb << endl;

    //pa = &b;
    ////pb = &a;
    //cout << "b : " << b << endl;
    //cout << "*pa : " << *pa << endl;
    //cout << "*pb : " << *pb << endl;

    //*pa += 2;
    //cout << "b : " << b << endl;
    //cout << "*pa : " << *pa << endl;
    //cout << "*pb : " << *pb << endl;

    //const int size = 10;
    //int arr[size]{67};
    //int* parr = &arr[0];
    //cout << arr[0] << endl;
    //cout << parr << endl;
    //cout << *parr << endl;

    ///*for (int i = 0; i < size; i++)
    //{
    //    arr[i] = rand() % 100; cout << arr[i] << " ";
    //}*/

    //for (int i = 0; i < size; i++)
    //{
    //    *(parr + i) = rand() % 100;
    //}cout << endl;
    //for (int i = 0; i < size; i++)
    //{
    //    cout << *(parr+i) << " ";
    //    
    //}cout << endl;
    //cout << parr << endl;
    //cout << *parr << endl;
    //cout << parr + 1 << endl;
    //cout << *parr + 1 << endl;




    //parr = arr;
    //
    //int* newptr = arr;
    //*newptr = 0;
    //newptr += 3;
    //*newptr = 0;

    //parr = arr;
    //for (int i = 0; i < size; i++)
    //{
    //    *parr = rand() % 100;
    //    parr++;
    //}cout << endl;

    //for (int i = 0; i < size; i++)
    //{
    //    cout << *parr << " ";
    //    parr++;
    //}cout << endl;

    //for (int i = 0; i < size; i++)
    //{
    //    cout << *parr << " ";
    //    parr--;
    //}cout << endl;



}
