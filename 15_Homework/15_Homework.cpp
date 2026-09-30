#include <iostream>
#include <iomanip>
using namespace std;

void tableTop()
{
	cout << (char)201;
	for (int i = 0; i < 4; i++) cout << (char)205;
	cout << (char)203;
	for (int i = 0; i < 9; i++) cout << (char)205;
	cout << (char)203;
	for (int i = 0; i < 25; i++) cout << (char)205;
	cout << (char)203;
	for (int i = 0; i < 12; i++) cout << (char)205;
	cout << (char)203;
	for (int i = 0; i < 15; i++) cout << (char)205;
	cout << (char)187;
	cout << endl;
}
void tableWalls()
{
	cout << (char)186;
	for (int i = 0; i < 4; i++) cout << " ";
	cout << (char)186;
	for (int i = 0; i < 9; i++) cout << " ";
	cout << (char)186;
	for (int i = 0; i < 25; i++) cout << " ";
	cout << (char)186;
	for (int i = 0; i < 12; i++) cout << " ";
	cout << (char)186;
	for (int i = 0; i < 15; i++) cout << " ";
	cout << (char)186;
	cout << endl;
}
void tableTopText()
{
	cout << (char)186; cout << setw(4) << "No ";
	cout << (char)186; cout << left << setw(9) << "  Item";
	cout << (char)186; cout << left << setw(25) << "      Description";
	cout << (char)186; cout << left << setw(12) << "  Quantity";
	cout << (char)186; cout << setw(15) << "     Price";
	cout << (char)186; cout << endl;
}
void tableMiddleLine()
{
	cout << (char)204;
	for (int i = 0; i < 4; i++) cout << (char)205;
	cout << (char)206;
	for (int i = 0; i < 9; i++) cout << (char)205;
	cout << (char)206;
	for (int i = 0; i < 25; i++) cout << (char)205;
	cout << (char)206;
	for (int i = 0; i < 12; i++) cout << (char)205;
	cout << (char)206;
	for (int i = 0; i < 15; i++) cout << (char)205;
	cout << (char)185;
	cout << endl;
}
//for universal fill
void tableMiddleText(int No, char item[], char desc[], int quantity, double price)
{
	cout << (char)186; cout << " " << No << "  ";
	cout << (char)186; cout << "  " << item << setw(3) << "";
	cout << (char)186; cout  << "    " << setw(21) << desc;
	cout << (char)186; cout << setw(6) << "" << quantity << setw(5) << "";
	cout << (char)186; cout << "    $ " << setw(9) <<  price;
	cout << (char)186; cout << endl;
}
//void tableMiddleText1()
//{
//	cout << (char)186; cout << setw(4) << " 1";
//	cout << (char)186; cout << left << setw(9) << "  P196";
//	cout << (char)186; cout << left << setw(25) << "     Samsung Color TV";
//	cout << (char)186; cout << left << setw(12) << "      1";
//	cout << (char)186; cout << setw(15) << "    $ 829.00";
//	cout << (char)186; cout << endl;
//}
//void tableMiddleText2()
//{
//	cout << (char)186; cout << setw(4) << " 2";
//	cout << (char)186; cout << left << setw(9) << "  P020";
//	cout << (char)186; cout << left << setw(25) << "     Uniden Handset";
//	cout << (char)186; cout << left << setw(12) << "      1";
//	cout << (char)186; cout << setw(15) << "    $  29.00";
//	cout << (char)186; cout << endl;
//}
//void tableMiddleText3()
//{
//	cout << (char)186; cout << setw(4) << " 3";
//	cout << (char)186; cout << left << setw(9) << "  P111";
//	cout << (char)186; cout << left << setw(25) << "     Folder Blank";
//	cout << (char)186; cout << left << setw(12) << "      1";
//	cout << (char)186; cout << setw(15) << "    $   2.70";
//	cout << (char)186; cout << endl;
//}
void tableButtom()
{
	cout << (char)200;
	for (int i = 0; i < 4; i++) cout << (char)205;
	cout << (char)202;
	for (int i = 0; i < 9; i++) cout << (char)205;
	cout << (char)202;
	for (int i = 0; i < 25; i++) cout << (char)205;
	cout << (char)202;
	for (int i = 0; i < 12; i++) cout << (char)205;
	cout << (char)202;
	for (int i = 0; i < 15; i++) cout << (char)205;
	cout << (char)188;
	cout << endl;
}

int main()
{
	char itemN1[] = "P196", itemN2[] = "P020", itemN3[] = "P111";
	char desc1[] = "Samsung Color TV", desc2[] = "Uniden Handset", desc3[] = "Folder Blank";
	tableTop();
	tableWalls();
	tableTopText();
	tableWalls();
	tableMiddleLine();
	tableWalls();
	//tableMiddleText1(); tableMiddleText2(); tableMiddleText3();
	tableMiddleText(1, itemN1, desc1, 1, 829.01);
	tableMiddleText(2, itemN2, desc2, 1,  29.01);
	tableMiddleText(3, itemN3, desc3, 1,   2.70);
	for (int i = 0; i < 7; i++) tableWalls();
	tableMiddleLine();
	tableWalls();
	tableButtom();
}
