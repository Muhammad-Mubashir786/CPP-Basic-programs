// used to jump from one location to another
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
b:
    if (a<=10)
    {
        a++;
        goto b;
    }
    
    
    return 0;
}