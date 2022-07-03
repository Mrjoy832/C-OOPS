#include<bits/stdc++.h>
using namespace std;

class Access{
  private:
  int l=10;
  public:
  int area(){return l*l;}
};

int main(){
    Access A;
    // cout<<A.l;//compile time err
    //l' is private within this context

   cout<<A.area();//100
}