#include<bits/stdc++.h>
using namespace std;

class Protect{
    protected:
    int b=100;
};

class child:public Protect{
    public:
    int area()
    {
        cout<<b*b;
    }
};

int main(){
    child c1;
    c1.area();//1000
    cout<<endl;
    cout<<c1.b;
    //b' is protected within 
// this context
}