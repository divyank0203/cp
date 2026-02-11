#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
using ld = long double;
using vll = vector<ll>;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll a(n);
        
        bool equal=true;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            
        }
        if(n==1){
            cout<<"Yes"<<endl;
            continue;
        }
        for(ll i=1; i<n; i++){
            if(a[i]!=a[i-1]){
                equal = false;
                break;
            }
        }
        if(equal){
            cout<<"Yes"<<endl;
            continue;
        }
        vll b=a;
        bool flag=true;
        for(ll i=0; i<n; i++){
            ll in = a[i];
            flag=true;
            for(ll j=0; j<n; j++){
                if(j<i){
                    b[j]+=in;
                }
                else{
                    b[j]-=in;
                }
            }
            for(ll j=0; j<n-1; j++){
                if(b[j]!=b[j+1]){
                    flag=false;
                    break;
                }

            }
            if(flag){
                cout<<"Yes"<<endl;
                break;
            }
            b=a;
        }
        if(!flag){
            cout<<"No"<<endl;
        }

        
    }
}