#include<iostream>
using namespace std;
class Student
{
	public:         //access specifier
	int roll_no;
	string name;
	float marks;
void accept()
	{
		cout<<"Enter Your Name: ";
		cin>>name;
		cout<<"Enter Your Roll Number: ";
		cin>>roll_no;
		cout<<"Enter Your Marks: ";
		cin>>marks;
	}

void result()
	{
		if(marks>=33)
			{
				cout<<"You Passed The Examination"<<endl;
			}
		else
			{
				cout<<"You Failed The Examination"<<endl;
			}
	}

void display()
	{
		cout<<"-------The Details of the students are as follows-------"<<endl;
		cout<<"The Name of the student is: "<< name << endl;
		cout<<"The Roll Number is: "<< roll_no << endl;
		cout<<"The Marks is: "<< marks << endl;
		result();
	}

};

int main()
{
	Student s;
	s.accept();
	s.display();
	return 0;
}
