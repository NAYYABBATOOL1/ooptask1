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
class student:public person
{
    private:
    int studentid;
    public:
          void inputstudent(){
          	cout<<"enter studentid:";
          	cin>>studentid;
    }
    void displaystudentinfo(){
    	cout<<"studentid:"<<studentid<<endl;
	}
};
int main()
{
 student s;
 s.inputperson();
 s.inputstudent();
   cout<<"\nstudent information\n";
   s.displaypersoninfo();
   s.displaystudentinfo();
   return 0;
}
    
