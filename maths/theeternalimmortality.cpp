#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ll a, b;
    cin>>a>>b;
    ll n = abs(b-a);
    ll ans=1;
    ll i=0;
    ll res=0;

   
    while(i<b&&n>0){
        if(ans%10==0){
            res=0;
            break;
        }
        ans*=((b-i)%10);
        i++;
        n--;
    }
    res=(ans%10);


    cout<<res<<endl;
    
}