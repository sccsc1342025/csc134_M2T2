// CSC 134
// M2T2
// Sebastian Camacho
// 02/08/2025

#include <iostream>

using namespace std;

int main()
{
    string name;
    int num_apples;
    double price_each;

    cout << "Please enter your name: " << endl;
    cin >> name;
    cout << "How many apples are for sale" << endl;
    cin >> num_apples;
    cout << "How much per apple" << endl;
    cin >> price_each;

    cout << "Welcome to the " << name << " apple farm!" << endl;
    cout << "We have " << num_apples << " in stock" << endl;
    cout << "Each apple costs $" << price_each << endl;

    double total_price = num_apples * price_each;

    cout << "The total price for all " << num_apples;
    cout << " is: $" << total_price << endl;
    cout << "Thank you for coming by!" << endl;
    return 0;
}