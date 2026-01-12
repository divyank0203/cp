#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t; 
    cin>>t;
    while(t--){
        ll s,k,m;
        cin>>s>>k>>m;


        ll last =(m/k)*k;
        ll elapsed=m-last;

        // ll rem=min(s, k);

        if(elapsed>=s){
            cout<<0<<endl;
        }
        else{
            cout<<min(s-elapsed, k-elapsed)<<endl;
        }
    }
}