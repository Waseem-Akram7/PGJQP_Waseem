#include<iostream>
using namespace std;
class alphabetic
{
	char ch;
	public:void alpha()
	{
		cout<<"Enter the character=";
		cin>>ch;
		if((ch>=97 && ch<=122) || (ch>=65 && ch<=90))
		{
			cout<<"The entered character is alphabetic\n";
		}
		else
		{
			cout<<"The entered character is not alphabetic\n";
		}
	}
	
};
int main()
{
	alphabetic a1;
	a1.alpha();
	a1.alpha();
	a1.alpha();
	a1.alpha();
}
