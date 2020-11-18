#include<iostream>
using namespace std;
class power
{
	int base,result,pow;
	public:void base_expo()
	{
		cout<<"Enter base and exponent";
		cin>>base;
		
		cout<<base<<"^"<<pow;
		
		while(base!=0)
		{
			result = pow(base);
		}
		cout<<result;
	}
};
int main()
{
	power p1;
	p1.base_expo();
}
