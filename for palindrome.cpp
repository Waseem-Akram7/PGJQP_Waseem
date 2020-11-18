#include<iostream>
using namespace std;
class number
{
	int n,num,rem,rev=0;
	public:void palindrome()
	{
		cout<<"Enter the number=";
		cin>>num;
		n=num;
		
		do
		{
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
			
		}
		
		while(num!=0);
			
		cout<<"reverse of a number is="<<rev<<"\n";
		if(n==rev)
		{
			cout<<"number is palindrome\n";
		}
		else
		{
			cout<<"number is not pallindrome\n";
		}
	}
};
int main()
{
	number n1;
	n1.palindrome();
}
