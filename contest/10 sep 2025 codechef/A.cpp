#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll r, b;
    cin>>r>>b;
    ll g=(min(r,b)*5);
   
    r-=(g/5);
    b-=(g/5);
   
    if(r==0){
        g+=(b*2);
    }
    else if(b==0){
        g+=r;
    }
    cout<<g;
    
}