#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n; 
    cin>>n;
    ll k;
    if(n%2==0){
        k=n/2;
        cout<<k<<endl;
        for(ll i=0; i<k; i++){
            cout<<2<<" ";
        }
    }
    else{
        k=(n-1)/2;
        cout<<k<<endl;
        cout<<3<<" ";
        for(ll i=0; i<k-1; i++){
            cout<<2<<" ";
        }
    }
}