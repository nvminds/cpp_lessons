#include <iostream>
using namespace std;

int showNumber(int num);
void foo(int i=67);
void foo1(int i=6, int j=7);
void SomeFunction();
double multy(double x);
double multy(double x, double y);
double multy(double x, double y , double z );
//double multy(double x, double y, double z = 1, double r = 1);

//Шаблони функцій
//int maxElem(int arr[], int size);
//float maxElem(float arr[], int size);
//double maxElem(double arr[], int size);
//long maxElem(long arr[], int size);
template<typename T_arr>
T_arr maxElem(T_arr arr[], int size)
{
    T_arr max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template<typename T_ab>
T_ab Max(T_ab a, T_ab b)
{
    return (a > b) ? a : b;
}


int main()
{
    //int num = showNumber(8);
    //foo();
    //foo1();
    //SomeFunction();
    //SomeFunction();
    //SomeFunction();
    //SomeFunction();
    //SomeFunction();

    const int size = 10;
    int arr[size]={10,20,30,40,50,60,70,80,90,100};
    float arr1[size]={0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1};
    double arr2[size]={10.1,0.22,20.3,40.45,0.53,0.68,50.67,0.8,40.39,11};
    long arr3[size] = { 20l, 39l, 40l, 67l, 42l, 90l, 22l, 33l, 44l, 777l };
    char arr4[size] = { 's' , 'q', 'q', 'w', 'e', 'e', 'z', 'i', 'v','v'};

    cout << "Max element : " << maxElem(arr, size) << endl;
    cout << "Max element : " << maxElem(arr1, size) << endl;
    cout << "Max element : " << maxElem(arr2, size) << endl;
    cout << "Max element : " << maxElem(arr3, size) << endl;
    cout << "Max element : " << maxElem(arr4, size) << endl;
    cout << endl;
    cout << "res = " << multy(5) << endl;
    cout << "res = " << multy(5,6) << endl;
    cout << "res = " << multy(5,6,7) << endl;

    cout << "Max : " << Max(4, 2) << endl;
    cout << "Max : " << Max(4.5, 4.2) << endl;
    cout << "Max : " << Max('a', 'z') << endl;

}


//Шаблони функцій



//int maxElem(int arr[],int size)
//{
//    int max = arr[0];
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i]>max){
//            max = arr[i];
//        }
//    }
//    return max;
//}
//float maxElem(float arr[],int size)
//{
//    float max = arr[0];
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i]>max){
//            max = arr[i];
//        }
//    }
//    return max;
//}
//double maxElem(double arr[],int size)
//{
//    double max = arr[0];
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i]>max){
//            max = arr[i];
//        }
//    }
//    return max;
//}
//long maxElem(long arr[],int size)
//{
//    long max = arr[0];
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i]>max){
//            max = arr[i];
//        }
//    }
//    return max;
//}

double multy(double x)
{
    return x * x;
}
double multy(double x, double y)
{
    return x * y;
}
double multy(double x, double y, double z)
{
    return x * y * z;
}
//double multy(double x, double y, double z, double r)
//{
//    return x * y * z * r;
//}
int showNumber(int num)
{
    cout << "Num : " << num << endl;
    return num;
}
void foo(int i)
{
    cout << i << endl;
}
void foo1(int i, int j)
{
    cout << i << " " << j << endl;
}
void SomeFunction()
{
    static int a = 0;
    a++;
    cout << a << endl;
}