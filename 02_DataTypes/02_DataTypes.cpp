#include <iostream>
using namespace std;

void main()
{
    int age = 15;
    int Age = 14;
    //int 2age = 22; error
    int age1 = 67;
    int ageofman = 45;
    int AgeOfMan = 73;
    int age_of_man = 42;
    int _AgeOfMan = 24;
    //int int = 333;
    //INT a = 22;
    //int age = 17;
    const float pi = 3.14;
    double d = 3.33;

    cout << "Age : " << age << endl;
    cout << "Age of man: " << age1 << endl;
    cout << "Pi = " << pi << endl;
    //pi = 555;


    //count hours in 2000 years
    int countIn2000_Years; //empty variable
    const int dayIn2000_Years = 366;
    int hourInDay = 24;
    countIn2000_Years = dayIn2000_Years * hourInDay;
    cout << "Hours in 2000 year : " << countIn2000_Years << endl;

  /*  int count = 10;
    float costPrice = 35.99;*/
    //float discount = 0.05;
    //int count;
    //float costPrice;
    //cout << "Enter count : " << endl;
    //cin >> count;
    //cout << "Enter price : " << endl;
    //cin >> costPrice;

    //float TotalPrice;
    //TotalPrice = (costPrice * count) - (costPrice * count * discount);
    //cout << "Price : " << TotalPrice << endl;

    //1
    //float inchToCm = 2.54;
    //int inchTV;
    //float diagonalInCm;
    //cout << "Enter diagonal in inch:" << endl;
    //cin >> inchTV;
    //diagonalInCm = inchTV * inchToCm;
    //cout << "TV diagonal : " << diagonalInCm << endl;

    //2
    int days = 30;
    const float gramsInKG = 1000;
    float spentInDay;
    float totalSpentInKG;
    cout << "Enter how much hamster eat in 1 day (gramms): " << endl;
    cin >> spentInDay;
    totalSpentInKG = (spentInDay * days) / gramsInKG;
    cout << totalSpentInKG << " kilograms of feed need to be bought." << endl;

}


