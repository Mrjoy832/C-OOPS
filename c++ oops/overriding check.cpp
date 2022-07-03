#include<iostream>
using namespace std;
class base{
	public:
		virtual void fun(){
			cout<<"base"<<endl;
		}
};
class derived : public base{
	public:
		void fun() override{
		cout<<"derived"<<endl;
		}
};

int main(){
	base b;
	derived d;
	cout<<"joy";
}
