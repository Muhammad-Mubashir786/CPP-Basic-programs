#include<iostream>
using namespace std;
int main(){
	int a[10],b[10],c[20];
	cout<<"Enter numbers "<<endl;
	for(int i=0;i<10;i++){
		cout<<a[i];
	}
	cout<<"Enter numbers again "<<endl;
	for(int i=0;i<10;i++){
		cout<<b[i];
	}
	for(int i=0;i<10;i++){
		c[i]=a[i];
		c[i+10]=b[i];
	}
	cout<<"Combination: "<<endl;
	for(int i=0;i<20;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
