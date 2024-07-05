#include<iostream>
using namespace std;

int main(){
    int sum=0,arr[5]={23,54,5,34,34};
     for (int i = 0; i < 5; i++)
     {
         cout<<"The value of "<<i<<" is "<<arr[i]<<endl;
     }
    for(int i=0;i<5;i++){
    	sum+=arr[i];
	}
     cout<<"sum of array "<<sum<<endl;
   
    return 0;
}
