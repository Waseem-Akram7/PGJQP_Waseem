#include<iostream>
using namespace std;
class greateroftwo
{
	int num1,num2,num3;
	public:void number()
	{
		cout<<"Enter the numbers=";
		cin>>num1>>num2>>num3;
		if(num1>num2 && num1>num3)
		{
			cout<<"NUM1 is greater";
		}
		else if(num2>num1 && num2>num3)
		{
			cout<<"NUM2 IS greater";
		}
		else
		{
			cout<<"Num3 is greater";
		}
		
	}
};
int main()
{
	greateroftwo num;
	num.number();
}
