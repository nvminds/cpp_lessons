#include <iostream>
using namespace std;

int main()
{
    //масив це набір однотипних даних, об'єднаний загальним ім'ям

    //int train[3];
    //train[0] = 33;
    //train[1] = 1;
    //train[2] = 10;
    //cout << "vagon 1 : " << train[0] << endl;
    //cout << "vagon 2 : " << train[1] << endl;
    //cout << "vagon 3 : " << train[2] << endl;

    //const int size = 12;
    //int marks[size];
    //marks[0] = 10;
    //marks[1] = 4;
    //marks[2] = 12;
    //marks[3] = 7;
    //marks[4] = 8;
    //marks[5] = 8;
    //marks[6] = 9;
    //marks[7] = 11;
    //marks[8] = 10;
    //marks[9] = 5;
    //marks[10] = 3;
    //marks[11] = 7;
    //cout << "marks : " << marks[0] << " - " << marks[5] << " - " << marks[11] << endl;

    //int arr1[5];

    //const int size = 10;
    //double arr[size];

    const int size = 10;
    int arr1[size] = { 1 };

    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    int arr2[size] = {};

    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int arr3[size] = {1,2,3};

    for (int i = 0; i < size; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    //int arr4[size];
    //for (int i = 0; i < size; i++)
    //{
    //    cout << "Enter number " << i+1 << " : "; cin >> arr4[i];
    //}
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr4[i] << " ";
    //}

    //1
    const int size1 = 10;
    int arr5[size1] = { 5, -9, 11, -4, 22, 7, -6, 2, 3, 8 };
    int summ = 0;
    int min = arr5[0], max = arr5[0];

    for (int i = 0; i < size1; i++)
    {
        if (arr5[i]<0)
        {
            summ += arr5[i];
        }
        if (arr5[i] > max) {
            max =arr5[i];
        }
        if (arr5[i] < min) {
            min = arr5[i];
        }
    }
    cout << "Negative elements : " << summ << endl;
    cout << "Max element : " << max << endl;
    cout << "Min element : " << min << endl;

}
