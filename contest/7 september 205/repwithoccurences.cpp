#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n; 
        cin>>n;
        vector<ll> b(n);
        unordered_map<ll, ll> f;
                    ll j=0;
            ll k=1;
        for(ll i=0; i<n; i++){
            cin>>b[i];
            f[b[i]]++;
        }
        bool flag=true;
        for(auto it: f){
            if(it.first!=1){
                if(it.first!=it.second){
                    flag=false;
                    break;
                }
            }
        }
        if(!flag){
            cout<<-1<<endl;
        }
        else{
            unordered_set<ll> st;
            vector<ll> c;
            for(ll i=0; i<n; i++){
                if(b[i]!=1){
                st.insert(b[i]);
                }
                else{
                    c.push_back(b[i]);
                }
            }
            
            for(auto it: st){
                c.push_back(it);
            }
            sort(c.begin(), c.end());
            vector<ll> a(n);
                // vector<ll> d=b;
                // sort(d.begin(), d.end());
                ll k=1;
                ll d=0;
                unordered_map<ll, ll> dif;
                vector<ll> one;
                for(ll i=0; i<c.size(); i++){
                    if(c[i]==1){
                        one[i]=k++;
                        
                    }
                    else{
                        dif[b[i]]=k++;
                        
                    }
                }
                
                for(ll i=0; i<n; i++){
                    if(b[i]==1){
                        a[i]=one[i];
                        
                    }
                    else{
                        a[i]=dif[b[i]];
                    }
                }
                for(ll i=0; i<n; i++){
                    cout<<a[i]<<" ";
                }
                cout<<endl;

        //     vector<ll> a(n);
        //     unordered_set<ll> st;
        //     vector<ll> c;
        //     for(ll i=0; i<n; i++){
        //         if(b[i]!=1){
        //         st.insert(b[i]);
        //         }
        //         else{
        //             c.push_back(b[i]);
        //         }
        //     }
            
        //     for(auto it: st){
        //         c.push_back(it);
        //     }
        //     sort(c.begin(), c.end());

        //     for(ll i=0; i<c.size(); i++){
        //         ll ind=c[i];
        //             if(j>n-1){
        //               flag=false;
        //               break;  
        //             }
        //         while(ind-- && j<n&&k<=n){
        //             a[j]=k;
        //             j++;

        //         }
        //         k++;
        //     }
        //     if(flag){
        //     for(ll i=0; i<n; i++){
        //         cout<<a[i]<<" ";
        //     }
        //     cout<<endl;
        // }
        // else{
        //     cout<<-1<<endl;
        // }
    }
        

    }
}

