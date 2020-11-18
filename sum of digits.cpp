#include <iostream>  
using namespace std;  
class number
{  

int n,sum=0,m; 
public:void digits()
{
	
     
cout<<"Enter a number: ";    
cin>>n; 
   
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}
cout<<"Sum is= "<<sum<<endl; 
}
};
int main()
{
	number n1;
	n1.digits();
}
