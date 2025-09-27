#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        if(k>((n/2)+(n%2))){
            cout<<-1<<endl;
        }
        else{
            vector<vector<char>> a(n, vector<char>(n, '.'));
            for(ll i=0; i<n; i++){
                for(ll j=i; j<n; j++){
                    if(i%2==0&&j==i&&k>0){
                        a[i][j]='R';
                        k--;
                    }
                }
            }
            for(ll i=0; i<n; i++){
                for(ll j=0; j<n; j++){
                    cout<<a[i][j];
                }
                cout<<endl;
            }
            
        }
    }
}