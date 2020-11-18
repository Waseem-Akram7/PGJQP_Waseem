#include<iostream>
using namespace std;
class alphabet
{
	char c;
	public:void alphabets()
	{
		cout<<"Alphabets from A-Z are:"<<"\n";
	
		
		for(c='A';c<='Z';c++)
		{
			cout<<c<<"\t";
		}
	}
};
int main()
{
	alphabet a1;
	a1.alphabets();
}
