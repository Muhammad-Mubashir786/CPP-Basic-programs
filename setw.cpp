#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 123, b = 3, c = 32;
    cout<<"********without setw************"<<endl;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;
    cout<<"************setw************"<<endl;
    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;

    // cout << "*****************operator presedence**************" << endl;
    // // bodemas rule
    // int a = 43, b = 53;
    // int c = (((a / b) * a * b) - 234) + 321;
    // cout << c;
    // return 0;
}
