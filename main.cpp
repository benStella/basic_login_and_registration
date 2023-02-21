#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// class for admin credentials
class admin_credentials
{

public:
    string username;
    string password;
};

int main()
{

    // admin credentials
    admin_credentials login;
    login.username = "Ben";
    login.password = "123";

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

            // write to text file
            users << "Username:" << registerUsername << endl
                  << "First Name:" << registerFirstName << endl
                  << "Last Name:" << registerLastName << endl;
            users.close();
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