/*
 COP3014: Programmming II
 Assignment 1 - Creating a coin dispenser, which asks the user to enter a value in $xx.xx and converts the value into coins
 Duha Iqbal
 01/26/2024
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int PENNY = 1;

int main( )
{
    //declare variables
    double user_amount;
    int cent_value, cents_left, quarters, dimes, nickels,pennies;
    
    //welcome user
    cout << "Welcome to the Coin Dispenser" << endl;
   
    //ask user to enter conversion amount
        cout << "\nEnter the value you would like to convert to coins( must be in format $xx.xx): $";
        cin >> user_amount;
        cout << "\n-----------------------------------------------------------------------------------" << endl;
    if(user_amount < 0.00 || user_amount > 100.00){
        cout << "Value must be between $0.00 and $100.00" << endl;
        exit(1);
        //program will abort if conversion amount is not between $0 and $100
    }
    
    // convert conversion amount into cents, with rounding to diplay correct coin conversion. Example: when the user enters $2.01 without the rounding function, the conversion does not account for the penny
    cent_value = static_cast<int> (round(user_amount * 100));
    
    // find the amount of each type of coin
    quarters = cent_value / QUARTER;
    cents_left = cent_value % QUARTER;
    
    dimes = cents_left / DIME;
    cents_left %= DIME;
    
    nickels = cents_left / NICKEL;
    cents_left %= NICKEL;
        
    pennies = cents_left / PENNY;
    cents_left %= PENNY;
    
    // display original value and amount of each coin type after conversion
    cout << "\nThe original amount: $" << setprecision(4) << user_amount << endl;
    cout << "\nAfter Conversion: " << endl;
    cout << "- " << quarters << " Quarters" << endl;
    cout << "- " << dimes << " Dimes" << endl;
    cout << "- " << nickels << " Nickels" << endl;
    cout << "- " << pennies << " Pennies" << endl;
    
    return 0;
}



