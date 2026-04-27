#include<iostream>
using namespace std;
class printer
{
	public:
		void printdocument(){
			cout<<"printingdocument...."<<endl;
		}
};
class scanner
{
	public:
		void scandocument(){
			cout<<"scanningdocument...."<<endl;
		}
};
class photocopier:public printer,public scanner
{
	public:
		void photocopy(){
		 printdocument();
		 scandocument();
			cout<<"photocopy complete!"<<endl;
		}
};
int main(){
	photocopier p;
	p. printdocument();
	p. scandocument();
	p.photocopy();
	return 0;
}
