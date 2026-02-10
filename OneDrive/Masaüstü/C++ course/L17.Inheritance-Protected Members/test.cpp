#include <iostream>
#include <functional>
#include <string>

using namespace std;

hash<string> stringHash;

class User
{
public:
    User(const string &name, const string &email, const string &password)
        : name(name), email(email), _password(password) {}

    void displayToken()
    {
        cout << "Password: " << stringHash(_password) << endl;
    }
    protected:
        string _password;  // Protected member
        string name;
        string email;
};

int main()
{

}