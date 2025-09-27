#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll r, b, d;
        cin>>r>>b>>d;
        ll mini = min(r,b);
        ll maxi = max(r,b);
        ll ans = maxi/mini;
        if(maxi%mini!=0){
            ans++;
        }
        ll a=ans-1;
        if(a<=d){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}