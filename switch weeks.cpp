#include<iostream>
using namespace std;
class days
{
	int n;
	public:void weeks()
	{
		cout<<"Enter number for day=";
		cin>>n;
		switch(n)
		{
			case 1:cout<<"sunday\n";break;
			case 2:cout<<"monday\n";break;
			case 3:cout<<"tuesday\n";break;
			case 4:cout<<"wednesday\n";break;
			case 5:cout<<"thursday\n";break;
			case 6:cout<<"friday\n";break;
			case 7:cout<<"saturday\n";break;
			default:cout<<"Invalid number\n";
			
		}
	}
	
};
int main()
{
	days d1;
	d1.weeks();
	d1.weeks();
	d1.weeks();
	d1.weeks();
}
