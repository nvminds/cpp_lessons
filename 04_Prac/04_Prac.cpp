#include <iostream>
using namespace std;

int main()
{
    //1
    /*int i = 1;
    while (i <= 100) {
        cout << i << endl;
        i++;
    }*/

    //2
    //int i = 0;
    //int counter = 0;
    //while (i <= 200) {
    //    cout << i << " ";
    //    i += 2;
    //    counter+=1;
    //}
    //cout << endl;
    //cout << "Count : " << counter << endl;

    //3
   /* int N=0;
    int i=0;
    int repeats=0;
    int summ = 0;
    cout << "Enter count of numbers : ";
    cin >> repeats;
    while (i < repeats) {
        cout << "Enter number : ";
        cin >> N;
        i++;
        if (N%2==0){
            summ += N;
        }
    }
    cout << "Summ of even nubmers : " << summ << endl;*/

    //4
    //int summ = 0;
    //int hours = 12;
    //for (int i = 1; i <= hours; i++)
    //{
    //    summ += i;
    //}
    //cout << "Summ of bonks : " << summ << endl;

    //5
    int nums;
    int summ = 0;
    cout << "Enter [0] to stop cycle!" << endl;
    for (int i = 1;; i++)
    {
        cout << "Enter number : ";
        cin >> nums;
        summ += nums;
        if (nums == 0) {
            cout << "Summ of numbers : " << summ << endl;
            break;
        }
    }
}

