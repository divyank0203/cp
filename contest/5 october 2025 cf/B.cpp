#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
using vll = vector<ll>;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        vector<vector<char>> a(n, vector<char>(n, 'D'));
        if(k==((n*n)-1)){
            cout<<"NO"<<endl;
        }
        
        else{
            ll count=(n*n)-k;
            if(count==2){
                a[0][0]='R';
                a[0][1]='L';
            }
            else{
            
                for(ll i=0; i<n; i++){
                    for(ll j=0; j<n; j++){
                        if(count==1&&i>0){
                            a[i][j]='U';
                            count--;
                        }
                        else if(count==0){
                            a[i][j]='D';
                        }
                        else{

                        if(j==0){
                            a[i][j]='R';
                        }
                        else{
                            a[i][j]='L';
                        }
                        count--;
                        }
                       
                        


                    }
                }
            }
            

            cout<<"YES"<<endl;
            for(ll i=0; i<n; i++){
                for(ll j=0; j<n; j++){
                    cout<<a[i][j];
                }
                if(i!=(n-1)){
                    cout<<endl;
                }
            }
            cout<<endl;
        }
    }
}
