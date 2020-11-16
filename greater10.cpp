#include<iostream>
using namespace std;
class average
{
	int num1,num2,num3,num4,num5;
	float sum,average;
	public:void greater()
	{
		cout<<"Enter five numbers=";
		cin>>num1 >>num2 >>num3 >>num4 >>num5;
		
		sum=num1+num2+num3+num4+num5;
		
		cout<<"The sum is="<<sum<<"\n";
		
		average=sum/5;
		
		cout<<"The average is="<<average<<"\n";
		
		if(average>10)
		{
			cout<<"The average is greater than 10\n";
		}
		else
		{
			cout<<"The average is lesser than 10\n";
		}
	}
};
int main()
{
	average a1;
	a1.greater();
	a1.greater();
}
