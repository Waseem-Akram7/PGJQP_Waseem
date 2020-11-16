#include<iostream>
using namespace std;
class swap_without
{
	int a,b;
	public:void swap()
	{
		cout<<"Enter first value="<<"\n";
		cin>>a;
		cout<<"Enter second value="<<"\n";
		cin>>b;
		cout<<"The values before swapping is="<<a<<"\t"<<b;
		
		a=a-b;
		b=a+b;
		a=b-a;
		
		cout<<"The values after swapping is="<<a<<"\t"<<b<<"\n";
	}
};
int main()
{
	swap_without s1;
	s1.swap();
	s1.swap();
}
