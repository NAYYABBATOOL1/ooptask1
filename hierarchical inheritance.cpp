#include<iostream>
#include<string>
using namespace std;
class employee
{
    protected:
    string name;
    double salary;
    public:
          void inputemployee( ){
          	cout<<"enter name:";
          	cin>>name;
          	cout<<"enter salary:";
          	cin>>salary;
    }
    void displayemployeeinfo(){
    	cout<<"name:"<<name<<endl;
    	cout<<"salary:"<<salary<<endl;
	}
};
class developer:public employee
{	
   private:
    string programminglanguage;
    public:
          void inputdeveloper(){
          	cout<<"enter programminglanguage:";
          	cin>>programminglanguage;
    }
    void displaydeveloperinfo(){
    	cout<<"programminglanguage:"<<programminglanguage<<endl;
	}
};
class designer:public employee
{	
   private:
    string designtool;
    public:
          void inputdesigner(){
          	cout<<"enter designtool:";
          	cin>>designtool;
    }
    void displaydesignerinfo(){
    	cout<<"designtool:"<<designtool<<endl;
	}
};
int main()
{
developer d;
designer ds;
 cout<<"\ndeveloper information\n";
 d.inputemployee();
 d.inputdeveloper();
   cout<<"\ndesigner information\n";
   ds.inputemployee();
   ds.inputdesigner();
   
   ds.displayemployeeinfo();
   ds.displaydesignerinfo();
    cout<<"\ndeveloper details\n";
     d.displayemployeeinfo();
     d.displaydeveloperinfo();
     cout<<"\ndesigner details\n";
      ds.displaydesignerinfo();
   return 0;
}
    
