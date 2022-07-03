#include<iostream>


using namespace std;

class Solution {
public:
    int fib(int n) {
        int sum=0;
         
       if(n==0)
       return 0;
        while(n>0){
            
            sum=fib(n-1)+fib(n-2);
            
       
        }
        return sum;
        if(n==1)
        return 1;
         
       
    }
};
int main(){
	Solution s;
	cout<<s.fib(2);
}
