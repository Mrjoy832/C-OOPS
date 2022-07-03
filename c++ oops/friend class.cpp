#include<iostream>
using namespace std;
class your;//friend class
class my{
	int a=10;
	friend  your;//declaring as friend
};
class your{
	public:
		my m;
		void fun()
		{
			cout<<m.a;
		}
};
int main()
{
your y;
y.fun();
}


