#include<iostream>
using namespace std;
class number
{
	int count;
	public:void onetoten()
	{
		for(count=10;count>=1;count--)
		{
			cout<<count<<"\t";
		}
	}
};
int main()
{
	number n1;
	n1.onetoten();
}

