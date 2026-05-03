#include<iostream>
using namespace std;
//base class
class product
{
	protected:
		string name;
		double price;
	public:
		product(string n,double p)
		{
			name=n;
			price=p;
			cout<<"product construction called"<<endl;
		}
		void displayproduct(){
		cout<<"product name:"<<name<<endl;	
		cout<<"price:"<<price<<endl;
		}
};
//derived class1
class electronics:public product
{
	private:
		int warrantyyears;
	public:
		electronics(string n,double p,int w):product(n,p)
		{
			warrantyyears=w;
			cout<<"electronics constructor called"<<endl;
		}
		void displayelectronics()
		{
			displayproduct();
				cout<<"warrantyyears:"<<warrantyyears<<endl;	
		}
};
int main()
{
	electronics e1("laptop",85000,2);
	cout<<"\nproduct detail:\n";
	e1.displayelectronics();
	return 0;
}
