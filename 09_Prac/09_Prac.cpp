#include <iostream>
#include <iomanip>
using namespace std;

int Max(int a, int b)
{
    return (a > b) ? a : b;
}
float Max(float a, float b)
{
    return (a > b) ? a : b;
}
double Max(double a, double b)
{
    return (a > b) ? a : b;
}
int Max(int a, int b, int c)
{
    int max=a;
    if (b > max and c < b) {
        max = b;
    }
    else if (c > max) {
        max = c;
    }
    return max;
}
float Max(float a, float b, float c)
{
    float max=a;
    if (b > max and c < b) {
        max = b;
    }
    else if (c > max) {
        max = c;
    }
    return max;
}
double Max(double a, double b, double c)
{
    double max=a;
    if (b > max and c < b) {
        max = b;
    }
    else if (c > max) {
        max = c;
    }
    return max;
}
int Min(int a, int b)
{
    return (a < b) ? a : b;
}
float Min(float a, float b)
{
    return (a < b) ? a : b;
}
double Min(double a, double b)
{
    return (a < b) ? a : b;
}
int Min(int a, int b, int c)
{
    int min=a;
    if (b < min and c > b) {
        min = b;
    }
    else if (c < min) {
        min = c;
    }
    return min;
}
float Min(float a, float b, float c)
{
    float min=a;
    if (b < min and c > b) {
        min = b;
    }
    else if (c < min) {
        min = c;
    }
    return min;
}
double Min(double a, double b, double c)
{
    double min=a;
    if (b < min and c > b) {
        min = b;
    }
    else if (c < min) {
        min = c;
    }
    return min;
}


template<typename T_showArr>
void initShowArr(T_showArr arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
}
template<typename T_avg>
T_avg avgArr(T_avg arr[], int size)
{
    T_avg summ = 0; 
    for (int i = 0; i < size; i++)
    {
        summ += arr[i];
    }
    T_avg avg = summ/size;
    return avg;
}
template<typename T_maxArr>
T_maxArr maxArr(T_maxArr arr[], int size)
{
    T_maxArr max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


template<typename T_showMatrix>
void initShowMatrix(T_showMatrix arr[][5], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 100;
            cout << setw(3.5) << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
template<typename T_maxMatrix>
T_maxMatrix maxMatrix(T_maxMatrix arr[][5], int rows, int cols)
{
    T_maxMatrix max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main()
{
    srand(time(0));

    //1
    int a = 3, b=2, c=11;
    cout << "Int:" << endl;
    cout << "Max from two elements : " << Max(a, b) << endl;
    cout << "Max from three elements : " << Max(a, b, c) << endl;
    cout << "Min from two elements : " << Min(a, b) << endl;
    cout << "Min from three elements : " << Min(a, b, c) << endl;
    
    cout << endl;
    cout << "Float:" << endl;
    float a1 = 3.01, b1 = 3.12, c1 = 3.22;
    cout << "Max from two elements : " << Max(a1, b1) << endl;
    cout << "Max from three elements : " << Max(a1, b1, c1) << endl;
    cout << "Min from two elements : " << Min(a1, b1) << endl;
    cout << "Min from three elements : " << Min(a1, b1, c1) << endl;
    
    cout << endl;
    cout << "Double:" << endl;
    double a2 = 3.01, b2 = 3.12, c2 = 3.22;
    cout << "Max from two elements : " << Max(a2, b2) << endl;
    cout << "Max from three elements : " << Max(a2, b2, c2) << endl;
    cout << "Min from two elements : " << Min(a2, b2) << endl;
    cout << "Min from three elements : " << Min(a2, b2, c2) << endl;

    cout << endl;
    cout << endl;

    //2
    const int size = 10;
    int arr[size];
    float arr1[size];
    double arr2[size];
    long arr3[size];
    initShowArr(arr, size);
    cout << "Average of massive elements (int): " << avgArr(arr, size) << endl; cout << endl;
    initShowArr(arr1, size);
    cout << "Average of massive elements (float): " << avgArr(arr1, size) << endl; cout << endl; 
    initShowArr(arr2, size);
    cout << "Average of massive elements (double): " << avgArr(arr2, size) << endl; cout << endl;
    initShowArr(arr3, size);
    cout << "Average of massive elements (long): " << avgArr(arr3, size) << endl; cout << endl;

    cout << endl;
    
    //3
    initShowArr(arr, size);
    cout << "Max element in massive : " << maxArr(arr, size) << endl; cout << endl;
    const int row = 5;
    const int col = 5;
    int arr4[row][col];
    initShowMatrix(arr4, row, col);
    cout << "Max element in matrix : " << maxMatrix(arr4, row, col) << endl; cout << endl;

    cout << endl;
    cout << endl;
}

