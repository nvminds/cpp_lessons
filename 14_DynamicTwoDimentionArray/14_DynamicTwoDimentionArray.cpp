#include <iostream>
#include <iomanip>
using namespace std;

void initMatrix(int** arr,int row, int col)
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
void fillOneRow(int* arr,int col)
{
    for (int i = 0; i < col; i++)
    {
        arr[i] = rand() % 10;
    }
}
int** addRowToEnd(int** arr, int &row, int col)
{
    int** temp = new int*[row+1];
    for (int i = 0; i < row; i++)
    {
        temp[i] = arr[i];
    }
    temp[row] = new int[col]; fillOneRow(temp[row], col);
    delete[]arr;
    row++;
    return temp;
}
int** addRowToPos(int** arr, int& row, int col, int pos)
{
    int** temp = new int* [row + 1];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    temp[pos] = new int[col]; fillOneRow(temp[pos], col);
    for (int i = pos; i < row; i++)
    {
        temp[i + 1] = arr[i];
    }
    delete[]arr;
    row++;
    return temp;
}
int** addColToTheEnd(int** arr, int row, int &col)
{
    int** temp = new int* [row];
    for (int i = 0; i < row; i++)
    {
        temp[i] = new int [col+1];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[i][j] = arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;
    for (int i = 0; i < row; i++)
    {
        temp[i][col] = 6;
    }
    col++;
    return temp;
}
int** deleteRowByPos(int** arr, int& row, int col, int pos)
{
    int** temp = new int* [row - 1];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = pos+1; i < row; i++)
    {
        temp[i - 1] = arr[i];
    }
    delete[]arr[pos];
    delete[]arr;
    row--;
    return temp;
}
int** deleteLastRow(int** arr, int& row, int col)
{
    int** temp = new int* [row - 1];
    for (int i = 0; i < row-1; i++)
    {
        temp[i] = arr[i];
    }
    delete[]arr[row-1];
    delete[]arr;
    row--;
    return temp;
}

int main()
{
    srand(time(0));
    //int* arr = new int[8];
    //delete[]arr; 

    int rows = 3;
    int cols = 4;
    //cout << "Enter rows count : "; cin >> rows;
    //cout << "Enter columns count : "; cin >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    initMatrix(arr, rows, cols);
    showMatrix(arr, rows, cols);

    arr = addRowToEnd(arr, rows, cols);
    showMatrix(arr, rows, cols);
    arr = addRowToEnd(arr, rows, cols);
    showMatrix(arr, rows, cols);
    arr = addRowToPos(arr, rows, cols, 2);
    showMatrix(arr, rows, cols);
    arr = addColToTheEnd(arr, rows, cols);
    showMatrix(arr, rows, cols);
    arr = deleteRowByPos(arr, rows, cols, 2);
    showMatrix(arr, rows, cols);
    arr = deleteLastRow(arr, rows, cols);
    showMatrix(arr, rows, cols);

    for (int i = 0; i < rows; i++)
    {
        delete[]arr[i];
    }

    delete[]arr;
}
