#include<iostream>
#include<string.h>
using namespace std;
class A{
	public :
	 int id;
	 char name[100];	
	 char roll[100];
	 char salary[10];
	 int exp;
	 char cmp_name[50];
	 char add[100];
	 char email[50];
	 char contact[10];
	  void setter()
	  {
	  	cout<<"Enter Emp Id = ";
	  	cin>>id;
	  	cout<<"Enter Emp Name = ";
	  	cin>>name;
	  	cout<<"Enter Emp Post = ";
	  	cin>>roll;
	  }
};
class B : public A{
	   public :
	   	void setter()
	   	{
	   		cout<<"Enter Emp Salary = ";
	  		cin>>salary;
	  		cout<<"Enter Emp Experience = ";
	  		cin>>exp;
		}
};	
class C : public B{
	   public :
	   	void setter()
	   	{
	   		cout<<"Enter Emp Compny name = ";
	  		cin>>cmp_name;
	  		cout<<"Enter Emp Address = ";
	  		cin>>add;
		}
		void getter()
		{
			cout<<"Emp Name = "<<name<<endl
			    <<"Emp Post = "<<roll<<endl
			    <<"Emp Salary = "<<salary<<endl;
		}		
};
class D : public C{
	   public :
	   	void setter()
	   	{
	   		cout<<"Enter Emp Email = ";
	  		cin>>email;
	  		cout<<"Enter Emp Contact = ";
	  		cin>>contact;		
		}
		void getter()
		{
			cout<<"Emp ID = "<<id<<endl
				<<"Emp Name = "<<name<<endl
			    <<"Emp Post = "<<roll<<endl
			    <<"Emp Salary = "<<salary<<endl
				<<"Emp Experince = "<<exp<<endl
				<<"Emp Compny Name = "<<cmp_name<<endl
				<<"Emp Address = "<<add<<endl
				<<"Emp Email Id = "<<email<<endl
				<<"Emp Contact no. = "<<contact<<endl;
		}	
};
int main()
{
	D p;
	p.A::setter();
	p.B::setter();
	p.C::setter();
	p.D::setter();
	p.D::getter();

	
}
