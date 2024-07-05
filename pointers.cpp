// #include<iostream>
// using namespace std;
// void ptr(int x,int *p){
//     *p=2*x;
// }
// int main(){
//     // int a=34;
//     // int *b=NULL;
//     // b=&a;
//     // cout<<&a<<endl<<*b<<endl<<b<<endl;
//     // *b=20;
//     // cout<<a;

// // Define the size of the array
// // int a,b;
// // int *ptr;
// // ptr=&a;
// // *ptr=10;
// // ptr=&b;
// // *ptr=20;
// // cout<<"a "<<a<<endl<<"b "<<b<<endl<<ptr;

// //***************************************************/

//     // int a=5,b=15;
//     // int *p1,*p2;
//     // p1=&a;
//     // p2=&b;
//     // *p1=10; //dereferencing pointer
//     // *p2=*p1;
//     // p1=p2;
//     // *p1=20;
//     // cout<<a<<endl<<b<<endl<<*p1<<endl<<p1;

//     //*************************************
//     // int a=16;
//     // ptr(9, &a);
//     // cout<<a;

//     //********pointer to pointer\**************** */
//     // int a;
//     // int *p=&a;
//     // int **q=&p;
//     // cin>>*p;
//     // cout<<a<<endl<<*p<<endl<<**q<<endl;

// //*******************` */
//     int a=32,b;
//     int *p;
//     p=&a;
//     b=*p;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<*p<<endl;
//     cout<<p<<endl;

#include <iostream>
using namespace std;

int main()
{
    int a=5,b=6,*p=&a,*d=&b;
    cout<<"The product of "<<a<<" and "<<b<<" is: "<<*p**d;
    // int a = 3,**c;
    // int *p = &a;
    // cout << &a << endl;
    // cout << p<<endl;
    // cout<<*p<<endl;
    // cout<<*c<<endl;
    // cout<<**c;
    // int array[5] = {3, 4, 2, 5, 3};
    // int *p = array;
    // cout<<*p<<endl;
    // cout << *(p++) << endl;
    // cout<<*p<<endl;
    // cout << *(++p);
    // cout<<*(p+1)<<endl;
    // cout<<*(p+2)<<endl;
    // cout<<*(p+3)<<endl;
    // cout<<*(p+4)<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<array[i]<<endl;
    // }
    
}