#include<iostream>
using namespace std;

int main() {
	int temp;
	int num[6];
	for(int i=0;i<6;i++)
	{
		cout<<"Enter number for ["<<i<<"] place of array: ";
		cin>>num[i];
	}
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(num[i]<num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
			else
			{
				continue;
			}
		}
	}
	cout<<"Array after bubble sort: ";
	for(int i=0;i<6;i++)
	{
		cout<<num[i]<<" ";
	}
	return 0;
}
