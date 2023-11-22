#include<iostream>
using namespace std;

int main() {
    int N,i,r;
    cout<<"Enter a number: ";
    cin>>N;
    r=N-1;
    while(r>=2)
    {
        i=2;
        while(i<r)
        {
            if(r%i==0)
            {
            break;
            }
            i++;
        }
        if(i==r)
        {
            cout<<"The greatest prime number less than or equal to "<<N<<" is "<<r<<endl;
            return 0;
        }
        r--;
    }
    cout<<"There is no prime number less than or equal to "<<N;
	return 0;
}
