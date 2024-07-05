#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,3,5,6,8},search;
	bool found;
	cout<<"Enter a number to find in the array: "<<endl;
	cin>>search;
	for(int i=0;i<5;i++){
		if(search==arr[i]){
			found=1;
			cout<<"The number you entered is in the array at index "<<i<<endl;
			break;
		}
		
		}
	
        if(!found){
			cout<<"Number not in the array"<<endl;
		}
		return 0;
	}
