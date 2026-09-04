#include <iostream>
using namespace std;

int main()
{
    //const int USA = 1;
    //const int FRANCE = 33;
    //const int UKRAINE = 380;
    //const int ITALY = 39;
    //const int AUSTRALIA = 61;

    //enum - набір іменованих цілочисельних констант
    
    //enum countries
    //{
    //    USA = 1,
    //    FRANCE = 33,
    //    UKRAINE = 380,
    //    ITALY = 39,
    //    AUSTRALIA = 61
    //};
    //cout << USA << endl;
    //cout << UKRAINE << endl;
    //cout << ITALY << endl;

    //enum coins
    //{
    //    penny = 1,
    //    nickel = 5,
    //    dime = 10,
    //    quarter = 25,
    //    half = 50,
    //    dollar_coin = 100
    //};
    //int coin;
    //cout << "Enter value of american coin : "; cin >> coin;
    //
    //switch (coin)
    //{
    //case penny:
    //    cout << "Penny = " << penny << " cent" << endl; break;
    //case nickel:
    //    cout << "Nickel = " << nickel << " cent" << endl; break;
    //case dime:
    //    cout << "Dime = " << dime << " cent" << endl; break;
    //case quarter:
    //    cout << "Quarter = " << quarter << " cent" << endl; break;
    //case half:
    //    cout << "Half = " << half << " cent" << endl; break;
    //case dollar_coin:
    //    cout << "Dollar Coin = " << dollar_coin << " cent" << endl; break;
    //default:
    //    cout << "Error coin value" << endl; break;
    //}

    //enum categories{milk, chemistry, bread, meat, bakalia};
    //cout << milk << endl;
    //cout << chemistry << endl;
    //cout << bread << endl;
    //cout << meat << endl;
    //cout << bakalia << endl;


    //int a;
    //categories categori;
    //categori = bread;
    //categori = meat;
    //categori = milk;
    //categori = chemistry;
    //categori = bakalia;
    ////categori = Avracadabra;
    ////categori = 6767676;


    //string category;
    //category = "bread";
    //category = "Meat";
    //category = "Milk";
    //category = "Avracadabra";
    //category = "6767676";

    //while (true)//Цикл з передумовою
    //{
    //    
    //}


    //do //Цикл з постумовою 
    //{

    //} while (true);


    //for (int i = 0; i < 10; i++) //Цикл з параметрами
    //{

    //}

    //int counter = 1;
    //while (counter <= 15)
    //{
    //    cout << "I did " << counter << " pushup(s)" << endl;
    //    counter++;
    //}

    /*float a, b, res;
    cout << "Enter a : "; cin >> a;
    cout << "Enter b : "; cin >> b;
    char key;*/
    //cout << "\tChoose the operation : " << endl;
    //cout << "[+] - add number" << endl;
    //cout << "[-] - sub number" << endl;
    //cout << "[*] - multy number" << endl;
    //cout << "[/] - div number" << endl;
    //cout << "[e] - exit" << endl;
    //cin >> key;
    //while (key != 'e'){
    //    switch (key)
    //    {
    //    default:
    //        cout << "Error choice" << endl;
    //        break;
    //    case 'e':
    //        cout << "GoodBye!" << res << endl;
    //        break;
    //    case '+':
    //        res = a + b;
    //        cout << "Result = " << res << endl;
    //        break;
    //    case '-':
    //        res = a - b;
    //        cout << "Result = " << res << endl;
    //        break;
    //    case '*':
    //        res = a * b;
    //        cout << "Result = " << res << endl;
    //        break;
    //    case '/':
    //        res = a / b;
    //        cout << "Result = " << res << endl;
    //        break;
    //    
    //    }
    //    
    //}

    /*do
    {
        cout << "\tChoose the operation : " << endl;
        cout << "[+] - add number" << endl;
        cout << "[-] - sub number" << endl;
        cout << "[*] - multy number" << endl;
        cout << "[/] - div number" << endl;
        cout << "[e] - exit" << endl;
        cin >> key;

        switch (key)
        {
        default:
            cout << "Error choice" << endl;
            break;
        case 'e':
            cout << "GoodBye!" << res << endl;
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
    } while (key != 'e');*/

    int i = 1;
    while (i <= 10) 
    {
        cout << i << " ";
        i++;
    }
    cout << endl;

    int counterr = 1;
    do
    {
        cout << counterr << " ";
        counterr++;
    } while (counterr <= 10);
    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i <= 10; i+=2)
    {
        cout << i << " ";
    }
    cout << endl;

    float x = 1;
    for (; x <= 2; x += 0.2)
    {
        cout << x << " ";
    }
    cout << endl;
    
    
    for (int i = 0; i <= 10; i+=2)
    {
        cout << i << " ";
    }
    cout << endl;
    
    for (int i =0; ; i<=10)
    {
        i++;
        cout << i << " ";
        if (i == 10) {
            break;
        }
    }
    cout << endl;


    int magicNumb = 2;
    cout << "\n===========================" << endl;
    cout << "\t My magic number between 1 and 10" << endl;
    cout << "===========================" << endl;
    int user;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter nubmer : "; cin >> user;
        if (user == magicNumb) {
            cout << "Grats! Youre winner!" << endl;
            break;
        }
        else {
            cout << "Thats not my number!!" << endl;
        }

        if (i >= 5) {
            cout << "\nLoser!!" << endl;
            break;
        }
    }


















    
}
