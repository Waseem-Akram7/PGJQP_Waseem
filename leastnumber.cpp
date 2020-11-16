#include<iostream>
using namespace std;
class least
{
	int num1,num2,num3;
	public:void numbers()
	{
		cout<<"Enter three numbers=";
		cin>>num1>>num2>>num3;
		
		if(num1<num2 && num1<num3)
		{
			cout<<"num1 if lesser\n";
		}
		else if(num2<num1 && num2<num3)
		{
			cout<<"num2 is lesser\n";
		}
		else
		{
			cout<<"num3 is leaaer\n";
		}
	}
};
int main()
{
	least l1;
	l1.numbers();
	l1.numbers();
}
