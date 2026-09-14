#include <iostream>
using namespace std;

int daysCountCheck(int year);
void leapCheck(int days);
void februaryInLeap(int arr[], int year);
int todayFind(int day, int month, int year, int arr[]);
int daysCalculator(int days1, int days2);


void initArr(int arr[], int size);
void arrAvg(int arr[], int size);
void elemsArr(int arr[], int size);

int main()
{
	//1
	const int monthCount = 12;
	int arrMonth[monthCount]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int day1, month1, year1, day2, month2, year2;

	cout << "Enter date 1" << endl;
	cout << "Enter day : "; cin >> day1;
	cout << "Enter month : "; cin >> month1;
	cout << "Enter year : "; cin >> year1; cout << endl;

	cout << "\nEnter date 2" << endl;
	cout << "Enter day : "; cin >> day2;
	cout << "Enter month : "; cin >> month2;
	cout << "Enter year : "; cin >> year2; cout << endl;


	daysCountCheck(year1);
	leapCheck(year1);
	cout << endl;

	daysCountCheck(year2);
	leapCheck(year2);
	cout << endl;

	int firstDate = todayFind(day1, month1, year1, arrMonth);
	int secondDate = todayFind(day2, month2, year2, arrMonth);
	cout << endl;
	cout << daysCalculator(firstDate, secondDate) << " days between your dates" << endl;

	srand(time(0));

    //2
	//const int size = 10;
	//int arr[size]{};
	//initArr(arr, size);
	//arrAvg(arr, size);

	//3
	//const int size = 20;
	//int arr[size]{};
	//initArr(arr, size);
	//elemsArr(arr, size);
}


int daysCountCheck(int year)
{
	int days = 365;
	if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0) {
		days = 366;
		return days;
	}
	else {
		days = 365;
		return days;
	}
}
void leapCheck(int year)
{
	if (daysCountCheck(year) == 366) {
		cout << "Year " << year << " is leap";
	}
	else {
		cout << "Year " << year << " is not leap";
	}
}
void februaryInLeap(int arr[], int year)
{
	if (daysCountCheck(year) == 366) {
		arr[1] = 29;
	}
}
int todayFind(int day, int month, int year, int arr[])
{
	int totalDays = 0;
	for (int i = 1; i < year; i++)
	{
		totalDays += daysCountCheck(i);
	}
	februaryInLeap(arr, year);
	for (int i = 0; i < month-1; i++)
	{
		totalDays += arr[i];
	}
	totalDays += day;
	return totalDays;
}
int daysCalculator(int days1, int days2)
{
	int result = 0;
	if (days1>days2)
	{
		result = days1 - days2;
	}
	else
	{
		result = days2 - days1;
	}
	return result;
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
void arrAvg(int arr[], int size)
{
    float summ = 0, avg;
	for (int i = 0; i < size; i++)
	{
		summ += arr[i];
	}
	avg = summ / size;
	cout << "Average of massive numbers : " << avg << endl;
}
void elemsArr(int arr[], int size)
{
	int countOfPositive = 0, countOfNegative = 0, countOfZeros = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0) {
			countOfZeros++;
		}
		else if (arr[i] > 0) {
			countOfPositive++;
		}
		else {
			countOfNegative++;
		}
	}
	cout << "Count of positive elements in massive : " << countOfPositive << endl;
	cout << "Count of negative elements in massive : " << countOfNegative << endl;
	cout << "Count of zero's in massive : " << countOfZeros << endl;
}