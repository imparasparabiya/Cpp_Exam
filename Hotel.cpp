#include<iostream>
#include<string.h>
using namespace std;
class Hotel{
	public :
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int rooms;
		int year;
		char add[100];
		int rating;
		char web[100];
		void set(int id, char name[], char type[], int staff_size, int room, int year, char add[], int rating, char web[])
		{
			this->id = id;
			strcpy(this->name,name);
			strcpy(this->type,type);
			this->staff_size = staff_size;
			this->rooms = rooms;
			this->year = year;
			strcpy(this->add,add);
			this->rating = rating;
			strcpy(this->web,web);
		}
		void get()
		{
			cout<<"id = "<<id<<endl
			    <<"Name = "<<name<<endl
			    <<"Veg or Non Veg = "<<type<<endl
			    <<"Staff Size = "<<staff_size<<endl
			    <<"Total Room's = "<<rooms<<endl
			    <<"Hotal Establish Year = "<<year<<endl
			    <<"Hotal Address = "<<add<<endl
			    <<"Hotal Rating (1 to 10) = "<<rating<<endl
			    <<"Hotal Web site = "<<web<<endl;
		}
};
int main()
{
   Hotel h;
   h.set(1,"Prince","Veg",100,500,1998,"Sarthana, Surat",10,"www.princehotel.in");
   h.get();	
}
