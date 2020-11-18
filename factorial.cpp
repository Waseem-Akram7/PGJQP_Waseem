#include<iostream>
using namespace std;
class number
{
	int i,num,fact=1;
	public:void factorial()
	{
		cout<<"Enter the number:";
		cin>>num;
		
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
		}
		cout<<"Factorial of a number is ="<<fact;
	}
};
int main()
{
	number n1;
	n1.factorial();
}
