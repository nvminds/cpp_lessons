#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
		cout << "|###|";
		}
			cout << endl;
	}


	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << (i * j) << endl;
		}
		cout << endl;
	}


	int star_row = 1;
	int star_column;
	int lenght = 10;
	while (star_row <= lenght)
	{
		int star_column = 1;
		while (star_column <= lenght)
		{
			cout << "* ";
			star_column++;
		}
		cout << endl;
		star_row++;

	}

	cout << endl;

	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			cout << " +";
		} cout << endl;
	}

	cout << endl;

	for (int i = 1; i <= 20; i++)
	{
		for (int j = 1; j <= 20; j++)
		{
			if (i == j) {
				cout << " \\";
			}
			else if (i+j==22-1){
				cout << " /";
			}
			else {

				cout << " +";
			}
		} cout << endl;
	}

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (i > j and i+j>10-1 ) {
				cout << "|===|";
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}

	for (int i =0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "|###|";
		}
		cout << endl;
	}



}
