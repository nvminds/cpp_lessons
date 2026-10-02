#include <iostream>
using namespace std;

struct Date
{
	int day, month, year;
	char month_name[15];
};
struct Worker
{
	char name[20];
	char surname[20];
	char position[20];
	double salary;
	Date birthdate;
	Date hiredate;
};
Worker inputWorker(Worker worker)
{
	cout << "Enter name >> "; cin >> worker.name;
	cout << "Enter surname >> "; cin >> worker.surname;
	cout << "Enter position >> "; cin >> worker.position;
	cout << "Enter salary >> "; cin >> worker.salary;
	cout << "Enter birthdate day >> "; cin >> worker.birthdate.day;
	cout << "Enter birthdate month >> "; cin >> worker.birthdate.month;
	cout << "Enter birthdate year >> "; cin >> worker.birthdate.year;
	cout << "Enter hiredate day >> "; cin >> worker.hiredate.day;
	cout << "Enter hiredate month >> "; cin >> worker.hiredate.month;
	cout << "Enter hiredate year >> "; cin >> worker.hiredate.year;
	return worker;

}
void showWorker(Worker &worker)
{
	cout << "Name : " << worker.name << endl;
	cout << "Surname : " << worker.surname << endl;
	cout << "Position : " << worker.position << endl;
	cout << "Salary : " << worker.salary << endl;
	cout << "Birthdate : " << worker.birthdate.day << "/" << worker.birthdate.month << "/" << worker.birthdate.year << endl;
	cout << "Hiredate : " << worker.hiredate.day << "/" << worker.hiredate.month << "/" << worker.hiredate.year << endl;
}

int main()
{
    //int float double char bool string long & long long
    //struct
	//struct MyStruct
	//{

	//};
	//int number = 100;
	//Date birthday = {25, 12, 2000, "December"};
	//cout << "My birthday : " << endl;
	//cout << "Birthday day : " << birthday.day << endl;
	//cout << "Birthday month : " << birthday.month << endl;
	//cout << "Birthday year : " << birthday.year << endl;
	//cout << "Birthday month name : " << birthday.month_name << endl;

	//Date friend_birthday;
	//cout << "Enter day >> "; cin >> friend_birthday.day;
	//cout << "Enter month >> "; cin >> friend_birthday.month;
	//cout << "Enter year >> "; cin >> friend_birthday.year;
	//cout << "Enter month name >> "; cin >> friend_birthday.month_name;

	//cout << "Birthday day : " << friend_birthday.day << endl;
	//cout << "Birthday month : " << friend_birthday.month << endl;
	//cout << "Birthday year : " << friend_birthday.year << endl;
	//cout << "Birthday month name : " << friend_birthday.month_name << endl;

	Worker worker = { "Oleg", "Kozak", "Manager", 25000, {11,5,1999}, {6,7,2017} };
	//inputWorker(worker);
	showWorker(worker);

	//Worker NewWorker = {};
	//NewWorker = inputWorker(NewWorker);
	//showWorker(NewWorker);

	Date event{ 26,10,2026,"October" };
	cout << event.day << "/" << event.month << "/" << event.year << endl;

	Date newEvent;//Empty
	newEvent = event;
	cout << newEvent.day << "/" << newEvent.month << "/" << newEvent.year << endl;

	Date* ptr = nullptr;
	ptr = &event;
	cout << ptr->day << endl; // ptr->day  ==  (*ptr).day

	int a;//4b
	char b;//1b
	double c;//8b
	int* p;//4b

	cout << "Size of int ---> "<< sizeof(a) << endl;
	cout << "Size of char ---> "<< sizeof(b) << endl;
	cout << "Size of double ---> "<< sizeof(c) << endl;
	cout << "Size of int* ---> "<< sizeof(p) << endl;
	cout << "Size of date ---> "<< sizeof(Date) << endl;
	cout << "Size of worker ---> "<< sizeof(Worker) << endl;
}
