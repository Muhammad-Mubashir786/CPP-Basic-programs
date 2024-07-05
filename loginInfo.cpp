#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string username, password, storedUsername, storedPassword;
    int choice;

    cout << "Welcome to the login page. Please choose an option:\n";
    cout << "1. Register\n";
    cout << "2. Login\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        // Registration process
        cout << "Enter a new username: ";
        cin >> username;
        cout << "Enter a new password: ";
        cin >> password;

        // Write username and password to file
        ofstream writefile("file.txt");
        if (writefile.is_open())
        {
            writefile << username << endl;
            writefile << password << endl;
            writefile.close();
            cout << "Registration successful. Username and password saved.\n";
        }
        else
        {
            cout << "Unable to open the file for writing\n";
            return 1;
        }
        break;
    }
    case 2:
    {
        // Login process
        cout << "Enter your username: ";
        cin >> username;
        cout << "Enter your password: ";
        cin >> password;

        // Read username and password from file
        ifstream readfile("file.txt");
        if (readfile.is_open())
        {
            getline(readfile, storedUsername);
            getline(readfile, storedPassword);
            readfile.close();
        }
        else
        {
            cout << "Unable to open the file for reading\n";
            return 1;
        }

        // Compare input with stored values
        if (username == storedUsername && password == storedPassword)
        {
            cout << "Login Successful!\n";
        }
        else
        {
            cout << "Invalid login information\n";
        }
        break;
    }
    default:
        cout << "Invalid choice. Please restart the program and enter 1 or 2.\n";
        return 1;
    }

    return 0;
}
