#include<iostream>
using namespace std;
int c=20;
int main(){
    int a,b,c;
    cout<<"Enter two values"<<endl;    
    cin>>a>>b;    
    c=a+b;
    cout<<"the sum is "<<c<<endl;    
    cout<<"the sum is "<<::c<<endl;
    return 0;    
}