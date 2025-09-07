// check for adjacent 0's in all directions

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t; while(t--){
        ll n, m;
        cin>>n>>m;
        vector<string> v(n);
        for(ll i=0; i<n; i++){
            cin>>v[i];
        }
        vector<ll> ones(2, 0);
        for(ll i=0; i<n; i++){
            for(ll j=0; j<m; j++){
            
                    ones[v[i][j]-'0']++;
            
            
            }
        }
        ll adzer=0;
        for(ll i=0; i<n; i++){
            for(ll j=0; j<m; j++){
                if(i==n-1&&j<m-1){
                    if((v[i][j]=='0'&&v[i][j+1]=='0')||(v[i][j]=='0'&&v[i-1][j+1]=='0')){
                        adzer++;
                    }

                }
                else if(i==n-1&&j==m-1){
                    // if(v[i][j]=='0'&&v[i-1][j-1]){
                    //     adzer++;
                    // }
                    break;
                    
                }
                else if(i<n-1&&j==m-1){
                    if((v[i][j]=='0'&&v[i+1][j]=='0')||(v[i][j]=='0'&&v[i+1][j-1]=='0')){
                        adzer++;
                    }

                }
                else{
                    if((v[i][j]=='0'&&v[i][j+1]=='0')||(v[i][j]=='0'&&v[i+1][j]=='0')||(v[i][j]=='0'&&v[i+1][j+1]=='0')){
                        adzer++;
                    }
                }
                if(adzer>0){
                    break;
                }
            }
        }
        if(ones[0]==0){
            cout<<ones[1]-2<<endl;
        }
        else if(ones[1]==0){
            cout<<0<<endl;
        }


        // else if(ones[0]>=ones[1]){
        //     cout<<ones[1]<<endl;
        // }
        else if(adzer>0){
            cout<<ones[1]<<endl;
        }
                else if(adzer==0){
            cout<<ones[1]-1<<endl;
        }

        
    }
}