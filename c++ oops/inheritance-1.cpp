#include<iostream>
using namespace std;
class base{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
};
class derived1 : private base{
	
};
int main(){
	derived1 obj;
//	obj.b=10;
	obj.c=15;
	cout/*<<obj.b<<" "*/<<obj.c;
}
