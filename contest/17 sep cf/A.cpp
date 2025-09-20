#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n; 
        cin>>n; 
        vector<ll> p(n);
        for(ll i=0; i<n; i++){
            cin>>p[i];
        }
        ll i=0; 
        ll j=(n-1);
        vector<ll> ans(n);
        while(i<j){
            ans[i]=i+1;
            ans[j]=i+2;
            i++; 
            j--;
        }
        bool flag=true;
        if(p!=ans){
            flag=false;
        }
        // while(i<j){
        //     if(abs(p[i]-p[j])>1&&(((p[i]=i+2)&&(p[j]=i+1))||(p[i]=i+1)&&(p[j]=i+2))){
        //         flag=false;
        //         break;
        //     }

        //     i++; 
        //     j--;
        // }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}