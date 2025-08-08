#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        set<ll> a;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]!=-1){
            a.insert(v[i]);
            }
        }
        if(a.empty()){
            cout<<"YES"<<endl;
        }
        else if(a.size()>1){
            cout<<"NO"<<endl;
        }
        else{
            
            if(*a.begin()==(ll)0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }

    }
}