#include<iostream>
using namespace std;
class divisible
{
	int num1;
	public:void division()
	{
		cout<<"Enter the number=";
		cin>>num1;
		
		if(num1%9==0)
		{
			cout<<"The entered number is divisible by 9\n";
		}
		else
		{
			cout<<"The entered number is not divisible by 9\n";
		}
	}
	
};
int main()
{
	divisible d1;
	d1.division();
	d1.division();
}
