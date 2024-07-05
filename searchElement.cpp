#include<iostream>
using namespace std;
int searchElement(int arr[],int size,int element){
	for(int i=0;i<size;i++){
		if(arr[i]==element){
			return i;
		}
	}
	return -1;
}
int main(){
	int find,arr[5]={2,4,6,3,7},search;
	cout<<"Enter a number to find in the array "<<endl;
	cin>>find;
	search=searchElement(arr,5,find);
	if(search !=-1){
	cout<<"The number "<<find<<" is in the array at index "<<search<<endl;
	}
	else{
		cout<<"The number "<<find<<" not in the array"<<endl;
	}
	
}
