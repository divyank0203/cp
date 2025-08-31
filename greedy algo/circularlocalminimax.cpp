#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        vector<ll> ans(n);
        bool flag=true;
        if(a.size()%2==0){
            ll i=0; ll j=(n/2);
            for(ll k=0; k<n; k++){
                if(k%2==0){
                    ans[k]=a[i++];
                    if(k>0&&ans[k]>=ans[k-1]){
                    flag=false;
                    break;
                }
                }
                else{
                    ans[k]=a[j++];
                    if(k>0&&ans[k]<=ans[k-1]){
                    flag=false;
                    break;
                }
                }

            }
            if(ans[n-1]<=ans[0]){
                flag=false;
            }

        }
        else{
            // ll i=0; ll j=(n/2)+1;
            // for(ll k=0; k<n; k++){
            //     if(k%2==0){
            //         ans[k]=a[i++];
            //         if(k>0&&ans[k]>=ans[k-1]){
            //         flag=false;
            //         break;
            //     }
            //     }
            //     else{
            //         ans[k]=a[j++];
            //         if(k>0&&ans[k]<=ans[k-1]){
            //         flag=false;
            //         break;
            //     }
            //     }
 
            // }
            // if(ans[n-1]<=ans[0]){
            //     flag=false;
            // }
            flag=false;

        }
        if(flag==true){
            cout<<"YES"<<endl;
            for(ll i=0; i<n; i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

