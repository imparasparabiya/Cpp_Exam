#include<iostream>
#include<string.h>
using namespace std;

class Distance{
	public:
	int feet;
	int inch;
	int tf;
	int ti;
	
};
int main()
{
	Distance d,d1,total;
	cout<<"Enter Feet = ";
	cin>>d.feet;
	cout<<"Enter Inch = ";
	cin>>d.inch;
	cout<<"Enter Feet = ";
	cin>>d1.feet;
	cout<<"Enter Inch = ";
	cin>>d1.inch;
	
	total.tf = d.feet + d1.feet;
	total.ti = d.inch + d1.inch;
	
	while(total.ti >= 12)
	{
		total.tf++;
		total.ti -=12;
	}
	cout<<"Total Feet = "<<total.tf<<endl
	    <<"Total Inch = "<<total.ti<<endl;
	return 0;
}
