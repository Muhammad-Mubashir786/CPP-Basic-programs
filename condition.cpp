#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    if (age < 18 && age > 0)
    {
        cout << "You are a kaka" << endl;
    }
    else if (age > 18)
    {
        cout << "You are a man" << endl;
    }
    else
    {
        cout << "you are namona" << endl;
    }
}