#include <iostream>
using namespace std;

int main()
{
    ////1
    //const int size = 10;
    //int arr[size];
    //int dob = 1;
    //for (int i = 0; i < size; i++)
    //{
    //    cout << "Enter number : "; cin >> arr[i];
    //    dob *= arr[i];
    //}
    //cout << "Multy all elements : " << dob << endl;

    //2
    //const int size = 7;
    //int arr[size] = {-12, 50, 21, 75, -33, 19, -45};
    //int summ_plus = 0, summ_minus = 0; 
    //for (int i = 0; i < size; i++)
    //{
    //    if (arr[i]>0){
    //        summ_plus += arr[i];
    //    }
    //    if (arr[i]<0){
    //        summ_minus += arr[i];
    //    }
    //}
    //cout << "Summ plus : " << summ_plus << endl;
    //cout << "Minus plus : " << summ_minus << endl;

    //3
    //const int size = 7;
    //int arr[size] = { 1, 2, 3, 4, 5, 6, 7 };
    //int summ = 0;
    //for (int i = 0; i < size; i++)
    //{
    //    if (arr[i] % 2 == 0) {
    //        summ += arr[i];
    //    }
    //}
    //cout << "Summ of even numbers : " << summ << endl;

    //4
    //const int size = 10;
    //int arr[size];
    //int quarter;
    //for (int i = 1; i < size; i++)
    //{
    //    arr[i] = 2 * i;

    //    cout << arr[i] << " ";
    //    
    //}
    //cout << endl;
    //cout << endl;
    //for (int i = size-1; i > 0; i--)
    //{
    //    arr[i] = 2 * i;

    //    cout << arr[i] << " ";
    //    
    //}

    //5
    //const int size = 10;
    //int arr[size] = { -12, 50, 21, 75, -33, 19, -45, 10, -67, 32 };

    //for (int i = 0; i < size; i++)
    //{
    //    if (arr[i] < 0) {
    //        arr[i] *= -1;
    //    }
    //    cout << arr[i] << " ";
    //}

    //6
    const int size = 12;
    int arr[size];
    int diap1, diap2, min=0, max = 0;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter company salary in " << i+1 << " month : "; cin >> arr[i];
    }

    cout << endl;
    cout << "Enter 1st diapazone index : "; cin >> diap1;
    cout << "Enter 2nd diapazone index : "; cin >> diap2;
    diap1--;
    diap2--;

    for (int i = diap1; i <= diap2; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < max) {
            min = arr[i];
        }
    }

    cout << endl;
    cout << "Salary in " << diap1+1 << "-" << diap2+1 << " diapazone : " << endl;
    cout << "Min salary : " << min << endl;
    cout << "Max salary : " << max << endl;
    
}
