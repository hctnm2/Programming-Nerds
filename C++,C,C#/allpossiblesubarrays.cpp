#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int ar[n];
    int cSum=0;
    for(int  i = 0; i < n;i++){
        cin>>ar[i];
    }
    int maxsum=INT_MIN;
    for(int i = 0; i <n;i++){
        cSum+=ar[i];
        if(cSum<0){
            cSum=0;
        }
        maxsum=max(maxsum,cSum);
    }
    cout<<maxsum<<endl;

}