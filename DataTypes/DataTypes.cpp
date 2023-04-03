// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const unsigned short maxDays = 14;
    const float TaxRate = 0.1f;
    unsigned int uCount = 0;
    unsigned short hours[maxDays];
    unsigned short totalHours = 0;

    string name;
    
    float fGrossPay = 0; //total hours * wage
    float fNetPay = 0; //Gross Pay - (Gross Pay * Tax Rate)
    float fTax = 0; // Gross Pay * Tax Rate
    float fWage = 0;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your wage: ";
    cin >> fWage;

    for (int i = 0; i < maxDays; i++) {
        cout << "how many hours did you work on day " << i+1 << "? ";
        cin >> hours[i];
        totalHours += hours[i];
    }
    
    fGrossPay = totalHours * fWage;
    fTax = fGrossPay * TaxRate;
    fNetPay = fGrossPay - fTax;

    cout << "REPORT\n\n";
    cout << "Name: " << name << "\n";
    cout << "Wage: $" << fWage << "/hr\n";
    cout << "Hours worked total: " << totalHours << "\n";
    cout << "Gross pay: $" << fGrossPay << "\n";
    cout << "Tax Rate: " << TaxRate << "%\n";
    cout << "Taxes paid: $" << fTax << "\n";
    cout << "Net Pay: $" << fNetPay << "\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
