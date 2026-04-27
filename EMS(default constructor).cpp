#include<iostream>
using namespace std;
class employee
{
    private:
    int id;
    string name;
    float salary;
    public:
    //default constructor
    employee(){
        id=0;
        name="not assigned";
        salary=0.0;
    }
    void display()
{
cout<<"id:"<<id<<","<<"name:"<<name<<","<<"salary:"<<salary<<endl;
}
};
int main()
{
    employee e1;//call default constructor
    e1.display();
    return 0;
}
