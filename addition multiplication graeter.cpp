#include<iostream>
using namespace std;
class add_mul
{
	int num1,num2;
	float addition,multiplication;
	public:void greater()
	{
		cout<<"Enter two numbers=";
		cin>>num1>>num2;
		
		addition=num1+num2;
		
		cout<<"Addition of two numbers is="<<addition<<"\n";
	
		multiplication=num1*num2;
		
		cout<<"Multiplication of two numbers is="<<multiplication<<"\n";
		
		if(addition>multiplication)
		{
			cout<<"Addition value is greater\n";
		}
		else
		{
			cout<<"Multiplication value is greater\n";
		}
		
		
	}
};
int main()
{
	add_mul a1;
	a1.greater();
}
