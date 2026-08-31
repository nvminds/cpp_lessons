#include <iostream>
using namespace std;

void main()
{
	//1
	//int num1, num2, num3;
 //   int summ;
 //   cout << "Enter number 1:" << endl;
 //   cin >> num1;
 //   cout << "Enter number 2:" << endl;
 //   cin >> num2;
 //   cout << "Enter number 3:" << endl;
 //   cin >> num3;
 //   cout << "\nNumber 1 : " << num1 << endl;
 //   cout << "Number 2 : " << num2 << endl;
 //   cout << "Number 3 : " << num3 << endl;
 //   summ = num1 + num2 + num3;
 //   cout << "Summ of nubmers : " << summ << endl;

	//2
	//float num1, num2;
	//float avgOf2;
	//cout << "Enter number 1:" << endl;
	//cin >> num1;
	//cout << "Enter number 2:" << endl;
	//cin >> num2;
	//avgOf2 = (num1 + num2) / 2;
	//cout << "Average of two numbers : " << avgOf2 << endl;

	//3
	//float oneKmInM = 1000;
	//float kilometres;
	//float metres;

	//cout << "Enter kilametres:" << endl;
	//cin >> kilometres;
	//metres = kilometres * oneKmInM;
	//cout << kilometres << " kilometres = " << metres << " metres" << endl;

	//4
	int count1, count2, count3, count4;
	const float cost1 = 21.99;
	const float cost2 = 35.50;
	const float cost3 = 72.90;
	const float cost4 = 4.99;
	float price;
	cout << "Price of 1 bread brick " << cost1 << endl;
	cout << "Enter count to buy: " << endl;
	cin >> count1;
	cout << "Price of 1 KitKat bar " << cost2 << endl;
	cout << "Enter count to buy: " << endl;
	cin >> count2;
	cout << "Price of 1 bag of chips " << cost3 << endl;
	cout << "Enter count to buy: " << endl;
	cin >> count3;
	cout << "Price of 1 MacCoffe packet " << cost4 << endl;
	cout << "Enter count to buy: " << endl;
	cin >> count4;
	price = (count1 * cost1) + (count2 * cost2) + (count3 * cost3) + (count4 * cost4);
	cout << "Total price : " << price << endl;
}

