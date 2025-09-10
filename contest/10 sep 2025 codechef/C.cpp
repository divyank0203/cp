#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==1){
            cout<<200<<endl;
        }
        else{
            cout<<(n*100)<<endl;
        }
    }
}