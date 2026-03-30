#include<iostream>
#include<string>
using namespace std;
class temperature
{
	public:
	float celsius;
	
	float convert()
	{
		return (celsius*9/5)+32;
	}
	void display()
	{
		cout<<"temperature in fahrenheit:"<<convert()<<endl;
	}
};
int main()
{
	temperature t;
	
	cout<<"enter temperature in celsius;";
	cin>>t.celsius;
	
	t.display();
	return 0;
}
