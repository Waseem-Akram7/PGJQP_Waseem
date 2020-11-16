#include<iostream>
using namespace std;
class greateroftwo
{
	int num1,num2;
	public:void number()
	{
		cout<<"Enter the numbers";
		cin>>num1>>num2;
		if(num1>num2)
		{
			cout<<"NUM1 is greater";
		}
		else
		{
			cout<<"Num2 is greater";
		}
		
	}
};
int main()
{
	greateroftwo num;
	num.number();
}
