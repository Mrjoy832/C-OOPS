#include<iostream>
using namespace std;
class rectangle{
	private:
		int l;
		int b;
	public:
		void set_length(int len){
			l=len;
		}
		int get_length(){
		return l;
		}
		void set_breadth(int bre){
		b=bre;
		}
        int get_breadth(){
		return b;
		}
		

};
class cuboid : public rectangle{
	public:
		int h;
	
		
		
        int volume(){
        	cout<<"volume is "<<get_length()*get_breadth()*h;
		}

};

int main(){
	cuboid c;
	c.set_length(5);
	c.set_breadth(4);
	c.h=3;
	c.volume();
}

