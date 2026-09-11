#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    //int start;
    //cin >> start;
    srand(time(0));

    int a;
    a = rand();//0...32767
    cout << a << endl;
    a = rand()%10;
    cout << a << endl;
    a = rand() % 10;
    cout << a << endl;
    a = rand() % 10;
    cout << a << endl;
    a = rand() % 10;
    cout << a << endl;
    a = rand() % 10;
    cout << a << endl;
    //32769 % 10 == 9
    //32768 % 10 == 8
    //32767 % 10 == 7
    //32766 % 10 == 6
    //32765 % 10 == 5
    //32764 % 10 == 4
    //32763 % 10 == 3
    //32762 % 10 == 2
    //32761 % 10 == 1
    //32770 % 10 == 0
    cout << endl;

    for (int i = 0; i < 40; i++)
    {
        a = rand() % 100;
        a++;
        cout << a << " ";
    }cout << endl; cout << endl;

    //0....x  rand()%x

    //10...99
    for (int i = 0; i < 40; i++)
    {
        a = rand() % 90;
        a += 10;
        cout << a << " ";
    }cout << endl; cout << endl;

    // marks 8 -- 12
    //12-8 = 4 rand()%4 0...7 +8
    for (int i = 0; i < 40; i++)
    {
        a = rand() % 5 + 8;
        cout << a << " ";
    }cout << endl; cout << endl;

    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand()%100;
        cout << arr[i] << " ";
    }cout << endl; cout << endl;

    cout << "\n----------------Two dimention array ------------------" << endl;
    const int rows = 4, colums = 5;
    int arr1[rows][colums]{};
    for (int i = 0; i < rows; i++)
    {
        int max = arr1[i][0];
        for (int j = 0; j < colums; j++)
        {
            arr1[i][j] = rand() % 100;
            cout << setw(3.5)<<(arr1[i][j]) << " ";
            if (arr1[i][j]>max) {
                max = arr1[i][j];
            }
        }
        cout << "\tMax element in row -> " << max << endl;

    }cout << endl;

    int arr2[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    //int arr2[3][3] = { {1,2,3}, {4,5,6} };
    //int arr2[3][3] = { 6,4,7,43,55 };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}
