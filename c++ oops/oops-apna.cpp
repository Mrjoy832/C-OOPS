#include<iostream>
using namespace std;
class student {
	string name;
	
	public:
		
		int age;
		bool gender;
		void setName(string n)
		{
			name=n;
		}
		void printInfo(){
			cout<<"name= "<<name<<endl;
			cout<<"age= "<<age<<endl;
			cout<<"gender= "<<gender<<endl;
			
		}
};

int main(){
	student arr[2];
	string s;
	for(int i=0;i<2;i++){
		cin>>s;
		arr[i].setName(s);
		cin>>arr[i].age;
		cin>>arr[i].gender;
	}
	for(int i=0;i<2;i++){
	arr[i].printInfo();
	}
}
