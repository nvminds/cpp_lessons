#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

const char* filename = "BooksDatabase.txt";
struct Book
{
    char name[30];
    char author[30];
    char publication[30];
    char genre[30];
    char year_of_publication[30];
    float price;
    void saveToFile()
    {
        ofstream out(filename, ios_base::app);
        out << name;
        out << ':';
        out << author;
        out << ':';
        out << publication;
        out << ':';
        out << genre;
        out << ':';
        out << year_of_publication;
        out << ':';
        out << price;
        out << '|';
        out.close();
    }
    void copyFromFile(char* nameF, char* authorF, char* publicationF, char* genreF, char* year_of_publicationF, float priceF)
    {
        strcpy_s(name, nameF);
        strcpy_s(author, authorF);
        strcpy_s(publication, publicationF);
        strcpy_s(genre, genreF);
        strcpy_s(year_of_publication, year_of_publicationF);
        price = priceF;
    }
};
void showAllBooks(Book &books)
{
    cout << "Name : " << books.name << endl;
    cout << "Author : " << books.author << endl;
    cout << "Publication : " << books.publication << endl;
    cout << "Genre : " << books.genre << endl;
    cout << "Year of publication : " << books.year_of_publication << endl;
    cout << "Price : $" << books.price << endl;
    cout << endl;
}
void searchByName(char name[], Book *books, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].name, name) == 0)
        {
            showAllBooks(books[i]);
        }
    }
}
void searchByAuthor(char author[], Book *books, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].author, author) == 0)
        {
            showAllBooks(books[i]);
        }
    }
}
void searchByGenre(char genre[], Book *books, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].genre, genre) == 0)
        {
            showAllBooks(books[i]);
        }
    }
}
void searchByPublication(char publication[], Book *books, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].publication, publication) == 0)
        {
            showAllBooks(books[i]);
        }
    }
}
void changeBookPrice(Book* books, int size, char name[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].name, name) == 0)
        {
            showAllBooks(books[i]);
            cout << "Enter new price >> "; cin >> books[i].price;
            showAllBooks(books[i]);
        }
    }
}
Book* addNewBook(Book* books, int* size, Book newBook)
{
    Book* temp = new Book[*size + 1];
    for (int i = 0; i < *size; i++)
    {
        temp[i] = books[i];
    }
    temp[*size] = newBook;
    temp[*size].saveToFile();
    delete[]books;
    (*size)++;
    return temp;
}
Book* removeBookByName(Book* books, int* size, char name[])
{
    int index = -1;
    for (int i = 0; i < *size; i++)
    {
        if (strcmp(books[i].name, name) == 0)
        {
            index = i;
        }
    }
    if (index!=-1)
    {
        Book* temp = new Book[*size - 1];
        for (int i = 0; i < index; i++)
        {
            temp[i] = books[i];
        }
        for (int i = index + 1; i < *size; i++)
        {
            temp[i - 1] = books[i];
        }
        delete[]books;
        (*size)--;
        return temp;
    }
    else 
    {
        return books;
    }
}
void readFromFile(Book*& arr, int& size)
{
    ifstream in(filename, ios_base::in);
    char Bname[30], Bauthor[30], Bpublication[30], Bgenre[30], Byear_of_publication[30], Bprice[30];
    while (!in.eof())
    {
        in.getline(Bname, 30, ':');
        if (in.eof())
        {
            break;
        }
        in.getline(Bauthor, 30, ':');
        in.getline(Bpublication, 30, ':');
        in.getline(Bgenre, 30, ':');
        in.getline(Byear_of_publication, 30, ':');
        in.getline(Bprice, 30, '|');

        float price = atof(Bprice);

        Book readBook;
        readBook.copyFromFile(Bname, Bauthor, Bpublication, Bgenre, Byear_of_publication, price);

        Book* temp = new Book[size + 1];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        temp[size] = readBook;
        delete[]arr;
        size++;
        arr = temp;
    }
}
void changeFileInfo(Book* books, int& size)
{
    ofstream out(filename, ios_base::out);
    for (int i = 0; i < size; i++)
    {
        out << books[i].name;
        out << ':';
        out << books[i].author;
        out << ':';
        out << books[i].publication;
        out << ':';
        out << books[i].genre;
        out << ':';
        out << books[i].year_of_publication;
        out << ':';
        out << books[i].price;
        out << '|';
    }
    out.close();
}

