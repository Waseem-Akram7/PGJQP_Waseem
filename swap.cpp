#include<iostream>
using namespace std;
class swapping
{
	int a,b,temp;
	public:void swap()
	{
		cout<<"Enter the first number\n";
		cin>>a;
		cout<<"Enter the second number\n";
		cin>>b;
		
		cout<<"the numbers before swapping "<<a<<"\t"<<b<<"\n";
		
		temp=a;
		a=b;
		b=temp;
	    cout<<"the numbers after swapping "<<a<<"\t"<<b<<"\n";
	}
};
int main()
{
	swapping s1;
	s1.swap();
}
