#include <iostream>
#include <string>
using namespace std;

/*
Cola Machine

Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
Then allow the user to choose a beverage by entering a number 1-5.
Output which beverage they chose.

★★ Modify the program so that if the user enters a choice other than 1-5 then it will output "Error. choice was not valid, here is your money back."
*/

int bev1 = 1;
string bev1name = "Water";
int bev2 = 2;
string bev2name = "Powerade";
int bev3 = 3;
string bev3name = "Dr.Pepper";
int bev4 = 4;
string bev4name = "Pink Lemonade";
int bev5 = 5;
string bev5name = "Apple Juice";

void ClearScreen()
{
cout << string( 100, '\n' );
}

void PrintIntroMessage() // Welcome user to the program
{
    cout << "Welcome to the Soda Machine!" << endl;
}

void beverageDisplay()
{
    cout << "Please select from the following beverages: " << endl;
    cout << "\n\n" << endl;
    cout << "********************************************" << endl;
    cout << "*****                                  *****" << endl;
    cout << "*****          1.  Water               *****" << endl;
    cout << "*****          2.  Powerade            *****" << endl;
    cout << "*****          3.  Dr. Pepper          *****" << endl;
    cout << "*****          4.  Pink Lemonade       *****" << endl;
    cout << "*****          5.  Apple Juice         *****" << endl;
    cout << "*****                                  *****" << endl;
    cout << "********************************************" << endl;
    cout << "\n\n" << endl;
}

void drinkChoice() // Let user make their selection of beverage, and dispense beverage
{
    int bevChoice;
    string challengeResponse;
    int errorResponse;
    cout << "Please input the number of your beverage choice: " << endl;
    cin >> bevChoice;
    ClearScreen();

    if (bevChoice == bev1)
    {
        cout << "You have selected: " << bev1name << endl;
        cout << "Is this correct? Type 'Y' or 'N': " << endl;
        cin >> challengeResponse;
        
        if (challengeResponse == "Y")
        {
            cout << "Dispensing " << bev1name << ". Thank you for using the Soda Machine!" << endl;
        }
        else if (challengeResponse == "N")
        {
            ClearScreen();
            beverageDisplay();
            drinkChoice();
        }
    }

    else if (bevChoice == bev2)
    {
        cout << "You have selected: " << bev2name << endl;
        cout << "Is this correct? Type 'Y' or 'N': " << endl;
        cin >> challengeResponse;
        
        if (challengeResponse == "Y")
        {
            cout << "Dispensing " << bev2name << ". Thank you for using the Soda Machine!" << endl;
        }
        else if (challengeResponse == "N")
        {
            ClearScreen();
            beverageDisplay();
            drinkChoice();
        }
    }
    
    else if (bevChoice == bev3)
    {
        cout << "You have selected: " << bev3name << endl;
        cout << "Is this correct? Type 'Y' or 'N': " << endl;
        cin >> challengeResponse;
        
        if (challengeResponse == "Y")
        {
            cout << "Dispensing " << bev3name << ". Thank you for using the Soda Machine!" << endl;
        }
        else if (challengeResponse == "N")
        {
            ClearScreen();
            beverageDisplay();
            drinkChoice();
        }
    }

    else if (bevChoice == bev4)
    {
        cout << "You have selected: " << bev4name << endl;
        cout << "Is this correct? Type 'Y' or 'N': " << endl;
        cin >> challengeResponse;
        
        if (challengeResponse == "Y")
        {
            cout << "Dispensing " << bev4name << ". Thank you for using the Soda Machine!" << endl;
        }
        else if (challengeResponse == "N")
        {
            ClearScreen();
            beverageDisplay();
            drinkChoice();
        }
    }

    else if (bevChoice == bev5)
    {
        cout << "You have selected: " << bev5name << endl;
        cout << "Is this correct? Type 'Y' or 'N': " << endl;
        cin >> challengeResponse;
        
        if (challengeResponse == "Y")
        {
            cout << "Dispensing " << bev5name << ". Thank you for using the Soda Machine!" << endl;
        }
        else if (challengeResponse == "N")
        {
            ClearScreen();
            beverageDisplay();
            drinkChoice();
        }
    }

    else
    {
        cout << "You have entered an incorrect selection! Press '1' to try again or '2' to refund your money: " << endl;
        cin >> errorResponse;

        if (errorResponse == 1)
        {
            ClearScreen();
            beverageDisplay();
            drinkChoice();
        }
        else if (errorResponse == 2)
        {
            ClearScreen();
            cout << "Here is your money back. Have a nice day!\n\n\n" << endl;
        }
        else
        {
            ClearScreen();
            beverageDisplay();
            drinkChoice();
        }
    }
}

int main() 
{
    PrintIntroMessage();
    beverageDisplay();
    drinkChoice();
}