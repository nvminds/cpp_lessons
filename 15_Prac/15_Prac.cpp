#include <iostream>
#include <iomanip>
using namespace std;

int StringLen(char arr[])
{
	int counter=0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		counter++;
	}
	return counter;
}
int InArrCheck(char symb, char arr[], int size)
{
	int vowel = 1, consonant=2, punctuation=3;
	for (int i = 0; i < size; i++)
	{
		if (isalpha(symb) and symb == arr[i])
		{
			return true;
		}
	}
	return false;
}
char* deleteFromLine(char* arr, char to_delete)
{
	char* temp = new char[strlen(arr)+1];
	int index = 0;
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] != to_delete)
		{
			temp[index] = arr[i];
			index++;
		}
	}
	temp[index] = '\0';
	return temp;
}
void strStats(char arr[])
{
	int counter_space = 0, vowels_count=0, consonants_count=0, punctuation_count=0;
	char vowels[] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u' };
	char consonants[] = { 'B', 'b', 'C', 'c', 'D', 'd', 'F', 'f', 'G', 'g', 'H', 'h', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N', 'n', 'P', 'p', 'Q', 'q', 
						  'R', 'r', 'S', 's', 'T', 't', 'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y', 'Z', 'z' };
	char punctuation[] = { '.', ',', '!', '?', ';', ':', '-', '_', '(', ')', '[', ']', '{', '}', '"', '\'', '/', '\\', '|', 
						   '@', '#', '$', '%', '^', '&', '*', '+', '=', '<', '>', '~', '`' };
	for (int i = 0; i < strlen(arr); i++)
	{
		if (isspace(arr[i]))
		{
			counter_space++;
		}
		else if (InArrCheck(arr[i], vowels, sizeof(vowels)) == true)
		{
			vowels_count++;
		}
		else if (InArrCheck(arr[i], consonants, sizeof(consonants)) == true)
		{
			consonants_count++;
		}
		else if (ispunct(arr[i]))
		{
			punctuation_count++;
		}
	}
	cout << "Spaces count : " << counter_space << endl;
	cout << "Vowels count : " << vowels_count << endl;
	cout << "Consonants count : " << consonants_count << endl;
	cout << "Punctuation symbols count : " << punctuation_count << endl;
}

int main()
{
    //1
	//char A_or_O[255];
	//int counter_a = 0, counter_o = 0;
	//cout << "Enter string : "; cin.getline(A_or_O, 255);
	//for (int i = 0; i < strlen(A_or_O); i++)
	//{
	//	if (A_or_O[i]=='a' or A_or_O[i] == 'A')
	//	{
	//		counter_a++;
	//	}
	//	if (A_or_O[i] == 'o' or A_or_O[i] == 'O')
	//	{
	//		counter_o++;
	//	}
	//}
	//cout << "Counter of letter [A] = " << counter_a << endl;
	//cout << "Counter of letter [O] = " << counter_o << endl;

	//2
	//char user_line[255];
	//cout << "Enter string : "; cin.getline(user_line, 255);
	//int counter_letters = 0, counter_numbers = 0, counter_speces = 0;
	//for (int i = 0; i < strlen(user_line); i++)
	//{
	//	if (isalpha(user_line[i]))
	//	{
	//		counter_letters++;
	//	}
	//	if (isdigit(user_line[i]))
	//	{
	//		counter_numbers++;
	//	}
	//	if (isspace(user_line[i]))
	//	{
	//		counter_speces++;
	//	}
	//}
	//cout << "Counter of letters = " << counter_letters << endl;
	//cout << "Counter of numbers = " << counter_numbers << endl;
	//cout << "Counter of spaces = " << counter_speces << endl;

	//3
	//char user_line[255];
	//cout << "Enter string : "; cin.getline(user_line, 255);
	//for (int i = 0; i < strlen(user_line); i++)
	//{
	//	if (islower(user_line[i]))
	//	{
	//		user_line[i] = toupper(user_line[i]);
	//	}
	//	else if (isupper(user_line[i]))
	//	{
	//		user_line[i] = tolower(user_line[i]);
	//	}
	//}
	//cout << "Changed line = " << user_line << endl;

	//4
	//char user_line[52];
	//cout << "Enter string : "; cin.getline(user_line, 52);
	//int LineLengh = StringLen(user_line);
	//cout << "Str len = " << LineLengh << endl;

	//5
	//char user_line[255];
	//char symbol;
	//cout << "Enter string : "; cin.getline(user_line, 255);
	//cout << "Default string : " << user_line << endl;
	//cout << "Enter char to delete : "; cin >> symbol;
	//char* arr = deleteFromLine(user_line, symbol);
	//cout << "String with deleted char : " << arr << endl;

	//delete[]arr;

	//6
	char user_line[255];
	cout << "Enter string : "; cin.getline(user_line, 255);
	strStats(user_line);
}
