#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","r",stdin);
    #endif
    int n,div=2;
    cout<<"Enter a number to check if it is prime or not"<<endl;
    cin>>n;
    if (n<=1)
    {
        cout<<"Number is not prime";
    }
    return 0;
    
    while (div<n)
    {
        if (n% div == 0)
        {
            cout<<"Number is not prime";
            return 0;
        }
        div++;
    }
    cout<<"Number is prime";
    return 0;
}
