#include<iostream>
using namespace std;
class Bird
{
public:
virtual void sound()
	{
	cout<<"Bird Sound"<<endl;
	}
};

class Crow: public Bird
{
public:
void sound()
	{
	cout<<"Crow Sound"<<endl;
	}
};

int main()
{
Bird *ptr;
Crow c;
ptr=&c;
ptr->sound();
return 0;
}
