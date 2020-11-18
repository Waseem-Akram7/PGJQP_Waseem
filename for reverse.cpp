#include<iostream>
using namespace std;
class number
{
	int n,rev=0,rem;
	public:void reverse()
	{
		cout<<"Enter the number=";
		cin>>n;
		
		while(n!=0)
		{
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		cout<<"Reversed number ="<<rev;
	 } 
};
int main()
{
	number n1;
	n1.reverse();
}
