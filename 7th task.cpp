#include<iostream>
#include<string>
using namespace std;

int main() {
	string string,result;
	cout<<"Enter your string: ";
	cin>>string;
	int i,j;
	for(i=0;i<string.length();i++)
	{
		for(j=0;j<string.length();j++)
		{
			if(string[i]==string[j])
			{
				break;
			}
		}
		if(i==j)
		{
			result+=string[i];	
		}
	}
	cout<<"String after removal of duplicate characters: "<<result;
	return 0;
}
