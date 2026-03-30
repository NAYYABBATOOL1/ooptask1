#include<iostream>
using namespace std;
class calculator
{
	public:
		float num1;
		float num2;
		
		float add()
		{
			return num1+num2;
		}
		float subtract()
		{
			return num1-num2;
		}
		float multiply()
		{
			return num1*num2;
		}
		float divide()
		{
			return num1/num2;
		}
};
int main()
{
	calculator c;
	int choice;
	
	cout<<"enter first num:";
	cin>>c.num1;
	
	cout<<"enter second num:";
	cin>>c.num2;
	
	cout<<"1.add\n2.subtract\n3.multipy\n4.divide\n";
	cout<<"choose operation:";
	cin>>choice;
	if(choice==1)
	 cout<<"result:"<<c.add();
	else if(choice==2)
	 cout<<"result:"<<c.subtract();
	else if(choice==3)
	 cout<<"result:"<<c.multiply();
	else if(choice==4)
	 cout<<"result:"<<c.divide();
	 
	return 0;
	}
