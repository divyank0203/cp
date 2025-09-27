#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x, y;
        cin>>x>>y;
        ll ans=0;
        ll rem=0;
        if(x>y){
        ans+=((y)*2);
        
        ans+=(abs((x-(y*2))/3));
        cout<<ans<<endl;

        }
        else if(y>x){
        rem=x%3;
        ans+=(x/3);
        ans+=(((rem+y)/3)*2);
        cout<<ans<<endl;
        }
        else{
            rem=(x/2);
            ans+=(rem*2);
            rem=(y-rem);
            ans+=(((rem+(x%2))/3)*2);
            cout<<ans<<endl;
        }
    }
}