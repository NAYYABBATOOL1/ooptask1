#include<iostream>
using namespace std;
class rectangle
{
    private:
    float length;
    float width;
    public:
    //default constructor
    rectangle(){
    	length=1.0;
    	width=1.0;
	}
    //parameterized constructor
    rectangle(float l,float w){
        length=l;
        width=w;
    }
    //singleparameterized constructor
    rectangle(float s){
    	length =s;
    	width =s;
    }
    float area(){
    	return length*width;
	}
    void display(){
cout<<"length:"<<length<<","<<"width:"<<width<<endl;
}
};
int main()
{
    rectangle r1;//default constructor
    rectangle r2(5,3);//parameterized constructor
    rectangle r3(4);//single parameterized
    
    r1.display();
    r2.display();
    r3.display();
    return 0;}
