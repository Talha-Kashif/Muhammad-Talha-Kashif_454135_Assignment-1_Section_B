#include<iostream>
using namespace std;

int main() {
	int X,elements;
	cout<<"Enter number of elements in array: ";
	cin>>elements;
	int num[elements-1];
	for(int i=0;i<elements;i++)
	{
		cout<<"Enter number for ["<<i<<"] place of array: ";
		cin>>num[i];
	}
	cout<<"Enter the value of the sum of 3 elements: ";
	cin>>X;
	for(int i=0;i<elements;i++)
	{
		for(int j=0;j<elements;j++)
		{
			for(int k=0;k<elements;k++)
			{
				if(num[i]+num[j]+num[k]==X)
				{
					if(num[i]<num[j])
					{
						if(num[j]<num[k])
						{
							cout<<"Triplet that adds up to "<<X<<" (without any repeating values) is: "<<num[i]<<" "<<num[j]<<" "<<num[k]<<endl;
						}
						else
						{
							continue;
						}
					}
					else
					{
						continue;
					}
				}
			}
		}
	}
	return 0;
}
