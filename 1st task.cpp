#include<iostream>
using namespace std;

int main() {
	int i,num,remainder;
	cout<<"Enter a number: ";
	cin>>num;
	cout<<"The factors of this number are:";
	for(i=1;i<=num;i++)
	{
		remainder=num%i;
		if(remainder==0)
		{
			cout<<" "<<i;
		}
	}
	return 0;
}
