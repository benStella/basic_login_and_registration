#include <iostream>
using namespace std;

// class for admin credentials
class admin_credentials_class
{

public:
    string username;
    string password;
};

int admin_credentials_func() {

// admin credentials
admin_credentials_class login;
login.username = "Ben";
login.password = "123";

return 0;
}