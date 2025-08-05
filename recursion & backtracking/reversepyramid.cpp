#include<bits/stdc++.h>
using namespace std;
void p(int n, int k){
    if(n==0) return;
    
    for(int i=0; i<(k-n); i++){
        cout<<" ";
    }
    for(int i=0; i<((2*n)-1); i++){
        cout<<"*";
    }
    
    cout<<endl;
    p(n-1, k);
    
}

int main(){
int m;
cin>>m;
p(m, m);
}