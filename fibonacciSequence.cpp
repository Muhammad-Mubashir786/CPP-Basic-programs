#include <iostream>
using namespace std;
int main()
{
	int number, i=0,j=1,next;
	cout<<"enter a number to find its next sequence"<<endl;
	cin>>number;
	 cout << "next sequence till " << number << " is: ";
	while(i<=number)
	{
	cout<<i<<" ";
	next=i+j;
	i=j;
	j=next;
	}
	cout<<endl;
	return 0;
}
// #include <iostream>
// using namespace std;

// int main()
// {
// 	int number, a = 0, b = 1, nextnumber;
// 	cin>>number;
// 	for (int i = 0; i <= number; i++)
// 	{
// 		cout << a << " ";
// 		nextnumber = a + b;
// 		a = b;
// 		b = nextnumber;
// 	}
// 	cout << endl;

// 	return 0;
// }