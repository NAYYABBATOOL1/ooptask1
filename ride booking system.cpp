#include<iostream>
using namespace std;
//base class
class vehicle
{
	public:
		vehicle(string type)
		{
			cout<<"vehicle construction called"<<endl;
			cout<<"vehicle type:"<<type<<endl;
		}
};
//derived class1
class car:public vehicle
{
	public:
		car(string type,string model):vehicle(type)
		{
			cout<<"car constructor called"<<endl;
			cout<<"car mobel:"<<model<<endl;
		}
};
//derived class2
class electriccar:public car
{
	public:
		electriccar(string type,string model,int battery):car(type,model)
		{
			cout<<"electriccar constructor called"<<endl;
			cout<<"battery capacity:"<<battery<<"kwh"<<endl;
		}
};
int main()
{
	electriccar e1("electic vehicle","tesla model3",75);
	return 0;
}
