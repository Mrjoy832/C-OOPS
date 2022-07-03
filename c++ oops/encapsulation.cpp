#include<iostream>
using namespace std;
class encap{
	private:
		int x;
	public:
		void set(int a){
			x=a;
		}
		void get(){
			cout<<"value is -->> "<<x;
		}
};
int main(){
	encap e;
	e.set(10);
	e.get();
}
