#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll s, a, b, x;
    cin>>s>>a>>b>>x;
    ll time = x;
    bool flag = false;
    ll ans=0;
    while(time>0){
        if(!flag){
                        if(time<=a){
                ans+=time*s;
                break;
            }
            time-=a;

            ans+=(s*a);
            flag=true;
        }
        else{
            time-=b;
            flag = false;
        }
    }
    cout<<ans<<endl;

}