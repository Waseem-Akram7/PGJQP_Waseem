 #include<iostream>
 using namespace std;
 class details
 {
 	int num;
 	string name;
 	long int a=12345;int x=56789; 	    
 	string b="Bangalore";string y="Delhi";
 	int c=12/12/2020;int z=4/7/2020;
 	public:void booking()
 	{
 		cout<<"Enter the name of passenger=";
 		cin>>name;
 		cout<<"Enter passport number=";
 		cin>>num;
	 }
	 public:void accept()
	 {
	   	  cout<<"Flight Number="<<x<<"\n";
	   	  cout<<"Destination="<<y<<"\n";
	   	  cout<<"Date of Flight="<<z<<"\n";
	 }
	 
	 public:void display()
	 {
	 	cout<<"Flight Number="<<a<<"\n";
	 	cout<<"Destination="<<b<<"\n";
	 	cout<<"Date of Flight="<<c<<"\n";
	 }
	 
	 
 };
 int main()
 {
 	details d1;
 	d1.booking();
 	d1.accept();
 	d1.display();
 	d1.booking();
 	d1.accept();
 	d1.display();
 }
 
