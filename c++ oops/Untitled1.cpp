#include<bits/stdc++.h>
using namespace std;

int  R(int i =0 , int Arr[], int n){
    if(i>=n/2){return 0;}
    swap(Arr[i], Arr[n-i-1]);
  R(i+1,Arr,n);

}


int main(){
    int j=0;
    int arr[5]={5,2,3,4,1};
    R(j, arr, 5);

    for(int i=0;i<5;i++){cout<<arr[i]<<" ";} 
}
