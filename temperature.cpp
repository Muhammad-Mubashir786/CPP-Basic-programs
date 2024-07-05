#include<iostream>
using namespace std;
int main(){
	int temp[2][7];
	cout<<"Enter the temperature"<<endl;
	for(int i=0;i<2;i++){
		cout << "City " << i + 1 << ":" << endl;
		for(int j=0;j<7;j++){
			cout << "Day " << j + 1 << ": " << endl;
			cin>>temp[i][j];
		}
	}
	cout<<"The temperatures are"<<endl;
	for(int i=0;i<2;i++){
		cout << "*****************City " << i + 1 << ":" << endl;
		for(int j=0;j<7;j++){
			cout << "Day " << j + 1 << ": " << temp[i][j] << endl;
		}
	}
	return 0;
}
