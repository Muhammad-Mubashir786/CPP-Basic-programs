#include <iostream>
using namespace std;

int main()
{
    int n[10], replace;
    cout << "Enter the arrays index" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> n[i];
    }
    cout << "Enter any number to search in array" << endl;
    cin >> replace;
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        if (n[i] == replace)
        {
            for (int j = i; j < 10 - 1; j++)
            {
                n[j] = n[j + 1];
                n[10 - 1] = 0;
                break;
            }
            cout<<"The number removed and zero added at the last index"<<endl;
            for (int i = 0; i < 10; i++)
            {
                cout << n[i] <<" ";
            }
        }
    }

    return 0;
}
