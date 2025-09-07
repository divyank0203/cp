// After sorting, first element must be 1, and each next element must be less than or equal to the sum of all previous elements.

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t; 
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        if(n==1){
            if(a[0]==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
        
        sort(a.begin(), a.end());
        ll sum=a[0];
        bool flag=true;
        for(ll i=1; i<n; i++){
            if(a[0]!=1){
                flag=false;
                break;
            }
            if(a[i]<=sum){
                sum+=a[i];
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    }
}