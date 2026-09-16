#include <iostream>
using namespace std;

int main()
{
	cout << " ==========1=========== \n" << endl;
	//1
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (i==j ){
				
				cout << "::";
			}
			else {

				cout << "##";
			}
		}
		cout << endl;
	}

	cout << endl;
	cout << " ==========2=========== \n" << endl;
	//2
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (i == j or i > j) {

				cout << "::";
			}
			else {

				cout << "##";
			}
		}
		cout << endl;
	}

	cout << endl;
	cout << " ==========3=========== \n" << endl;
	//3
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (i > j or i + j > 12 - 1) {

				cout << "::";
			}
			else {

				cout << "##";
			}
		}
		cout << endl;
	}

	cout << endl;
	cout << " ==========4=========== \n" << endl;
	//4
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (i < j or i + j < 12 - 1) {

				cout << "::";
			}
			else {

				cout << "##";
			}
		}
		cout << endl;
	}

	cout << endl;
	cout << " ==========5=========== \n" << endl;
	//5
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (i > j and i + j > 12 - 1 or i < j and i + j < 12 - 1 or i==j or i+j==12-1) {

				cout << "::";
			}
			else {

				cout << "##";
			}
		}
		cout << endl;
	}

	cout << endl;
	cout << " ==========6=========== \n" << endl;
	//6
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (i > j and i + j < 12 - 1 or i < j and i + j > 12 - 1 or i==j or i+j==12-1) {

				cout << "::";
			}
			else {

				cout << "##";
			}
		}
		cout << endl;
	}

	cout << endl;
	cout << " ==========7=========== \n" << endl;
	//7
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (i > j and i + j < 12 - 1) {

				cout << "::";
			}
			else {

				cout << "##";
			}
		}
		cout << endl;
	}

	cout << endl;
	cout << " ==========8=========== \n" << endl;
	//8
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (i < j and i + j > 12 - 1) {

				cout << "::";
			}
			else {

				cout << "##";
			}
		}
		cout << endl;
	}

	cout << endl;
	cout << " ==========9=========== \n" << endl;
	//9
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (i + j==12-1 or i + j < 12-1) {

				cout << "::";
			}
			else {

				cout << "##";
			}
		}
		cout << endl;
	}

	cout << endl;
	cout << " ==========10========== \n" << endl;
	//10
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (i + j == 12 - 1 or i + j > 12 - 1) {

				cout << "::";
			}
			else {

				cout << "##";
			}
		}
		cout << endl;
	}
}

