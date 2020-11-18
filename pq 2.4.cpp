#include<iostream>
using namespace std;
class Employee

{
    
     string a;

     string b;

     float c;

     float d;

     string e;

     int f;

     public:

     void accept()

     {

     cout<<"Enter first name=";
     cin>>a;
     cout<<"Enter last name=";
     cin>>b;
     cout<<"Enter date of birth=";
     cin>>c;
     cout<<"Enter date of joining=";
     cin>>d;
     cout<<"Enter city name=";
     cin>>e;
     cout<<"Enter phone number=";
     cin>>f;
     

     }

     void display()

     {
         cout<<"First name="<<a<<"\n";
           cout<<"Last name="<<b<<"\n";
             cout<<"Date of birth="<<c<<"\n";
               cout<<"Date of joining="<<d<<"\n";
                 cout<<"city="<<e<<"\n";
                   cout<<"Phone number="<<f<<"\n";
     

     }

};
int main()
{
	Employee e1;
	e1.accept();
	e1.display();
	
}
