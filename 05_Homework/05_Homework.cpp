#include <iostream>
using namespace std;

int main()
{
	//1
	//int n1, n2, n3;
	//cout << "Enter count of [1] : "; cin >> n1;
	//cout << "Enter count of [2] : "; cin >> n2;
	//cout << "Enter count of [3] : "; cin >> n3;
	//for (int i = 0; i < n1; i++)
	//{
	//	cout << "1";
	//}
	//cout << endl;
	//for (int i = 0; i < n2; i++)
	//{
	//	cout << "2";
	//}
	//cout << endl;
	//for (int i = 0; i < n3; i++)
	//{
	//	cout << "3";
	//}
	//cout << endl;

	//2
	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		if (i==j or i + j == 10-1) {
	//			cout << " 0";
	//		}
	//		else {
	//			cout << " 1";
	//		}
	//	}
	//	cout << endl;
	//}

	//3
	int summ=0;
	for (int i = 0; i < 10; i++)
	{
		cout << 10;
		summ += 10;
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << 9;
		summ += 9;
	}
	cout << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << 8;
		summ += 8;
	}
	cout << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << 7;
		summ += 7;
	}
	cout << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << 6;
		summ += 6;
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << 5;
		summ += 5;
	}
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << 4;
		summ += 4;
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << 3;
		summ += 3;
	}
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << 2;
		summ += 2;
	}
	cout << endl;
	for (int i = 0; i < 1; i++)
	{
		cout << 1;
		summ += 1;
	}
	cout << endl;
	cout << "Summ of numbers : " << summ << endl;
	cout << endl;

	//6
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
}

