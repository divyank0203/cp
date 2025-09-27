#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n, d;
    cin>>n>>d;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<-1<<endl;
    
    }
    else{
        bool flag=false;
    for(ll i=1; i<n; i++){
        if(a[i]-a[i-1]<=d){
            cout<<a[i]<<endl;
            
            flag=true;
            break;
        }
    }
    if(!flag){
        cout<<-1<<endl;
    }
}
}