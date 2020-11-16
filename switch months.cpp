#include<iostream>
using namespace std;
class year
{
	int n;
	public:void months()
	{
		cout<<"Enter number for month=";
		cin>>n;
		switch(n)
		{
			case 1:cout<<"january\n";break;
			case 2:cout<<"february\n";break;
			case 3:cout<<"march\n";break;
			case 4:cout<<"april\n";break;
			case 5:cout<<"may\n";break;
			case 6:cout<<"june\n";break;
			case 7:cout<<"july\n";break;
			case 8:cout<<"august\n";break;
			case 9:cout<<"september\n";break;
			case 10:cout<<"october\n";break;
			case 11:cout<<"november\n";break;
			case 12:cout<<"december\n";break;
			default:cout<<"Invalid number\n";
			
		}
	}
	
};
int main()
{
	year d1;
	d1.months();
	d1.months();
	d1.months();
	d1.months();
}
