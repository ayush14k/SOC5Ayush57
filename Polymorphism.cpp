#include<iostream>
using namespace std;

class Calculator
{
public:
int add(int a,int b)
	{
	return a+b;
	}
int add(int a,int b,int c)
	{
	return a+b+c;
	}
};

int main()
{
Calculator c;
cout<<c.add(2,4)<<endl;
cout<<c.add(6,8,10)<<endl;
return 0;
}
