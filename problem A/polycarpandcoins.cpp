#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%3==0){
            cout<<n/3<<" "<<n/3<<endl;
        }

        else{
            ll c1=0;
            ll c2=0;
            long double c = n/3.0;
            if(round(c)>(n/3)){
                c2 = (n/3)+1;
                c1 = (n/3); 
            }
            else if(round(c)==(n/3)){
                c1 = (n/3)+1; 
                c2 = (n/3); 
            }
            cout<<c1<<" "<<c2<<endl;
        }
    }
}