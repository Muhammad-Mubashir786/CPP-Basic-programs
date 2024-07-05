#include <iostream>
using namespace std;

int main()
{
    int dayNumber;
    string dayName;
    cout << "Enter any day number from 1 to 7\n";
    cin >> dayNumber;
    for (int i = 0; i <= 0; i++)
    {
        if (dayNumber == 1)
        {
            cout << "Monday";
        }
        else if (dayNumber == 2)
        {
            cout << "Tuesday";
        }
        else if (dayNumber == 3)
        {
            cout << "Wednesday";
        }
        else if (dayNumber == 4)
        {
            cout << "Thursday";
        }
        else if (dayNumber == 5)
        {
            cout << "Friday";
        }
        else if (dayNumber == 6)
        {
            cout << "Saturday";
        }
        else if (dayNumber == 7)
        {
            cout << "Sunday";
        }
        else
        {
            cout << "Enter correct day number";
        }
    }

    return 0;
}