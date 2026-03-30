#include<iostream>
#include<string>
using namespace std;
struct student
{
	string first_name;
	string last_name;
	int roll_number;
	float marks;
	void displaystudentinfo()
	{
		cout<<"first_name"<<""<<"last_name"<<endl;
		cout<<"enter roll_number:"<<roll_number<<endl;
		cout<<"enter marks:"<<marks<<endl;
	}
};
int main()
{
	student s[5];
	for(int i=0;i<5;i++)
	{
		cout<<"enter data for student"<<i+1<<endl;
		cout<<"first_name:";
		cin>>s[i].first_name;
		cout<<"last_name:";
		cin>>s[i].last_name;
		cout<<"roll_number:";
		cin>>s[i].roll_number;
		cout<<"marks:";
		cin>>s[i].marks;
		cout<<endl;
	}
	cout<<"\n student infomation\n";
	for(int i=0;i<5;i++)
	{
		s[i].displaystudentinfo();
	}
	return 0;
}
