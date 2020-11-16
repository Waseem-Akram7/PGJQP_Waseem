#include<iostream>
using namespace std;
class addition
{
	int num1,num2;
	float sum;
	public:void greater()
	{
		cout<<"Enter two numbers=";
		cin>>num1 >>num2 ;
		
		sum=num1+num2;
		
		cout<<"The sum is="<<sum<<"\n";
	
		
		if(sum>100)
		{
			cout<<"The sum is greater than 100\n";
		}
		else
		{
			cout<<"The sum is lesser than 100\n";
		}
	}
};
int main()
{
	addition a1;
	a1.greater();
	a1.greater();
}
