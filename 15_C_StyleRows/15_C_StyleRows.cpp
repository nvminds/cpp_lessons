#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;


void SetPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void SetColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
    srand(time(0));

    //C-style  ----  string
    cout << "Hello" << endl;
    cout << "Hi" << endl;
    cout << "red" << endl;
    cout << "" << endl;
    char letter = 'a';// 1b

    char word[] = { 'H','e','l','l','o','!','\0'};
    for (int i = 0; i < 6; i++)
    {
        cout << word[i];
    }cout << endl;

    char string1[] = "string";
    cout << string1 << " has " << sizeof(string1) << " characters" << endl;
    for (int i = 0; i < sizeof(string1); i++)
    {
        cout << "Letter " << (string1[i]) << " has code : " << static_cast<int>(string1[i]) << endl;
    }

    //string1 = "cat"; error
    string1[1] = 'p';
    cout << string1 << endl;

    char name[15] = "Max"; // Max\0
    cout << "My name is : " << name << endl;

    char yourname[255];
    cout << "Enter your name : ";
    //cin.getline(yourname, 255); // cin >> yourname;
    cout << "Your name is : " << yourname << endl;

    char text[] = "Print this!";
    char dest[50];
    strcpy_s(dest, text);// copy variable (destination, source)
    cout << text << endl;
    cout << dest << endl;

    cout << "Size of : " << sizeof(dest) << endl;//50
    cout << "Str lenth of : " << strnlen(dest, 50) << endl;//50

    char arr[255] = "Return the head of list";
    //cout << arr << endl;
    //cout << "Enter any text : "; cin.getline(arr, 255);  //cin >> arr;
    cout << arr << endl;
    _strupr_s(arr); // .upper case
    cout << arr << endl;
    _strlwr_s(arr); // .lower case
    cout << arr << endl;

    _strrev(arr);
    cout << arr << endl;
    _strrev(arr);
    cout << arr << endl;

    cout << "Copy arrays: " << endl;
    char arr2[255];
    strcpy_s(arr2, arr);
    cout << "Copy : " << arr2 << endl;
    arr2[4] = '\0';
    cout << "Copy : " << arr2 << endl;

    for (int i = 0; i < 255; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << "Add to arr : " << endl;
    cout << arr << endl;
    //cout << "Enter any text : "; cin >> arr2;
    strcat_s(arr, arr2);
    cout << arr << endl;
    
    char anyWord[] = "white111";

    //number
    cout << anyWord[0] << " ---> " << (bool)isalnum(anyWord[0]) << endl;
    cout << anyWord[6] << " ---> " << (bool)isalnum(anyWord[6]) << endl;
    
    //letter
    cout << anyWord[0] << " ---> " << (bool)isalpha(anyWord[0]) << endl;;
    cout << anyWord[6] << " ---> " << (bool)isalpha(anyWord[6]) << endl;
    
    //is number
    cout << anyWord[0] << " ---> " << (bool)isdigit(anyWord[0]) << endl;
    cout << anyWord[6] << " ---> " << (bool)isdigit(anyWord[6]) << endl;
    
    //big letter
    cout << anyWord[0] << " ---> " << (bool)isupper(anyWord[0]) << endl;
    cout << anyWord[6] << " ---> " << (bool)isupper(anyWord[6]) << endl;
   
    //small letter
    cout << anyWord[0] << " ---> " << (bool)islower(anyWord[0]) << endl;
    cout << anyWord[6] << " ---> " << (bool)islower(anyWord[6]) << endl;
   
    //to lower
    cout << anyWord[0] << " ---> " << (char)tolower(anyWord[0]) << endl;
    cout << anyWord[6] << " ---> " << (char)tolower(anyWord[6]) << endl;
   
    //to upper
    cout << anyWord[0] << " ---> " << (char)toupper(anyWord[0]) << endl;
    cout << anyWord[6] << " ---> " << (char)toupper(anyWord[6]) << endl;

    //space
    cout << anyWord[6] << " ---> " << (bool)isspace(anyWord[6]) << endl;



    double x = -5, y = 2.7, z = 3.14;
    cout << setw(5) << x << endl;
    cout << setw(5) << y << endl;
    cout << setw(5) << z << endl;

    //SetColor(2);
    //cout << "Hello" << endl;
    //SetColor(7);
    //for (int i = 0; i < 15; i++)
    //{
    //    SetColor(i); cout << "Hello" << endl;
    //}
    //Sleep(3000);
    //system("cls");
    //for (int i = 0; i < 150; i++)
    //{
    //    SetPos(rand()%30, rand() % 30); SetColor(rand()%16);
    //    cout << "*"; 
    //    Sleep(250);
    //}
    
    for (int i = 0; i < 255; i++)
    {
        cout << i << " ---> " << (char)i << endl;
    }
}
