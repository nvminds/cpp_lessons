#include <iostream>
#include <fstream>
using namespace std;

struct Book{};
const char* filename = "Humansdatabase.txt";
struct Human 
{
private:
    char name[20];
    char surname[20];
    int age;
public:
    void Show()
    {
        cout << "Name : " << name << endl;
        cout << "Surname : " << surname << endl;
        cout << "Age : " << age << endl;
    }
    void Input()
    {
        cout << "Name >> "; cin >> name;
        cout << "Surname >> "; cin >> surname;
        cout << "Age >> "; cin >> age;
    }
    void saveToFile()
    {
        ofstream out(filename, ios_base::app);
        out << name;
        out << ':';
        out << surname;
        out << ':';
        out << age;
        out << '|';
        out.close();
    }
    void copyFromFile(char* namefile, char* surnamefile, int agefile)
    {
        strcpy_s(name, namefile);
        strcpy_s(surname, surnamefile);
        age = agefile;
    }
};
enum MENU {EXIT, ADD, SHOW};
int Menu()
{
    int choice;
    cout << "[1] Add new Human" << endl;
    cout << "[2] Show all humans" << endl;
    cout << "[0] Exit" << endl;
    cout << endl;
    cout << ">> ";
    cin >> choice;
    cout << endl;
    return choice;
}
void addHuman(Human *&arr, int &size)
{
    Human* temp = new Human[size + 1];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    temp[size].Input();
    temp[size].saveToFile();
    delete[]arr;
    size++;
    arr = temp;
}
void showAll(Human*arr, int &size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i].Show();
        cout << endl;
    }
}
void readFromFile(Human*& arr, int &size)
{
    ifstream in(filename, ios_base::in);
    char bname[250], bsurname[250], bage[250];
    while (!in.eof())
    {
        in.getline(bname, 250, ':');
        if(in.eof())
        {
            break;
        }
        in.getline(bsurname, 250, ':');
        in.getline(bage, 250, '|');

        int age = atoi(bage);

        Human readHuman;
        readHuman.copyFromFile(bname, bsurname, age);

        Human* temp = new Human[size + 1];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        temp[size] = readHuman;
        delete[]arr;
        size++;
        arr = temp;
    }
}


int main()
{
    int size = 0;
    Human* humans = new Human[size];

    readFromFile(humans, size);
    bool isExit = false;
    while (!isExit)
    {
        switch (Menu())
        {
        case EXIT: isExit = true; cout << "Goodbye!"; break;
        case ADD: addHuman(humans, size); break;    
        case SHOW: showAll(humans, size); break;
        }
    }

    //Human human = {};
    //human.Input();//Input(human);
    //human.Show();//Show(human);
   
    //name.txt
    //database.png

    //iostream      cout <<    cin >>

    //fstream  ofstream out <<      ifstream in >>
    //text.txt ---> open
    //read file
    //write file
    //close file

    //Book book;
    //ofstream out;
    //out.open("text.txt");
    //ofstream out("text.txt", ios_base::out);
    //ofstream out("text.txt", ios_base::app);
    //if (out.is_open())
    //{
    //    out << "Hello world!1" << endl;
    //    cout << "Save to file" << endl;
    //}
    //out.close();
    //ifstream in("text.txt", ios_base::in);
    //char buff[250];
    ////cin >> number
    //while (!in.eof())
    //{
    //    in.getline(buff, 250); //in >> buff
    //    cout << buff << endl;
    //}

    //
    //in.close();

}

