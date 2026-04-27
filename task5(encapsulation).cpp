#include<iostream>
using namespace std;
class product
{
    private:
    string name;
    double price;
    int quantity;
    public:
          void setname(string n){
          	if(n!=""){
          		name=n;
			  }
			  else{
			  	cout<<"invalid name"<<endl;
			  }
		  }
    void setprice(double p){
    	if(p>0){
    		price=p;
		}
		else{
			cout<<"invalid price"<<endl;
		}
	}
	void setquantity(int q){
		if(q=0){
			quantity=q;
		}
		else{
			cout<<"invalid quantity"<<endl;
		}
	}
	string getname(){
      return name;
    }
    double getprice(){
	return price;
	}
	int getquantity(){
	return quantity;
	}
};
int main()
{
  product p;
  
  p.setname("");
  p.setprice(-50);
  p.setquantity(-2);
  
  p.setname("laptop");
  p.setprice(1200.50);
  p.setquantity(5);
  
  cout<<"product:"<<p.getname()<<endl;
   cout<<"price$:"<<p.getprice()<<endl;
   cout<<"quantity:"<<p.getquantity()<<endl;
   return 0;
}
    
