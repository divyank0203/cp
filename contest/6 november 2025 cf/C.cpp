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
    // ll even=0;
    // ll one=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        // if(a[i]%2==0){
        //     even++;
        // }
        // if(a[i]==1){
        //     one++;
        // }
    }
    // if(one>=1){
    //     cout<<1<<" "<<a[1]<<endl;
    // }
    // else if(even>=2){
    //     ll count=0;
    //     for(ll i=0; i<n; i++){
    //         if(a[i]%2==0&&count<2){
    //             cout<<a[i]<<" ";
    //             count++;
    //         }
    //         if(count==2){
    //             break;
    //         }
    //     }
    // }
    
        bool found=false;
        for(ll i=0; i<n; i++){
            for(ll j=i+1; j<n; j++){
                ll modd = a[j]%a[i];
                if(modd%2==0){
                    cout<<a[i]<<" "<<a[j]<<endl;
                    found=true;
                    break;
                    
                }
            }
            if(found){
                break;
            }
        }
        if(!found){
            cout<<-1<<endl;
        }
    

}
}