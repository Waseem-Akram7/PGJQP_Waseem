#include<iostream>
using namespace std;
class voting
{
	int num1;
	public:void vote()
	{
		cout<<"Enter the number=";
		cin>>num1;
	
	  if(num1>=18)
	{
		cout<<"eligible for voting";
	}
	else
	{
		cout<<"not eligible for voting";
	}
}
};
int main()
{
	voting n1;
	n1.vote();
}
