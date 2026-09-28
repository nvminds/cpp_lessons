#include <iostream>
#include <iomanip>
using namespace std;

void initMatrix(int** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 90 + 10;
        }
    }
}
void showMatrix(int** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(3) << arr[i][j] << " ";
        }cout << endl;
    }cout << endl;
}
void fillOneRow(int* arr, int col)
{
    for (int i = 0; i < col; i++)
    {
        arr[i] = rand() % 10;
    }
}
int** addRowInStart(int** arr, int& row, int col)
{
    int** temp = new int* [row + 1];
    for (int i = 0; i < row; i++)
    {
        temp[i+1] = arr[i];
    }
    delete[]arr;
    temp[0] = new int[col]; fillOneRow(temp[0], col);
    row++;
    return temp;
}
int** deleteRowInStart(int** arr, int& row, int col)
{
    int** temp = new int* [row - 1];
    for (int i = 1; i < row; i++)
    {
        temp[i-1] = arr[i];
    }
    delete[]arr[0];
    delete[]arr;
    row--;
    return temp;
}
int** deleteRowByPos(int** arr, int& row, int col, int pos)
{
    int** temp = new int* [row - 1];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = pos + 1; i < row; i++)
    {
        temp[i - 1] = arr[i];
    }
    delete[]arr[pos];
    delete[]arr;
    row--;
    return temp;
}
int** addColToStart(int** arr, int row, int& col)
{
    int** temp = new int* [row];
    for (int i = 0; i < row; i++)
    {
        temp[i] = new int[col + 1];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[i][j+1] = arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;
    for (int i = 0; i < row; i++)
    {
        temp[i][0] = 6;
    }
    col++;
    return temp;
}
int** addColToPos(int** arr, int row, int& col, int pos)
{
    int** temp = new int* [row];
    for (int i = 0; i < row; i++)
    {
        temp[i] = new int[col + 1];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < pos; j++)
        {
            temp[i][j] = arr[i][j];
        }
        for (int j = pos; j < col; j++)
        {
            temp[i][j+1] = arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;
    for (int i = 0; i < row; i++)
    {
        temp[i][pos] = rand() % 10;
    }
    col++;
    return temp;
}
int** deleteColByPos(int** arr, int row, int& col, int pos)
{
    int** temp = new int* [row];
    for (int i = 0; i < row; i++)
    {
        temp[i] = new int[col - 1];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < pos; j++)
        {
            temp[i][j] = arr[i][j];
        }
        for (int j = pos+1; j < col; j++)
        {
            temp[i][j-1] = arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;
    col--;
    return temp;
}

int main()
{
    srand(time(0));

    int rows = 5;
    int cols = 6;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    initMatrix(arr, rows, cols);
    cout << "Default matrix : " << endl;
    showMatrix(arr, rows, cols);
    
    //1
    cout << "Matrix with deleted row to start : " << endl;
    arr = deleteRowInStart(arr, rows, cols);
    showMatrix(arr, rows, cols);

    //2
    cout << "Matrix with added row to start : " << endl;
    arr = addRowInStart(arr, rows, cols);
    showMatrix(arr, rows, cols);

    //3
    int pos;
    cout << "Enter row pos to delete : "; cin >> pos;
    arr = deleteRowByPos(arr, rows, cols, pos);
    cout << "Matrix with deleted row by position : "<< endl;
    showMatrix(arr, rows, cols);

    //4
    cout << "Matrix with added column to start : " << endl;
    arr = addColToStart(arr, rows, cols);
    showMatrix(arr, rows, cols);

    //5
    cout << "Enter column pos to add : "; cin >> pos;
    arr = addColToPos(arr, rows, cols, pos);
    cout << "Matrix with added column to position : " << endl;
    showMatrix(arr, rows, cols);

    //6
    cout << "Enter column pos to delete : "; cin >> pos;
    arr = deleteColByPos(arr, rows, cols, pos);
    cout << "Matrix with deleted column by position : " << endl;
    showMatrix(arr, rows, cols);


    for (int i = 0; i < rows; i++)
    {
        delete[]arr[i];
    }

    delete[]arr;
}
