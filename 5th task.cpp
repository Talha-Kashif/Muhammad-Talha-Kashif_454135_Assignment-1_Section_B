#include<iostream>
#include<string>
using namespace std;

int main() {
	string string1,string2;
	cout<<"Enter first string: ";
	cin>>string1;
	cout<<"Enter second string: ";
	cin>>string2;
	for(int i=0;i<string1.length();i++)
	{
		if(string1[i]!=string2[i])
		{
			cout<<string1[i]<<" "<<string2[i]<<endl;
			cout<<"Strings not equal";
			break; 
		}
		else
		{
			string2[i]=string1[string1.length()-1-i];
		}
		cout<<string2[i];
	}
	return 0;
}
