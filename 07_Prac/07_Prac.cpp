#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//1
	//const int rows = 4, colums = 3;
	//int arr[rows][colums];
	//int count = 0;
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < colums; j++)
	//	{
	//		arr[i][j] = rand() % 12;
	//		cout << setw(4) << arr[i][j] << " ";
	//		if (arr[i][j] != 0) {
	//			count++;
	//		}
	//	}
	//		cout << endl;
	//}
	//cout << endl;
	//cout << "Elements which !=0 : " <<count<< endl;

	//2
	//const int rows = 3, colums = 3;
	//int arr[rows][colums];
	//int count = 0;
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < colums; j++)
	//	{
	//		arr[i][j] = rand() % 13;
	//		cout << setw(4) << arr[i][j] << " ";
	//		if (arr[i][j] == 0) {
	//			count++;
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//cout << "Elements which !=0 : " << count << endl;

	//3
	//const int rows = 7, colums = 3;
	//int arr[rows][colums];
	//int count = 0;
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < colums; j++)
	//	{
	//		arr[i][j] = rand() % 40 - 20;
	//		cout << setw(4) << arr[i][j] << " ";
	//		if (arr[i][j] < 12 and arr[i][j] > -12) {
	//			count++;
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//cout << "Elements which module > 12 : " << count << endl;

	//4
	//const int rows = 4, colums = 5;
	//int arr[rows][colums];
	//int count = 0;
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < colums; j++)
	//	{
	//		arr[i][j] = rand() % 40 - 20;
	//		cout << setw(4) << arr[i][j] << " ";
	//		if (arr[i][j] > 0) {
	//			count++;
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//cout << "Elements which > 0 : " << count << endl;

	//5
	//const int rows = 5, colums = 4;
	//int arr[rows][colums];
	//int count = 0;
	//int summ = 0;
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < colums; j++)
	//	{
	//		arr[i][j] = rand() % 40 - 20;
	//		cout << setw(4) << arr[i][j] << " ";
	//		if (arr[i][j] > 0) {
	//			count++;
	//			summ += arr[i][j];
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//cout << "Elements which > 0 : " << count << endl;
	//cout << "Summ of elements which > 0 : " << summ << endl;

	//6
	//const int rows = 5, colums = 4;
	//int arr[rows][colums];
	//int count = 0;
	//int dob = 1;
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < colums; j++)
	//	{
	//		arr[i][j] = rand() % 40 - 20;
	//		cout << setw(4) << arr[i][j] << " ";
	//		if (arr[i][j] < 0) {
	//			count++;
	//			dob *= arr[i][j];
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//cout << "Elements which < 0 : " << count << endl;
	//cout << "Multy of elements which < 0 : " << dob << endl;

	//7
	//const int rows = 4, colums = 4;
	//int arr[rows][colums];
	//int count = 0;
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < colums; j++)
	//	{
	//		arr[i][j] = rand() % 40;
	//		cout << setw(4) << arr[i][j] << " ";
	//		if (arr[i][j] %6==1) {
	//			count++;
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//cout << "Elements which % == 1 : " << count << endl;

	//7
	//const int rows = 4, colums = 4;
	//int arr[rows][colums];
	//int count = 0;
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < colums; j++)
	//	{
	//		arr[i][j] = rand() % 40;
	//		cout << setw(4) << arr[i][j] << " ";
	//		if (arr[i][j] %6==1) {
	//			count++;
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//cout << "Elements which % == 1 : " << count << endl;

	//8
	//const int rows = 5, colums = 6;
	//int arr[rows][colums]{};
	//int count = 0;
	//int min = arr[0][0];
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < colums; j++)
	//	{
	//		arr[i][j] = rand() % 67 - 35;
	//		cout << setw(4) << arr[i][j] << " ";
	//		if (arr[i][j] < min) {
	//			min = arr[i][j];
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "Min element : " << min << endl;
	//cout << endl;

	//9
	//const int rows = 5, colums = 6;
	//int arr[rows][colums]{};
	//int count = 0;
	//int max = arr[0][0];
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < colums; j++)
	//	{
	//		arr[i][j] = rand() % 67 - 35;
	//		cout << setw(4) << arr[i][j] << " ";
	//		if (arr[i][j] > max) {
	//			max = arr[i][j];
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "Max element : " << max << endl;
	//cout << endl;

	//10
	//const int rows = 5, colums = 4;
	//int arr[rows][colums];
	//int count = 0;
	//int summ = 0;
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < colums; j++)
	//	{
	//		arr[i][j] = rand() % 40 - 20;
	//		cout << setw(4) << arr[i][j] << " ";
	//		if (arr[i][j] < 0) {
	//			count++;
	//			summ += arr[i][j];
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//cout << "Elements which < 0 : " << count << endl;
	//cout << "Summ of elements which < 0 : " << summ << endl;


	////Dodatkove
	//cout << " ==========1=========== \n" << endl;
	////1
	//int summ1 = 0;
	//int max1 = 0;
	//for (int i = 0; i < 12; i++)
	//{
	//	for (int j = 0; j < 12; j++)
	//	{
	//		if (i==j or i<j){
	//			int q = rand() % 90 + 10;
	//			cout << q;
	//			summ1 += q;
	//			if (q > max1) {
	//				max1 = q;
	//			}
	//		}
	//		else {

	//			cout << "##";
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "\nSumm of numbers : " << summ1 << endl;
	//cout << "Max number: " << max1 << endl;
	//cout << endl;
	//cout << " ==========2=========== \n" << endl;
	////2
	//int summ2 = 0;
	//int max2 = 0;
	//for (int i = 0; i < 12; i++)
	//{
	//	for (int j = 0; j < 12; j++)
	//	{
	//		if (i == j or i > j) {
	//			int q = rand() % 90 + 10;
	//			cout << q;
	//			summ2 += q;
	//			if (q > max2) {
	//				max2 = q;
	//			}
	//		}
	//		else {

	//			cout << "##";
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "\nSumm of numbers : " << summ2 << endl;
	//cout << "Max number: " << max2 << endl;
	//cout << endl;
	//cout << " ==========3=========== \n" << endl;
	////3
	//int summ3 = 0;
	//int max3 = 0;
	//for (int i = 0; i < 12; i++)
	//{
	//	for (int j = 0; j < 12; j++)
	//	{
	//		if (i > j or i + j > 12 - 1) {
	//			int q = rand() % 90 + 10;
	//			cout << q;
	//			summ3 += q;
	//			if (q > max3) {
	//				max3 = q;
	//			}
	//		}
	//		else {

	//			cout << "##";
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "\nSumm of numbers : " << summ3 << endl;
	//cout << "Max number: " << max3 << endl;
	//cout << endl;
	//cout << " ==========4=========== \n" << endl;
	////4
	//int summ4 = 0;
	//int max4 = 0;
	//for (int i = 0; i < 12; i++)
	//{
	//	for (int j = 0; j < 12; j++)
	//	{
	//		if (i < j or i + j < 12 - 1) {
	//			int q = rand() % 90 + 10;
	//			cout << q;
	//			summ4 += q;
	//			if (q > max4) {
	//				max4 = q;
	//			}
	//		}
	//		else {

	//			cout << "##";
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "\nSumm of numbers : " << summ4 << endl;
	//cout << "Max number: " << max4 << endl;
	//cout << endl;
	//cout << " ==========5=========== \n" << endl;
	////5
	//int summ5 = 0;
	//int max5 = 0;
	//for (int i = 0; i < 12; i++)
	//{
	//	for (int j = 0; j < 12; j++)
	//	{
	//		if (i > j and i + j > 12 - 1 or i < j and i + j < 12 - 1 or i==j or i+j==12-1) {
	//			int q = rand() % 90 + 10;
	//			cout << q;
	//			summ5 += q;
	//			if (q > max5) {
	//				max5 = q;
	//			}
	//		}
	//		else {

	//			cout << "##";
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "\nSumm of numbers : " << summ5 << endl;
	//cout << "Max number: " << max5 << endl;
	//cout << endl;
	//cout << " ==========6=========== \n" << endl;
	////6
	//int summ6 = 0;
	//int max6 = 0;
	//for (int i = 0; i < 12; i++)
	//{
	//	for (int j = 0; j < 12; j++)
	//	{
	//		if (i > j and i + j < 12 - 1 or i < j and i + j > 12 - 1 or i==j or i+j==12-1) {
	//			int q = rand() % 90 + 10;
	//			cout << q;
	//			summ6 += q;
	//			if (q > max6) {
	//				max6 = q;
	//			}
	//		}
	//		else {

	//			cout << "##";
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "\nSumm of numbers : " << summ6 << endl;
	//cout << "Max number: " << max6 << endl;
	//cout << endl;
	//cout << " ==========7=========== \n" << endl;
	////7
	//int summ7 = 0;
	//int max7 = 0;
	//for (int i = 0; i < 12; i++)
	//{
	//	for (int j = 0; j < 12; j++)
	//	{
	//		if (i > j and i + j < 12 - 1) {
	//			int q = rand() % 90 + 10;
	//			cout << q;
	//			summ7 += q;
	//			if (q > max7) {
	//				max7 = q;
	//			}
	//		}
	//		else {

	//			cout << "##";
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "\nSumm of numbers : " << summ7 << endl;
	//cout << "Max number: " << max7 << endl;
	//cout << endl;
	//cout << " ==========8=========== \n" << endl;
	////8
	//int summ8 = 0;
	//int max8 = 0;
	//for (int i = 0; i < 12; i++)
	//{
	//	for (int j = 0; j < 12; j++)
	//	{
	//		if (i < j and i + j > 12 - 1) {
	//			int q = rand() % 90 + 10;
	//			cout << q;
	//			summ8 += q;
	//			if (q > max8) {
	//				max8 = q;
	//			}
	//		}
	//		else {

	//			cout << "##";
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "\nSumm of numbers : " << summ8 << endl;
	//cout << "Max number: " << max8 << endl;
	//cout << endl;
	//cout << " ==========9=========== \n" << endl;
	////9
	//int summ9 = 0;
	//int max9 = 0;
	//for (int i = 0; i < 12; i++)
	//{
	//	for (int j = 0; j < 12; j++)
	//	{
	//		if (i + j==12-1 or i + j < 12-1) {
	//			int q = rand() % 90 + 10;
	//			cout << q;
	//			summ9 += q;
	//			if (q > max9) {
	//				max9 = q;
	//			}
	//		}
	//		else {

	//			cout << "##";
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "\nSumm of numbers : " << summ9 << endl;
	//cout << "Max number: " << max9 << endl;
	//cout << endl;
	//cout << " ==========10========== \n" << endl;
	////10
	//int summ10 = 0;
	//int max10 = 0;
	//for (int i = 0; i < 12; i++)
	//{
	//	for (int j = 0; j < 12; j++)
	//	{
	//		if (i + j == 12 - 1 or i + j > 12 - 1) {
	//			int q = rand() % 90 + 10;
	//			cout << q;
	//			summ10 += q;
	//			if (q > max10) {
	//				max10 = q;
	//			}
	//		}
	//		else {

	//			cout << "##";
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "\nSumm of numbers : " << summ10 << endl;
	//cout << "Max number: " << max10 << endl;
}
