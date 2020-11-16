#include<iostream>
using namespace std;
class student
{
	int marks;
	public:void grades()
	{
		cout<<"Enter the marks=";
		cin>>marks;
		
		if(marks>=90)
		{
			cout<<"Grade A\n";
		}
		else if(marks>=80 && marks<90)
		{
			cout<<"Grade B\n";
		}
		else if(marks>=60 && marks<80)
		{
			cout<<"Grade C\n";
		}
		else if(marks>=45 && marks<60)
		{
			cout<<"Grade D\n";
		}
		else 
		{
			cout<<"Fail\n";
		}
	}
	
};
int main()
{
	student s1;
	s1.grades();
	s1.grades();
}
