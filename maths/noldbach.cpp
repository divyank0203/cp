#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool isprime(ll n){
        for(ll i=2; i<=n/2; i++){
            if(n%i==0) {return false;
            break;}
            else{
                continue;
            }
        }
        return true;
}
int main(){
    ll n, k;
    cin >> n >> k;
    ll cnt = 0;
    ll sum = 0;
    ll j =0;
    if(k==0&&n>=2){
        cout<<"YES"<<endl;
        
    }
    else if(k>n){
        cout<<"NO"<<endl;
    }
    else{
    for(ll i=3; i<=n; i++){
        if(cnt==2){
            if(isprime(sum+1)&&(sum+1)<=n){
                k--;
                // cout<<" sum "<<sum+1<<endl;
                sum=j;
                cnt=1;
                // cout<<" k "<<k<<endl;
            }
            else{
                sum=j;
                cnt=1;
            }
        }
        if(k==0){
            cout<<"YES"<<endl;
            break;
        }
        if(isprime(i)){
            j=i;
            sum += i;
            cnt++;
        }
    }
    if(k>0){
        cout<<"NO"<<endl;
    }
}

}