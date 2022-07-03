#include<iostream>
using namespace std;
void print(int i){
	cout<<"int "<<i<<endl;
}
void print(double j){
	cout<<"float "<<j<<endl;
}
void print(int a, int b){
	cout<<"int int "<<a<<" "<<b;
}
int main(){
	print(10);
	print(1,2);
	print(1.5);
}
