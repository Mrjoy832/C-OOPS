#include<iostream>
using namespace std;
class base{
	public:
		base(){
			cout<<"Default of base";
		}
		base(int x){
			cout<<"parameterised of Base "<<x;
		}
};
class derived : public base{
	public:
	derived(){
		cout<<"Default of derived";
	}
	derived(int p , int x):base(x){
		cout<<"parameterised of derived "<<p;
	}
};

int main(){
	derived d(4,5);
}
