#include<iostream>
using namespace std;
class equality
{
	int num1,num2;
	public:void equal()
	{
		cout<<"Enter first number=";
		cin>>num1;
		cout<<"Enter second number=";
		cin>>num2;
		if(num1==num2)
		{
			cout<<"The entered numbers are equal or same";
		}
		else
		{
			cout<<"The entered number are not same ";
		}
		
	}
};
int main()
{
	equality n1;
	n1.equal();
}
