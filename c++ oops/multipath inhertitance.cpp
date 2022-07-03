#include<iostream>
using namespace std;
class A{
	public:
		int a;
};
class B : virtual public A{
	public:
		int b;
};
class C : public A{
	public:
		int c;
};

class D : public C, public B{
	public:
	int d;
};

int main(){
	D obj;
obj.a=15;

obj.a=120;
cout<<obj.a;
}
