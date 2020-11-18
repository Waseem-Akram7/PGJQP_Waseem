#include<iostream>
using namespace std;
class number
{
	int num,rem,result=0,n;
	public:void armstrong()
	{
		cout<<"Enter the number=";
		cin>>num;
		n=num;
		
		while(num!=0)
		{
			rem=num%10;
			result=result+rem*rem*rem;
			num=num/10;
			
		}
		if(result==n)
		{
			cout<<"number is armstrong\n";
		}
		else
		{
			cout<<"number is not armstrong";
		}
	}
};
int main()
{
	number n1;
	n1.armstrong();
}
