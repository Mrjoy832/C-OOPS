#include<iostream>

using namespace std;

class rect{
	public:
		int l;
		int b;
		int area()
		{
			return l*b;
		}
};

int main()
{
	rect *p = new rect;
	p->l=5;
	p->b=9;
	cout<< p->area();
}
