#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Enter number to check for even odd"<<endl;
	cin>>number;
	if(number%2==0){
		cout<<number<<" is an even number";
	}
	else{
		cout<<number<<" is odd number";
	}
	return 0;
}
