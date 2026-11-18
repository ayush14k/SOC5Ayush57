#include<iostream>
using namespace std;

class Books
{
public:
int Id;
string Author;
string Title;

Books(int i,string a,string t)
{
	Id=i;
	Author=a;
	Title=t;
}

Books(Books&b)
{
	Id=b.Id;
	Author=b.Author;
	Title=b.Title;
}

void display()
{
	cout<<"Book Id: "<< Id <<endl;
	cout<<"Author of the book: "<< Author <<endl;
	cout<<"Title of the book: "<< Title <<endl;
}
};

int main()
{
	Books b1(22,"HC Verma","Physics");
	Books b2(b1);
	b1.display();
	b2.display();
	return 0;
}