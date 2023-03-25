// line 45 for loop not incrementing

#include "admin_credentials.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int login_func() 
{
    // user input variables
    string inputChoice;
    string inputUsername;
    string inputPassword;
    string registerUsername;
    string registerFirstName;
    string registerLastName;

    // other variables
    string outputUsers;

    // login or register input choice
    cout << "Login or Register:";
    cin >> inputChoice;

    if (inputChoice == "register")
    {
        cout << "username:";
        cin >> registerUsername;
        cout << "First Name:";
        cin >> registerFirstName;
        cout << "Last Name:";
        cin >> registerLastName;

        // create a text file
        fstream users;

        // open stream in append mode
        users.open("user_accounts.txt", ios::app);

        if (users.is_open())
        {

            // for loop to increment registration number
            for(int i = 0; i < 5; i++)
            {
            // write to text file
            users
             << i << "." << endl
                << "Username:" << registerUsername << endl
                << "First Name:" << registerFirstName << endl
                << "Last Name:" << registerLastName << endl << endl; 
            users.close();
            }
        }
    }
    else if (inputChoice == "login")
    {
        cout << "username:";
        cin >> inputUsername;
        cout << "password:";
        cin >> inputPassword;

        // while (login.username != inputUsername && login.password != inputPassword)
        // {
        //     cout << "incorrect username or password" << endl;
        //     cout << "username:";
        //     cin >> inputUsername;
        //     cout << "password:";
        //     cin >> inputPassword;
        // }

        fstream users;
        users.open("user_accounts.txt", ios::in);
        if (users.is_open())
        {
            while (getline(users, outputUsers))
            {
                cout << outputUsers;
            }
            users.close();
        }
    }

    return 0;
}