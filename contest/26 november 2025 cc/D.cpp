#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        
        
        if(s[k-1]==0){
            cout<<-1<<endl;
        }

        else{
            if(k==0){
                if(s[k+1]==1&&s[n-1]==1){
                    cout<<-1<<endl;
                    continue;
                }
            }
            else if(k==n-1){
                if(s[k-1]==1&&s[0]==1){
                    cout<<-1<<endl;
                    continue;
                }
            }
            else{
                if(s[k-2]==1&&s[k]==1){
                    cout<<-1<<endl;
                    continue;
                }
            }
            vll ans(n);
            ans.push_back(k);
            for(ll i=0; i<n; i++){
                
            }


        }
    }
    
}