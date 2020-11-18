#include<iostream>
using namespace std;
class number
{
	int i;
	public:void odd()
	{
		for(i=1;i<=200;i++)
		{
			if(i%2!=0)
			{
				cout<<i<<"\t";
			}
		}
	}
};
int main()
{
	number n1;
	n1.odd();
}
