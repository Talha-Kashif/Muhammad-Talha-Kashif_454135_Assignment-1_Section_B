#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter number of elements to be added: ";
	cin>>n;
	int a[5+n]={1,2,3,4,5};
	for(int i=0;i<n;i++)
	{
		cout<<"Enter number for ["<<5+i<<"] place of array: ";
		cin>>a[5+i];
	}
	cout<<"\nNew array: ";
	for(int i=0;i<5+n;i++)
	{
		cout<<a[i]<<" ";
	}
return 0;
}
