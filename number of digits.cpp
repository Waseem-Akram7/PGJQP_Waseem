#include<iostream>
using namespace std;
class number
{
	long int num,count=0;
	public:void digits()
	{
		cout<<"Enter the number=";
		cin>>num;
		
		while(num!=0)
		{
			num=num/10;
			count++;
		}
		cout<<"Number of digits:"<<count;
	}
};
int main()
{
	number n1;
	n1.digits();
}
