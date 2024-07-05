#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string username, password, storedUsername, storedPassword;
    int choice;
    cout << "Welcome to the login page, please register first\nEnter Username: ";
    cin>>choice;
    switch(choice)
    case 1:
    {
    	cout<<"Enter 1 for register\nEnter 2 for login\n";
    	cin >> username;
    	cout << "Enter a password: ";
    	cin >> password;
    // Write username and password to file
    ofstream writefile("file.txt");
    if (writefile.is_open()) {
        writefile << username << endl;
        writefile << password << endl;
        writefile.close();
    } else {
        cout << "Unable to open the file for writing\n";
        return 1;
    cout << "Username and password saved\n";
    break;
    }	
    case 2:
    {
    // Read username and password from file
    ifstream readfile("file.txt");
    if (readfile.is_open()) {
        getline(readfile, storedUsername);
        getline(readfile, storedPassword);
        readfile.close();
    } else {
        cout << "Unable to open the file for reading\n";
        return 1;
    }
	}
    // Compare input with stored values
    if (username == storedUsername && password == storedPassword) {
        cout << "Login Successful!";
    } else {
        cout << "Invalid login information";
    }
    
    return 0;
}

