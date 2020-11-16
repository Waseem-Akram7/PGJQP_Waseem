#include<iostream>
using namespace std;
class calculator
{
	int num1,num2,choice;
	public:void calc()
	{
		cout<<"Enter two numbers=";
		cin>>num1>>num2;
		cout<<"Enter choice\n";
		cin>>choice;
		
		switch(choice)
		{
			case 1: cout<<"addition of number is="<<num1+num2<<"\n";break;
			case 2: cout<<"subtraction of number is="<<num1-num2<<"\n";break;
			case 3: cout<<"multiplication of number is="<<num1*num2<<"\n";break;
			case 4: cout<<"division of number is="<<num1/num2<<"\n";break;
			default:cout<<"invalid choice";
		}
	}
};
int main()
{
	calculator c1;
	c1.calc();
	c1.calc();
	c1.calc();
	c1.calc();
}
