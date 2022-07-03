#include<bits/stdc++.h>
using namespace std;

void fun(int ind, vector<int>&ds, int arr[], int n){
    if(ind==0){
        for(int it=0;it<ds.size();it++){
		cout<<ds[it]<<" ";
        cout<<endl;
        return;}

    }

    ds.push_back(arr[ind]);

    fun(ind+1, ds,arr,n);

    ds.pop_back();

    fun(ind+1,ds,arr,n);
}


int main(){
    int arr[]={1,3,2};
    int ind=0;
    vector<int>ds;

    fun(ind,ds,arr,3);
}
