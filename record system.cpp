#include<iostream>
#include<string>
using namespace std;
class student
{
	public:
	string name;
	int roll_number;
	float marks;
	void getdata()
	{
		cout<<"enter name";
		cin>>name;
		cout<<"enter roll_number";
		cin>>roll_number;
		cout<<"enter marks";
		cin>>marks;
	}
	void displaydata()
	{
		cout<<"student information";
		cout<<"name:"<<name<<endl;
		cout<<"roll_number:"<<roll_number<<endl;
		cout<<"marks:"<<marks<<endl;
	}
};
int main()
{
	student s1;
	s1.getdata();
	s1.displaydata();
	return 0;
}
