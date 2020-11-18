#include<iostream>
using namespace std;
class number
{
	int count,n;
	public:void digits()
	{
		cout<<"Enter the numbers=";
		cin>>n;
		
		while(n!=0)
		{
			n=n/10;
			++count;
		}
		cout<<count;
	}
};
int main()
{
	number n1;
	n1.digits();
}

