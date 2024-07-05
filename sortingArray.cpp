#include<iostream>
using namespace std;
void sortArray(int arr[],int size){
	int sort=arr[0];
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main(){
	int arr[5]={2,5,8,4,9};
	sortArray(arr,5);
	cout<<"After sorting array in asending order "<<endl;
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

