#include<iostream>
using namespace std;
class Bird
{
public:
void sound()
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
Bird b;
Crow c;
b.sound();
c.sound();
return 0;
}
