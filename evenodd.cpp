#include<iostream>
using namespace std;
class evenodd
{
	int num1;
	public:void evenoandodd()
	{
		cout<<"Enter the number=";
		cin>>num1;
		if(num1%2==0)
		{
			cout<<num1<<"=is an Even number";
		}
		else
		{
			cout<<num1<<"=is an Odd number";
		}
	}
};
int main()
{
	evenodd n1;
	n1.evenoandodd();
}
