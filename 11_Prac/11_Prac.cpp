#include <iostream>
using namespace std;

void initArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 41 - 20;
    }
}
void showArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int Pow(int num, int step)
{
    if (step == 0) {
        return 1;
    }
    else {
        return num * Pow(num, step - 1);
    }
}
int Stars(int N)
{
    if (N == 0) {
        return 1;
    }
    else {
        cout << " * ";
        return Stars(N - 1);
    }
}
int inDiapazone(int a, int b)
{
    int summ = 0;
    if (a == b) {
        return summ+b;
    }
    else {
        return summ = a + inDiapazone(a+1, b);
    }
}

int main()
{
    //1 
    //int number, step;
    //cout << "Enter nubmer : "; cin >> number;
    //cout << "Enter step : "; cin >> step;
    //cout << endl;
    //cout << "Number " << number <<" in " << step << " step : " << Pow(number, step) << endl;

    //2
    //int starCount;
    //cout << "Enter stars count : "; cin >> starCount;
    //Stars(starCount);

    //3
    int a, b;
    cout << "Enter number 1 : "; cin >> a;
    cout << "Enter number 2 : "; cin >> b;
    cout << "Summ of numbers in diapazone from " << a << " to " << b << " = " << inDiapazone(a, b) << endl;
}

