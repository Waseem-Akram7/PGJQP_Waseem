#include<iostream>
using namespace std;
class number
{
	int i;
	public:void even()
	{
		for(i=1;i<=20;i++)
		{
			if(i%2==0)
			{
				cout<<i<<"\t";
			}
		}
	}
};
int main()
{
	number n1;
	n1.even();
}
