#include<iostream>
using namespace std;
class greaternumber
{
	int num1;
	public:void greter()
	{
		cout<<"Enter the number";
		cin>>num1;
	if(num1>10)
	{
		cout<<"The entered number is greater than 10";
	}
	else
	{
		cout<<"The entered number is less than 10";
	}
}
};
int main()
{
	greaternumber n1;
	n1.greter();
}
