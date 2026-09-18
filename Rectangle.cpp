#include<iostream>
using namespace std;
class Rectangle
{
	private:
	float length,breadth;

	public:
	void accept()
		{
		cout<<"Enter Length : ";
		cin>>length;
		cout<<"Enter Breadth : ";
		cin>>breadth;
		}
	float area();
	float perimeter();

	void display()
		{
		cout<<"Area of Rectangle is: "<<area()<<endl;
        cout<<"Perimeter of Rectangle is: "<<perimeter()<<endl;
		}
};

//here area and perimeter functions are defined outside the class
		float Rectangle::area()
		{
		return length*breadth;
		}

        float Rectangle::perimeter()
        {
        return 2*(length+breadth);
        }


int main()
{
	Rectangle r;
	r.accept();
	r.display();
	return 0;
}
