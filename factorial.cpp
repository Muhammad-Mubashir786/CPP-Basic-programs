// #include<iostream>
// using namespace std;
// int main()
// {
// 	int number, factorial=1;
// 	cout<<"enter a number to find factorial"<<endl;
// 	cin>>number;
// 	for(int i=number;i>0;i--)
// 	{

// 		factorial*=i;
// 	}
// 	cout<<"factorial of "<<number << " is "<<factorial<<endl;
// 	return 0;
// }
// // #include <iostream>
// using namespace std;

// int main()
// {
// 	int factorial = 1, number, i;
// 	cout << "Enter a number to find its factorial" << endl;
// 	cin >> number;
// 	while (number>0)
// 	{
// 		factorial*= number;
// 		number--;
// 	}
// 	cout << factorial;

// 	return 0;
// }
#include <iostream>
using namespace std;

int main()
{
	int number, factorial=1;
	cout << "Enter a number to find its facorial" << endl;
	cin>>number;
	for (int i = number; i > 0; i--)
	{
		factorial *= i;
	}
	cout << factorial;

}