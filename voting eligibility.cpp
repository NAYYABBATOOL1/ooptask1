#include<iostream>
#include<string>
using namespace std;
class voter
{
	public:
	string name;
	int age;
	bool iseligible();
};
	bool voter::iseligible()
	{
		if(age>=18)
		 return true;
		else
		 return false;
	}
	int main()
{
     voter v;
		cout<<"enter name:";
		cin>>v.name;
		cout<<"enter age:";
		cin>>v.age;
		
		if(v.iseligible())
		 cout<<"you are eligible to vote"<<endl;
		else
		 cout<<"you are not eligible to vote"<<endl;
		 
		 return 0;
}
