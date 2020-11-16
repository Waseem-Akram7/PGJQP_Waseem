#include<iostream>
using namespace std;
class check
{
	int num1;
	public:void positive_negative()
	{
		cout<<"Enter the number\n";
		cin>>num1;
		
		if(num1>0)
		{
			cout<<"ENTERED NUMBER IS POSITIVE\n";
		}
		else if(num1<0)
		{
			cout<<"ENTERED NUMBER IS NEGATIVE\n";
		}
		else
		{
			cout<<"ENTERED NUMBER IS EQUAL TO ZERO\n";
		}
	}
};
int main()
{
	check pn;
	pn.positive_negative();
	pn.positive_negative();
	pn.positive_negative();
}
