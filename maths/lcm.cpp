#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll l, r;
        cin>>l>>r;
        for(ll i=l; i<=r; i++){
            if(i*2>r){
                cout<<-1<<" "<<-1<<endl;
                break;
            }
            else if(i*2<=r){
                cout<<i<<" "<<i*2<<endl;
                break;
            }
            else{
                i++;
            }
        }

    }
}