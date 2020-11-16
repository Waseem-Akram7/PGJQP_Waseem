#include<iostream>
using namespace std;
class cases
{
	char ch;
	public:void upperlowercase()
	{
		cout<<"Enter the character=";
		cin>>ch;
		
		if(ch>='A' && ch<='Z')
		{
			cout<<"The entered character is in uppercase\n";
		}
		else if(ch>='a' && ch<='z')
		{
			cout<<"The entered character is in lowercase\n";
		}
	}
};
int main()
{
	cases c1;
	c1.upperlowercase();
	c1.upperlowercase();
	c1.upperlowercase();
	c1.upperlowercase();
}
