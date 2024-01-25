/*
 COP3014: Programmming II
 Assignment 0 - Display a message and ask the user for their age, which you then display back to the user
 Duha Iqbal
 01/15/2023
*/

#include <iostream>
#include <cmath>

using namespace std;

const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int PENNY = 25;

int main( )
{
    double user_amount;
    int cent_value, quarters, dimes, nickels,pennies, cents_left;
    
    cout << "Welcome to the Coin Dispenser\n" << endl;
    do{
        cout << "Enter the value you would like to convert to coins, then press return.\n" << endl;
        cin >> user_amount;
    } while(user_amount < 0.00 || user_amount > 100.00);
    
    cent_value = user_amount * 100;
    quarters = cent_value / QUARTER;
    cents_left = cent_value % QUARTER;
    
    dimes = cents_left / DIME;
    cents_left = cents_left % DIME;
    
    nickels = cents_left / NICKEL;
    cents_left = cents_left % NICKEL;
    
    pennies = cents_left / PENNY;
    cents_left = cents_left % PENNY;
    
    cout << "Value: $ " << user_amount << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
    
    return 0;
}



