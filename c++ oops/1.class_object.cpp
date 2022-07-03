#include<iostream>
using namespace std;
class Human{//human class
	public:
		void display()
		{
			cout<<"hello";
		}
};

int main()
{
	Human joy;//obj -> joy of class Human
	joy.display();
}
