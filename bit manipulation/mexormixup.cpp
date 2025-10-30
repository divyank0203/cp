#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a, b;
        cin>>a>>b;
        
        ll x=0;
        if((a-1)%4==0){
            x=a-1;
        }
        else if((a-1)%4==1){
            x=1;
        }

        else if((a-1)%4==2){
            x=(a);

        }
        else{
            x=0;
        }
        
        
        if(x==b){
            cout<<a<<endl;
        }
        else if((x^b)==a){
            cout<<a+2<<endl;
        }
        else {
            cout<<a+1<<endl;
        }

    }
}