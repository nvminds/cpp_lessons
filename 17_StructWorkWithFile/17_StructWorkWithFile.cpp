#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

struct Film
{
    int id;
    char name[50];
    char director[50];
    char genre[50];
    float star_rating;
    float price;
};
void showFilm(Film& film)
{
    cout << "ID : " << film.id << endl;
    cout << "Name : " << film.name << endl;
    cout << "Director : " << film.director << endl;
    cout << "Genre : " << film.genre << endl;
    cout << "Rating : " << film.star_rating << endl;
    cout << "Price : $" << film.price << endl;
    cout << endl;
}
void searchByName(char name[], Film *film, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(film[i].name, name) == 0)
        {
            showFilm(film[i]);
        }
    }
}
void searchByDirector(char director[], Film *film, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(film[i].director, director) == 0)
        {
            showFilm(film[i]);
        }
    }
}
void searchByGenre(char genre[], Film *film, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(film[i].genre, genre) == 0)
        {
            showFilm(film[i]);
        }
    }
}
void searchMostPopularInGenre(char genre[], Film *film, int size)
{
    int max = 0;
    int max_index = 0;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(film[i].genre, genre) == 0)
        {
            if (film[i].star_rating>max)
            {
                max = film[i].star_rating;
                max_index = i;
            }
        }
    }
    showFilm(film[max_index]);
}
void changeFilmStat(Film* films, int size, int id)
{
    for (int i = 0; i < size; i++)
    {
        if (films[i].id==id)
        {
            showFilm(films[i]);
            cout << "Enter new rating >> "; cin >> films[i].star_rating;
            cout << "Enter new price >> "; cin >> films[i].price;
            showFilm(films[i]);
        }
    }
}

int main()
{
    int choice, id;
    char name[50], director[30], genre[30];
    const int size = 6;
    Film films[size] =
    {
        {0, "Back to future","Tom Kruise", "Fantasy", 8.2, 102.99},
        {1, "Inception", "Christopher Nolan", "Sci-Fi", 8.8, 250.0 },
        {2, "The Matrix", "Lana Wachowski", "Action", 8.7, 200.0},
        {3, "Interstellar", "Christopher Nolan", "Sci-Fi", 8.6, 300.0},
        {4, "The Godfather", "Francis Ford Coppola", "Crime", 9.2, 180.0},
        {5, "Titanic", "James Cameron", "Drama", 7.9, 220.0}
    };
    do 
    {
        system("cls");
        cout << "-------------- MENU ---------------------" << endl;
        cout << "Show all films             "  << "[1]" << endl;
        cout << "Search by name             "  << "[2]" << endl;
        cout << "Search by director         "  << "[3]" << endl;
        cout << "Search by genre            "  << "[4]" << endl;
        cout << "Most popular film          "  << "[5]" << endl;
        cout << "Change film stats          "  << "[6]" << endl;
        cout << "Exit                       " << "[0]" << endl; cout << endl;
        cout << "Enter choice >> "; cin >> choice; cout << endl;
        cin.ignore();
        switch (choice)
        {
        case 0:
            cout << "Have a good day, goodbye!" << endl;
            break;
        case 1:
            for (int i = 0; i < size; i++)
            {
                showFilm(films[i]);
            }
            break;
        case 2:
            cout << "Enter film`s name >> "; cin.getline(name, 50); cout << endl;
            searchByName(name, films, size);
            break;
        case 3:
            cout << "Enter film`s director >> "; cin.getline(director, 30); cout << endl;
            searchByDirector(director, films, size);
            break;
        case 4:
            cout << "Enter film`s genre >> "; cin.getline(genre, 30); cout << endl;
            searchByGenre(genre, films, size);
            break;
        case 5:
            cout << "Enter film`s genre >> "; cin.getline(genre, 30); cout << endl;
            searchMostPopularInGenre(genre, films, size);
            break;
        case 6:
            cout << "Enter film`s id >> "; cin >> id;
            changeFilmStat(films, 6, id);
            break;
        default:
            break;
        }
        cout << endl;
        if (choice != 0)
        {
            cout << "Press any key to continue...." << endl;
            _getch();
        }
    } while (choice!=0);
}
