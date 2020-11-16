#include<iostream>
using namespace std;
class inequality
{
	int num1,num2;
	public:void inequal()
	{
		cout<<"Enter first number=";
		cin>>num1;
		cout<<"Enter second number=";
		cin>>num2;
		if(num1!=num2)
		{
			cout<<"The entered numbers are not equal ";
		}
		else
		{
			cout<<"The entered number are same ";
		}
		
	}
};
int main()
{
	inequality n1;
	n1.inequal();
}
