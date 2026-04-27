#include<iostream>
using namespace std;
class person
{
    protected:
    string name;
    int age;
    public:
          void inputperson( ){
          	cout<<"enter name:";
          	cin>>name;
          	cout<<"enter age:";
          	cin>>age;
    }
    void displaypersoninfo(){
    	cout<<"name:"<<name<<endl;
    	cout<<"age:"<<age<<endl;
	}
};
class employee:public person
{	
   protected:
    int employeeid;
    public:
          void inputemployee(){
          	cout<<"enter employeeid:";
          	cin>>employeeid;
    }
    void displayemployeeinfo(){
    	cout<<"employeeid:"<<employeeid<<endl;
	}
};
class manager:public employee
{	
   private:
    string department;
    public:
          void inputmanager(){
          	cout<<"enter department:";
          	cin>>department;
    }
    void displaymanagerinfo(){
    	cout<<"department:"<<department<<endl;
	}
};
int main()
{
manager m;

 m.inputperson();
 m.inputemployee();
 m.inputmanager();
   cout<<"\nmanager information\n";
   m.displaypersoninfo();
   m.displayemployeeinfo();
   m.displaymanagerinfo();
   return 0;
}
    
