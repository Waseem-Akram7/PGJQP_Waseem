#include<iostream>
using namespace std;
class number
{
	int i,sum=0;
	public:void adding()
	{
		
		for(i=1;i<=10;i++)
		{
		    sum=sum+i;
			
		}
		cout<<sum<<"\t";
	}
};
int main()
{
	number n1;
	n1.adding();
}
