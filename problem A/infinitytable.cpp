#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        long double s=sqrt(k);
        ll a = ceil(s);
        ll l = ((a-1)*(a-1))+1;
        ll u = a*a;
        ll i=1;
        ll j=a;
        while(l<=u){
            if(
                l==k
            ){
                cout<<i<<" "<<j<<endl;
                break;
            }
            if(i<a){
                i++;
                l++;
            }
            else if(i==a){
                j--;
                l++;
            }
        }
    }
}