#include<iostream>
#include<string.h>
using namespace std;
class Prince{
	public :
		int a,b,c;
		void print()
		{
			cout<<"Member Function"<<endl;
		}
		void print(int a)
		{
			cout<<"A = "<<a<<endl;
		}
		void print(int a, int b)
		{
			cout<<"A + B = "<<a+b<<endl;
		}
		void print(int a, int b, int c)
		{
			cout<<"A + B + C = "<<a+b+c<<endl;
		}		
};
int main()
{
	Prince p;
	p.print();
	p.print(10);
	p.print(10,20);
	p.print(10,20,30);
}
