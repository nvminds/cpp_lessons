#include <iostream>
#include <fstream>
using namespace std;

void saveToFile()
{
    char user[100];
    ofstream out("text.txt", ios_base::out);
    if (out.is_open())
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter line " << i+1 << " >> "; cin.getline(user, 100);
            out << user << endl;
        }
    }
    out.close();
}
void readFile()
{
    ifstream in("text.txt", ios_base::in);
    char Buser[100];
    if (in.is_open())
    {
        while(!in.eof())
        {
            in.getline(Buser, 100);
            cout << Buser << endl;
        }
    }
    in.close();
}

int main()
{
    //1
    saveToFile();

    //2
    readFile();
}
