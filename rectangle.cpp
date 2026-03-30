#include<iostream>
using namespace std;
class rectangle
{
	public:
		int length;
		int width;
		void setdimenions();
		int area();
		int perimeter();
};
void rectangle::setdimenions()
{
	cout<<"enter length:";
	cin>>length;
	cout<<"enter width:";
	cin>>width;
}
int rectangle::area()
{
	return length*width;
}
int rectangle::perimeter()
{
	return 2*(length*width);
}
int main()
{
	rectangle r;
	r.setdimenions();
	cout<<"area:"<<r.area()<<endl;
	cout<<"perimeter:"<<r.perimeter()<<endl;
	return 0;
	}
