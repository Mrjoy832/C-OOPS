#include<iostream>
#include<array>
using namespace std;
int main(){
	array<int,4> a={1,2,3,4};
	int size= a.size();
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
}