int main()
{
    int choice;
    char name[30], author[30], genre[30], publication[30];
    //int* size = new int(10);
    int* size = new int(0);
    Book* books = new Book[*size];
    Book default_books[10] =
    {
        {"1984", "George Orwell", "Secker & Warburg", "Dystopia", "1949", 250.50},
        {"The Hobbit", "J.R.R. Tolkien", "Allen & Unwin", "Fantasy", "1937", 320.00},
        {"Kobzar", "Taras Shevchenko", "Osnovy", "Poetry", "1840", 150.00},
        {"The Witcher", "Andrzej Sapkowski", "SuperNova", "Fantasy", "1993", 280.75},
        {"Sherlock Holmes", "Arthur Conan Doyle", "George Newnes", "Detective", "1892", 195.00},
        {"Dracula", "Bram Stoker", "Archibald Constable", "Horror", "1897", 210.00},
        {"Clean Code", "Robert C. Martin", "Prentice Hall", "Technical", "2008", 850.00},
        {"The Little Prince", "Antoine de Saint-Exupery", "Reynal & Hitchcock", "Fable", "1943", 135.20},
        {"Dune", "Frank Herbert", "Chilton Books", "Sci-Fi", "1965", 410.00},
        {"The Great Gatsby", "F. Scott Fitzgerald", "Charles Scribner's", "Classic", "1925", 180.00}
    };
    //for (int i = 0; i < *size; i++)
    //{
    //    books[i] = default_books[i];
    //}
    //for (int i = 0; i < *size; i++)
    //{
    //    books[i].saveToFile();
    //}
    readFromFile(books, *size);
    do 
    {
        system("cls");
        cout << "-------------- MENU ---------------------" << endl;
        cout << "Show all books             " << "[1]" << endl;
        cout << "Search by name             " << "[2]" << endl;
        cout << "Search by author           " << "[3]" << endl;
        cout << "Search by genre            " << "[4]" << endl;
        cout << "Search by publication      " << "[5]" << endl;
        cout << "Change book price          " << "[6]" << endl;
        cout << "Add new book               " << "[7]" << endl;
        cout << "Remove book                " << "[8]" << endl;
        cout << "Exit                       " << "[0]" << endl; cout << endl;
        cout << "Enter choice >> "; cin >> choice; cout << endl;
        cin.ignore();
        switch (choice)
        {
        case 0:
            cout << "Have a good day, goodbye!" << endl;
            break;
        case 1:
            for (int i = 0; i < *size; i++)
            {
                showAllBooks(books[i]);
            }
            break;
        case 2:
            cout << "Enter book name >> "; cin.getline(name, 30); cout << endl;
            searchByName(name, books, *size);
            break;
        case 3:
            cout << "Enter book author >> "; cin.getline(author, 30); cout << endl;
            searchByAuthor(author, books, *size);
            break;
        case 4:
            cout << "Enter book genre >> "; cin.getline(genre, 30); cout << endl;
            searchByGenre(genre, books, *size);
            break;
        case 5:
            cout << "Enter book publication >> "; cin.getline(publication, 30); cout << endl;
            searchByPublication(publication, books, *size);
            break;
        case 6:
            cout << "Enter book name >> "; cin.getline(name, 30); cout << endl;
            changeBookPrice(books, *size, name);
            changeFileInfo(books, *size);
            break;
        case 7:
        {
            Book newBook = {};
            cout << "Name >> "; cin.getline(newBook.name, 30);
            cout << "Author >> "; cin.getline(newBook.author, 30);
            cout << "Publication >> "; cin.getline(newBook.publication, 30);
            cout << "Genre >> "; cin.getline(newBook.genre, 30);
            cout << "Year of publication >> "; cin.getline(newBook.year_of_publication, 30);
            cout << "Price >> $"; cin >> newBook.price;
            cin.ignore();
            books = addNewBook(books, size, newBook);
            for (int i = 0; i < *size; i++)
            {
                showAllBooks(books[i]);
            }
            break;
        }
        case 8:
            cout << "Enter book name to delete >> "; cin.getline(name, 30); cout << endl;
            books = removeBookByName(books, size, name);
            changeFileInfo(books, *size);
            for (int i = 0; i < *size; i++)
            {
                showAllBooks(books[i]);
            }
            break;
        default:
            break;
        }
        if (choice != 0)
        {
            cout << "Press any key to continue...." << endl;
            _getch();
        }
    } while (choice != 0);
    delete[]books;
    delete size;
}
