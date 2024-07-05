#include<iostream>
using namespace std;
int main(){
    //*******************Typecasting*********************
    int a=36;
    float b=36.45;
    cout<<"The value of a is "<<(float)a<<endl; //used to change the datatype
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of b is "<<float(b)<<endl;
    int c = (int)a;
    cout<<"The experisson is "<<a+b<<endl;
    cout<<"The experisson is "<<a+int(b)<<endl;
    cout<<"The experisson is "<<a+(int)b<<endl;
    return 0;



}