#include<iostream>
using namespace std;
class number
{
	int n,i;
	public:void table()
	{
		cout<<"Enter the number=";
		cin>>n;
		for(i=1;i<=10;++i)
		{
			cout<<n<<"*"<<i<<"="<<n*i<<"\n";
		}
	}
};
int main()
{
	number n1;
	n1.table();
}
