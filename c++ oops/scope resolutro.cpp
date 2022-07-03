#include<iostream>
#include<string>
using namespace std;
class human{
	public:
		string name;
		void intro();
		
};

void human :: intro()
{
	cout<<"hello "<< human::name;
}

int main()
{
	human h;
	h.name="hurr";
	h.intro();
}

