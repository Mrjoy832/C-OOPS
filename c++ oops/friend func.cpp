#include<iostream>
using namespace std;
class shape{
	int l;
	protected:
		int b;
	public:
		int h;
		friend int main();
};
int main(){
	shape s;
	s.l=15;
	cout<< s.l;
}
