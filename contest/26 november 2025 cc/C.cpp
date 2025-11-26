#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll a(n);
        vll b(n);
        for(auto &x: a){
            cin>>x;
        }
        for(auto &x: b){
            cin>>x;
        }

        if(a==b){
            cout<<"Yes"<<endl;
        }
        else{
            bool flag=true;
            for(ll i=1; i<n; i++){
                if(a[i]>a[i-1]){
                    if(b[i]<b[i-1]){
                        flag=false;
                        break;
                    }
                }
                else if(a[i]<a[i-1]){
                    if(b[i]>b[i-1]){
                        flag=false;
                        break;
                    }
                }
            }
            if(flag){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    
}