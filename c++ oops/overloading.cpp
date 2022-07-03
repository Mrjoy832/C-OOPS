#include<iostream>
using namespace std;
int foo(){
	return 10;
}
char foo(int x){
	return 5;
}
int main(){
	cout<<foo();
}
