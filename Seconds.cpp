#include<iostream>
#include<string.h>
using namespace std;

class Seconds{
	public :
		int ss;
		int hh;
		int mm;
		
};
int main()
{
	Seconds s;
	cout<<"Enter Senconds = ";
	cin>>s.ss;
	
	s.hh = s.ss / 3600;
	s.mm = (s.ss % 3600) / 60 ;
	s.ss = (s.ss % 3600) % 60 ;
	
	cout<<" "<<s.hh<<":"<<" "<<s.mm<<":"<<" "<<s.ss<<endl;
	
	return 0;
}
