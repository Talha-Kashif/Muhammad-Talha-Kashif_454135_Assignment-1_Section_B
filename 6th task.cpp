#include<iostream>
using namespace std;

int main() {
	int dividend,divisor,remainder,quotient,result;
	cout<<"Enter dividend: ";
	cin>>dividend;
	cout<<"Enter divisor: ";
	cin>>divisor;
	quotient=0;
	remainder=0;
	for(int i=dividend;i>0;i-=divisor)
	{
		if(divisor==0)
		{
			cout<<"Math Error";
			break;
		}
		else
		{
			if(dividend>divisor)
			{
			    dividend-=divisor;
			    quotient++;
		    }
		    else
		    {
		    	break;
			}
		}
	}
	cout<<"Division result= "<<quotient<<endl;
	remainder=dividend%divisor;
	cout<<"Remainder= "<<remainder<<endl;
	cout<<"Division verified using the division formula:- \nDividend = (Quotient * Divisor) + Remainder"<<endl;
	result=(quotient*divisor)+remainder;
	cout<<"Dividend = ("<<quotient<<" * "<<divisor<<") + "<<remainder<<endl;
	cout<<"Dividend = "<<result;
	return 0;
}
