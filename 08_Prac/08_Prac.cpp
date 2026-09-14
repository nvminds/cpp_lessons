#include <iostream>
using namespace std;

void cube(int rows, int cols);
void factorial(int num);
void simpleCheck(int num);
void numberInCube(int num);
int maxNumber(int a, int b);
void valuePolarity(int num);
void min_maxInArr(int arr[], int size);
void initArr(int arr[], int size);
void reverseArr(int arr[], int size);
void simpleInArr(int arr[], int size);

int main()
{
	srand(time(0));
    //1
	//int n, k;
	//cout << "Enter number of rows : "; cin >> k;
	//cout << "Enter number of colums : "; cin >> n;
	//cube(k, n);

	//2
	/*int numb;
	cout << "Enter number : "; cin >> numb;
	factorial(numb);*/

	//3
	//int numb1;
	//cout << "Enter number : "; cin >> numb1;
	//simpleCheck(numb1);

	//4
	//int numb2;
	//cout << "Enter number : "; cin >> numb2;
	//numberInCube(numb2);

	//5
	//int a, b;
	//cout << "Enter number 1 : "; cin >> a;
	//cout << "Enter number 1 : "; cin >> b;
	//cout << "Number " << maxNumber(a, b) << " is bigger" << endl;

	//6
	/*int numb3;
	cout << "Enter number : "; cin >> numb3;
	valuePolarity(numb3);*/

	//7
	//const int size = 10;
	//int arr[size]{};
	//initArr(arr, size);
	//min_maxInArr(arr, size);

	//8
	//const int size = 10;
	//int arr[size]{};
	//cout << "Defolt massive : "; initArr(arr, size); cout << endl;
	//cout << "Reversed massive : "; reverseArr(arr, size); cout << endl;

	//9
	//const int size = 20;
	//int arr[size]{};
	//initArr(arr, size); cout << endl;
	//simpleInArr(arr, size); cout << endl;
}

void cube(int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "##" << "";
		}
		cout << endl;
	}
}
void factorial(int num)
{
	int fact=1;
	for (int i = 1; i <= num; i++)
	{
		fact *= i;
	}
	cout << "Factorial for number " << num << " : " << fact << endl;
}
void simpleCheck(int num)
{
	int q=1;
	if (num <= 1)
	{
		q = 0;
	}
	else {
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				q = 0;
				break;
			}
		}
		if (q == 0) {
			cout << "Number " << num << " is not simple." << endl;
		}
		else {
			cout << "Number " << num << " is simple." << endl;
		}
	}
}
void numberInCube(int num)
{
	int res = 1;
	for (int i = 0; i < 3; i++)
	{
		res *= num;
	}
	cout << "Result = " << res << endl;
}
int maxNumber(int a, int b)
{
	return (a > b) ? a : b;
}
void valuePolarity(int num)
{
	if (num == 0) {
		cout << "Number " << num << " is zero" << endl;
	}
	else if (num > 0) {
		cout << "Number " << num << " is positive" << endl;
	}
	else {
		cout << "Number " << num << " is negative" << endl;
	}
}
void initArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 - 20;
		cout << arr[i] << " ";
	}
	cout << endl;
}
void min_maxInArr(int arr[], int size)
{
	int max = arr[0], min = arr[0], indexMax = 0, indexMin = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
			indexMax = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			indexMin = i;
		}
	}
		cout << "Max number in massive is " << max << " in position " << indexMax << endl;
		cout << "Min number in massive is " << min << " in position " << indexMin << endl;
}
void reverseArr(int arr[], int size)
{
	for (int i = size-1; i > -1; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void simpleInArr(int arr[], int size)
{
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		int q = 1;
		if (arr[i] <= 1)
		{
			q = 0;
		}
		else {
			for (int j = 2; j < arr[i]; j++)
			{
				if (arr[i] % j == 0)
				{
					q = 0;
					break;
				}

			}
		}
		if (q==1)
		{
			count++;
		}
	}
	cout << "Count of simple numbers : " << count << endl;
}