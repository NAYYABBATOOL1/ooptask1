#include<iostream>
using namespace std;
class bankaccount
{
    private:
    string accountnumber;
    string accountholder;
    double balance;
    public:
    //parameterized constructor
    bankaccount(string accN,string accH,double b){
        accountnumber=accN;
        accountholder=accH;
        balance=b;
    }
    void showaccountdetails()
{
cout<<"accountnumber:"<<accountnumber<<","<<"accountholder:"<<accountholder<<","<<"balance:"<<balance<<endl;
}
};
int main()
{
    bankaccount acc(" pk0309800780100","muhammad awais",10000); //call parameterized constructor
    acc.showaccountdetails();
    return 0;}
