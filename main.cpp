#include <iostream>
using namespace std;

class user_credentials
{
public:
    string username;
    string password;
};

class accounts
{

public:
    string username;
    string first_name;
    string last_name;

private:
};

int main()
{
    user_credentials login;
    accounts user_accounts;

    login.username = "Ben";
    string inputUsername;
    string password = login.password = "123";
    string inputPassword;

    string user_1[3] = {
        user_accounts.username = "Blaze",
        user_accounts.first_name = "Ben",
        user_accounts.last_name = "stella"};

    cout << "username:";
    cin >> inputUsername;
    cout << "password:";
    cin >> inputPassword;

    while (login.username != inputUsername && password != inputPassword)
    {
        cout << "incorrect username or password" << endl;
        cout << "username:";
        cin >> inputUsername;
        cout << "password:";
        cin >> inputPassword;
    }

    cout << "username:" << user_1[0] << endl;
    cout << "First Name:" << user_1[1] << endl;
    cout << "Last Name:" << user_1[2] << endl;
    // cout << "password:" << inputPassword << endl;

    // cout << "password:" << login.password << endl;

    return 0;
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
