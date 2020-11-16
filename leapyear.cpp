#include<iostream>
using namespace std;
class leapyear
{
	int year;
	public:void years()
	{
		cout<<"Enter a year=";
		cin>>year;
		
		if(year%4==0)
	{
		   cout<<"Entered year is leap year\n";
	}
	else 
	{
		cout<<"Entered year is not a leap year\n";
	}
}
		
};
	

int main()
{
	leapyear y1;
	y1.years();
	y1.years();
	y1.years();
	y1.years();
}
