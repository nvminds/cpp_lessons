#include <iostream>
using namespace std;

int main()
{
	//1
	//int num=14;
	//while (num<=123)
	//{
	//	cout << num << endl;
	//	num++;
	//}

	//2
	//int num = 1;
	//while (num <= 100) {
	//	cout << num << endl;
	//	num += 2;
	//}

	//3
	//int N=0;
	//int i=0;
	//int repeats=0;
	//int counter = 0;
	//cout << "Enter count of numbers : ";
	//cin >> repeats;
	//while (i < repeats) {
	//	cout << "Enter number : ";
	//	cin >> N;
	//	i++;
	//	if (N<0){
	//		counter += 1;
	//	}
	//}
	//cout << "Count of negative nubmers : " << counter << endl;

	//4
	/*int repeats=1;
	int num;
	float dob=1;
	int summ=0;
	float avg=0;
	do {
			cout << "Enter number : ";
			cin >> num;
			repeats++;
			summ += num;
			dob *= num;
			avg = summ / 8;
	} while (repeats <= 8);
	cout << "Dobutok : " << dob << endl;
	cout << "Average : " << avg << endl;*/

	//5
	//int num = 101;
	//do
	//{
	//	num--;
	//	if (num % 2 == 0) {
	//		cout << num << endl;
	//	}
	//	
	//} while (num >= 1);
	
	//6
	int num;
	int i=1;
	float dob = 1;
	do
	{
		cout << "Enter nubmer : ";
		cin >> num;
		dob *= num;
		i++;
	} while (i <= 5);
	cout << "Dobutok : " << dob << endl;
}
