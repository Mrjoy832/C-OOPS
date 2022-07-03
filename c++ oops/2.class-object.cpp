#include<iostream>
#include<string>
using namespace std;

class human{
	public:
		string name;
		void intro()
		{
			cout<<"hi "<<name;
		}
};

int main()
{
	human joy;
	joy.name= "modna";
	joy.intro();
}
