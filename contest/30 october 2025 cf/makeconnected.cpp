#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<string> v(n);
        for(ll i=0; i<n; i++){
            cin>>v[i];
        }
        bool flag=true;
        for(ll i=0; i<n; i++){
            ll prev=0;
            ll count=0;
            for(ll j=0; j<n; j++){
                if(v[i][j]=='#'){
                    count++;
                    if(j-prev>1&&count>=2){
                        flag=false;
                        break;
                    }
                    prev=j;
                }
            }
            if(!flag) break;
            if(count>2){
                flag=false;
                break;
            }
        }
        if(!flag){
            cout<<"NO"<<endl;
            continue;
        }
        flag=true;
        for(ll i=0; i<n; i++){
            ll prev=0;
            ll count=0;
            for(ll j=0; j<n; j++){
                if(v[j][i]=='#'){
                    count++;
                    if(j-prev>1&&count>=2){
                        flag=false;
                        break;
                    }
                    prev=j;
                }
            }
            if(count>2){
                flag=false;
                break;
            }
        }
        if(!flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}