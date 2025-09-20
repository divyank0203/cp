#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll q, p;
        cin>>q>>p;
        if(p>=2&&q-p>=2){
            cout<<3<<endl;
        }
        else if(p>q){
            cout<<2<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }
}