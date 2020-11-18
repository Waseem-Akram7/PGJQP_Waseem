#include<iostream>
using namespace std;
class number
{
	int a,b,i,j,flag;
	public:void primenumber()
	{
		cout<<"Enter lower number";
		cin>>a;
		
		cout<<"Enter upper number";
		cin>>b;
		
		cout<<"the prime number between range"<<a<<"\t"<<b;
	}
	for(i=a;i<=b;i++)
	{
		if(i==1 || i==0)
		  continue;
		  flag=1;
		  
		  for(j=2;j<=i/2;j++)
		  {
		  	if(i%j==0)
		  	{
		  		flag=0;
		  		break;
			  }
		  }
		  if(flag==1)
		  {
		  	cout<<i<<" ";
		  }
		  return 0;
	
		
	}
};
int main()
{
	number n1;
	n1.primenumber();
}
