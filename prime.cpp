#include<iostream>
using namespace std;
class number
{
	int i,m=0,num,flag=0;
	public:void primenumber()
	{
		cout<<"Enter the number=";
		cin>>num;
		
		m=num/2;
		for(i=2;i<=m;i++)
		{
			if(num%i==0)
			{
				cout<<"Entered number is not prime number";
				
				flag==1;
				break;
			}
		}
			if(flag==0)
			{
				cout<<"Entered number is prime number"<<endl;
			
				
			}
			
			
		}
	};
	

int main()
{
	number n1;
	n1.primenumber();
}
