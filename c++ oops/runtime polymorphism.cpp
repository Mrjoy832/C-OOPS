#include<iostream>
using namespace std;
class car{
public:
	virtual void display(){
cout<<"car";	
}
};
class inova : public car{
	public:
        void display(){
        	cout<<"inova";
		}		
};
class swift: public car{
	public:
		void display(){
			cout<<"swift";
		}
};
int main(){
	car *c= new inova;
	c->display();
	c= new swift;
	c->display();
}
