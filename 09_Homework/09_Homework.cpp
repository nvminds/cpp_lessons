#include <iostream>
#include <iomanip>
using namespace std;

void initShowMatrix(int arr[][10], int rows, int cols)
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
void initShowMatrix(double arr[][10], int rows, int cols)
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
void initShowMatrix(char arr[][10], int rows, int cols)
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

int maxMatrix(int arr[][10], int rows, int cols)
{
    int max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j and arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}
double maxMatrix(double arr[][10], int rows, int cols)
{
    double max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j and arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}
char maxMatrix(char arr[][10], int rows, int cols)
{
    char max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i==j and arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int minMatrix(int arr[][10], int rows, int cols)
{
    int min = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j and arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    return min;
}
double minMatrix(double arr[][10], int rows, int cols)
{
    double min = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j and arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    return min;
}
char minMatrix(char arr[][10], int rows, int cols)
{
    char min = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j and arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    return min;
}

int main()
{
    srand(time(0));

    //4
    const int row = 10;
    const int col = 10;
    int arr[row][col];
    double arr1[row][col];
    char arr2[row][col];
    initShowMatrix(arr, row, col);
    cout << "Max in matrix main diagonal (int): " << maxMatrix(arr, row, col) << endl; cout << endl;
    initShowMatrix(arr1, row, col);
    cout << "Max in matrix main diagonal (double): " << maxMatrix(arr1, row, col) << endl; cout << endl;
    initShowMatrix(arr2, row, col);
    cout << "Max in matrix main diagonal (char): " << maxMatrix(arr2, row, col) << endl; cout << endl;

}
