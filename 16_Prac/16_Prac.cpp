#include <iostream>
using namespace std;

struct WashingMachine
{
    char brand[25], color[20];
    double width, length, height, power, spin_speed, temperature;
};
struct Iron
{
    char brand[25];
    char model[40];
    char color[25];
    double min_temp;
    double max_temp;
    char steam_func[10];
    double power;
    
};
struct Boiler
{
    char brand[25];
    char color[25];
    double power, capacity, temperature;
};

WashingMachine inputWashingmachine(WashingMachine washingmachine)
{
    cout << "Enter brand >> "; cin.getline(washingmachine.brand, 25);
    cout << "Enter color >> "; cin.getline(washingmachine.color, 20);
    cout << "Enter width >> "; cin >> washingmachine.width;
    cout << "Enter length >> "; cin >> washingmachine.length;
    cout << "Enter height >> "; cin >> washingmachine.height;
    cout << "Enter power >> "; cin >> washingmachine.power;
    cout << "Enter spin speed >> "; cin >> washingmachine.spin_speed;
    cout << "Enter heating temperature >> "; cin >> washingmachine.temperature;
    return washingmachine;
}
void showWashingmachine(WashingMachine &washingmachine)
{
    cout << "Brand : " << washingmachine.brand << endl;
    cout << "Color : " << washingmachine.color << endl;
    cout << "Width : " << washingmachine.width << " Cm" << endl;
    cout << "Length : " << washingmachine.length << " Cm" << endl;
    cout << "Height : " << washingmachine.height << " Cm" << endl;
    cout << "Power : " << washingmachine.power << " W" << endl;
    cout << "Spin speed : " << washingmachine.spin_speed << " RPM" << endl;
    cout << "Heating temperature : " << washingmachine.temperature << " degrees C" << endl;
}

Iron inputIron(Iron iron)
{
    cout << "Enter brand >> "; cin.getline(iron.brand,25);
    cout << "Enter model >> "; cin.getline(iron.model, 40); 
    cout << "Enter color >> "; cin.getline(iron.color, 25);
    cout << "Enter minimum temperature >> "; cin >> iron.min_temp;
    cout << "Enter maximum temperature >> "; cin >> iron.max_temp;
    cout << "Enter steam function >> "; cin >> iron.steam_func;
    cout << "Enter power >> "; cin >> iron.power;
    return iron;
}
void showIron(Iron & iron)
{
    cout << "Brand : " << iron.brand << endl;
    cout << "Model : " << iron.model << endl;
    cout << "Color : " << iron.color << endl;
    cout << "Minimum temperature : " << iron.min_temp << " degrees C" << endl;
    cout << "Maximum temperature : " << iron.max_temp << " degrees C" << endl;
    cout << "Steam function : " << iron.steam_func << endl;
    cout << "Power : " << iron.power << " W" << endl;
}

Boiler inputBoiler(Boiler boiler)
{
    cout << "Enter brand >> "; cin.getline(boiler.brand,25);
    cout << "Enter color >> "; cin.getline(boiler.color, 25);
    cout << "Enter power >> "; cin >> boiler.power;
    cout << "Enter capacity >> "; cin >> boiler.capacity;
    cout << "Enter heating temperature >> "; cin >> boiler.temperature;
    return boiler;
}
void showBoiler(Boiler& boiler)
{
    cout << "Brand : " << boiler.brand << endl;
    cout << "Color : " << boiler.color << endl;
    cout << "Power : " << boiler.power << " W" << endl;
    cout << "Capacity : " << boiler.capacity << " liters" << endl;
    cout << "Minimum temperature : " << boiler.temperature << " degrees C" << endl;
}



int main()
{
    //1
    //WashingMachine washingmachine = { "Samsung", "Silver", 60, 55, 85, 2000, 1400, 90 };
    //showWashingmachine(washingmachine); cout << endl;

    //WashingMachine NewWashingMachine = {};
    //NewWashingMachine = inputWashingmachine(NewWashingMachine); cout << endl;
    //showWashingmachine(NewWashingMachine);

    
    //2
    //Iron iron = { "Philips", "Azur DST7040/20", "Dark Blue", 70, 220, "Yes", 2800};
    //showIron(iron); cout << endl;

    //Iron NewIron = {};
    //NewIron = inputIron(NewIron); cout << endl;
    //showIron(NewIron);


    //3
    Boiler boiler = { "Tefal", "Matte Black", 2400, 1.7, 100 };
    showBoiler(boiler); cout << endl;

    Boiler NewBoiler = {};
    NewBoiler = inputBoiler(NewBoiler); cout << endl;
    showBoiler(NewBoiler);
}
