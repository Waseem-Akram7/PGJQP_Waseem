#include<iostream>
using namespace std;
class vowandcons
{
	int isuppercasevowel,islowercasevowel,consonant;
	char c;
	public:void vowelsandconsonants()
	{
		cout<<"Enter an alphabet=";
		cin>>c;
		int isuppercasevowel=(c=='A' || c=='E' || c=='I' || c=='0' || c=='U');
		int islowercasevowel=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
		
		if(isuppercasevowel)
		{
			cout<<"Entered alphabet is in uppercase\n";
		}
		else if(islowercasevowel)
		{
			cout<<"Entered alphabet is in lowercase\n";
		}
		else
		{
			cout<<"Entered alphabet is consonant\n";
		}
	}
};
int main()
{
	vowandcons n1;
	n1.vowelsandconsonants();
	n1.vowelsandconsonants();
	n1.vowelsandconsonants();
	n1.vowelsandconsonants();
	
}
