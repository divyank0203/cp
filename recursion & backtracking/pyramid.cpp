#include<bits/stdc++.h>
using namespace std;
void p(int n, int k){
    if(n==0) return;
    p(n-1, k);
    for(int i=0; i<(k-n); i++){
        cout<<" ";
    }
    for(int i=0; i<((2*n)-1); i++){
        cout<<"*";
    }
    cout<<endl;
    
}

int main(){
int m;
cin>>m;
p(m, m);
}