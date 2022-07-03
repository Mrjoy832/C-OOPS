#include<iostream>
using namespace std;
class test{
	private:
		int a;
		int b;
	public:
		static int count;
		test(){
			a=10;
			b=6;
			count++;
		}
};
int test::count=0;
int main(){
	cout<< test::count;
}
