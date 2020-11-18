#include<iostream>
using namespace std;
class billing
{
	int a;
	string b,c,d;
	public:void accept()
	{
		cout<<"Enter First name=";   
		cin>>b;         
		
		cout<<"Enter Last name=";
		cin>>c;
	
		cout<<"Enter city of a dealer=";  
		cin>>d;                          
		
		cout<<"Enter phone number= ";
		cin>>a;
	}
	  void display()
	  {
	  	cout<<"First name:"<<b;   cout<<"\t";  	cout<<"Last name:"<<c<<"\n";
	  	cout<<"City:"<<d;         cout<<"\t"; 	cout<<"Phone number:"<<a;
	  	
	  }
};
int main()
{
	billing b1;
	b1.accept();
	b1.display();
}
