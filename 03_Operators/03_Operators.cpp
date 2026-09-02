#include <iostream>
using namespace std;

void main()
{
    // operators + - * / = =! == < > <= >= %
    //Unarni    5      -5 (-)   ++  --
    //Binarni   + - * / = =! == < > <= >= %
    //Ternarni  


    //int a = 5, b = 4;

    //cout << a + b << endl;
    //cout << a - b << endl;
    //cout << a * b << endl;
    //cout << a / b << endl;
    //cout << a % b << endl;
    //cout << 3 % 7 << endl; //3
    //cout << 8 % 9 << endl; //8

    //Increment ta Decrement

    //int a = 2;
    //cout << "a = " << a << endl;
    //a = a + 1;
    //cout << "a = " << a << endl;
    //a++; // postfix increment
    //cout << "a = " << a << endl;
    //++a; // prefix increment
    //cout << "a = " << a << endl;
    //    
    //--a; // prefix decrement
    //cout << "a = " << a << endl;
    //a--; // postfix decrement
    //cout << "a = " << a << endl;

    //int c = 5;
    //cout << c++ << endl; //6 -------------------->
    //cout << ++c << endl; //7 <--------------------
    //cout << c << endl; //7
    //
    //c = c + 12;
    //cout << c << endl;
    //c += 12;
    //c = c - 12;
    //cout << c << endl;
    //c -= 12;
    //c = c * 12;
    //cout << c << endl;
    //c *= 12;
    //c = c / 12;
    //cout << c << endl;
    //c /= 12;
    //c = c % 12;
    //cout << c << endl;
    //c %= 12;

    ////zvuzuyche peretvorenya
    ////1. neyavne peretvorenya
    //int A = 3.33;
    //cout << "A = " << A << endl;

    ////rozshityuche peretvorenya
    //double pi = 3.14;
    //cout << "PI = " << pi << endl; //3.140000.....01

    //unsigned int salary = 3000000000;
    //cout << salary << endl;

    ////2. yavne peretvorenya
    //double num = 37.4;
    //float num2 = (int)num;
    //cout << num2 << endl;

    //if (ymova)
    //{
    //    //dia1
    //}
    //else
    //{
    //    //dia2
    //}

    //float numb1, numb2;
    //cout << "Enter number 1: " << endl;
    //cin >> numb1;
    //cout << "Enter number 2: " << endl;
    //cin >> numb2;
    //float res = numb1 / numb2;

    //if (numb2 == 0)
    //{
    //    cout << "You can't divide by zero!!" << endl;
    //}
    //else
    //{
    //    cout << "Result : " << numb1 << " / " << numb2 << " = " << res << endl;
    //}
    //
    //
    ////ternarniy operator  ?:
    //(numb2 == 0) ? cout << "Error" << endl : cout << "Result = " << res << endl;



    //int day;
    //cout << "Enter day number : ";
    //cin >> day;
    //if (day==1)
    //{
    //    cout << "Monday" << endl;
    //}
    //else if (day==2)
    //{
    //    cout << "Tuesday" << endl;
    //}
    //else if (day==3)
    //{
    //    cout << "Wednesday" << endl;
    //}
    //else if (day==4)
    //{
    //    cout << "Thursday" << endl;
    //}
    //else if (day==5)
    //{
    //    cout << "Friday" << endl;
    //}
    //else if (day==6)
    //{
    //    cout << "Saturday" << endl;
    //}
    //else if (day==7)
    //{
    //    cout << "Sunday" << endl;
    //}
    //else
    //{
    //    cout << "Error number day" << endl;
    //}

    float a, b, res;
    cout << "Enter a : "; cin >> a;
    cout << "Enter b : "; cin >> b;
    char key;
    cout << "\tChoose the operation : " << endl;
    cout << "[+] - add number" << endl;
    cout << "[-] - sub number" << endl;
    cout << "[*] - multy number" << endl;
    cout << "[/] - div number" << endl;
    cin >> key;
    if (key == '+')
    {
        res = a + b;
        cout << "Result = " << res << endl;
    }
    else if (key=='-')
    {
        res = a - b;
        cout << "Result = " << res << endl;
    }
    else if (key=='*')
    {
        res = a * b;
        cout << "Result = " << res << endl;
    }
    else if (key=='/')
    {
        res = a / b;
        cout << "Result = " << res << endl;
    }
    else
    {
        cout << "Error choice" << endl;
    }

    switch (key)
    {
    default:
        cout << "Error choice" << endl;
        break;
    case '+':
        res = a + b;
        cout << "Result = " << res << endl;
        break;
    case '-':
        res = a - b;
        cout << "Result = " << res << endl;
        break;
    case '*':
        res = a * b;
        cout << "Result = " << res << endl;
        break;
    case '/':
        res = a / b;
        cout << "Result = " << res << endl;
        break;
    }
    int day = 5; 
    cout << "Enter number day : "; cin >> day;
    switch (day)
    {
    case 1: case 2: case 3: case 4: case 5:
        cout << "Working day" << endl;
    default:
        break;
    }







}


