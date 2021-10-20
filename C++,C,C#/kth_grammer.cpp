#include <bits/stdc++.h>


using namespace std;

int solve(int n,int k){
    if(n==1 && k==1){
        return 0;
    }

    if(k<=pow(2,n-2)){
        return solve(n-1,k);
    }
    else{
        return !solve(n-1,k-pow(2,n-2));
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<solve(a,b);

    return 0;
}