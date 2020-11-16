#include<iostream>
using namespace std;
class voandcons
{
	char c;
	public:void vowelsandconsonant()	
	
	{
		cout<<"Enter any alphabet=";
		cin>>c;
		cout<<"\n";
		
		switch(c)
		{
			case 'a':cout<<"Alphabet is an vowel\n";break;
			case 'e':cout<<"Alphabet is an vowel\n";break;
			case 'i':cout<<"Alphabet is an vowel\n";break;
			case 'o':cout<<"Alphabet is an vowel\n";break;
			case 'u':cout<<"Alphabet is an vowel\n";break;
			default:cout<<"Alphabet is a consonant\n";
			
		}
	}
};
int main()
{
	voandcons v1;
	v1.vowelsandconsonant();
	v1.vowelsandconsonant();
	v1.vowelsandconsonant();
	v1.vowelsandconsonant();
	v1.vowelsandconsonant();
}
