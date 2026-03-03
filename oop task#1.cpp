#include<iostream>
#include<string>
using namespace std;
struct student {
	string firstname;
	string lastname;
	int rollnumber;
	float marks;
	void displaystudentinfo(){
		cout<<"full name:"<<firstname<<""<<lastname<<endl;
		cout<<"marks:"<<marks<<endl;
		cout<<"--------------------------"<<endl;
	}
};
int main(){
	student s1;//stucture variable
	//assiign values
	s1.firstname="nayab";
	s1.lastname="batool";
	s1.rollnumber=18;
	s1.marks=65;
	cout<<"single student record:\n";
	//call function
	s1.displaystudentinfo();
	student students[2];//array of structures
	for(int i=0;i<2;i++){
	cout<<"\nenter details for student"<<i+1<<endl;
	cout<<"first name:";
	cin>>students[i].firstname; 
	cout<<"last name:";
	cin>>students[i].lastname;
	cout<<"roll number:";
	cin>>students[i].rollnumber;
	cout<<"marks:";
	cin>>students[i].marks;
}
//display all stydents
cout<<"\n multiple students record:\n";
for(int i=0;i<2;i++){
	students[i].displaystudentinfo();
}
student s2;
student *ptr;
ptr = &s2;
ptr->firstname="seemab";
ptr->lastname="malik";
ptr->rollnumber=23;
ptr->marks=80;
cout<<"\npointer student record:\n";
ptr->displaystudentinfo();

	return 0;
	}
