#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==2){
            cout<<-1<<" "<<2<<endl;
        }
        else if(n%2==0&&n>2){
            for(ll i=0; i<n; i++){
                if(i%2==0&&i!=(n-1)){
                    cout<<-1<<" ";
                }
                else if(i%2!=0&&i!=(n-1)){
                    cout<<3<<" ";
                }
                else if(i==(n-1)){
                    cout<<2<<" ";
                }
            }

            cout<<endl;
        }
        else if(n%2!=0&&n>2){
            for(ll i=0; i<n; i++){
                if(i%2==0){
                    cout<<-1<<" ";
                }
                else{
                    cout<<3<<" ";
                }
            }
            cout<<endl;
        }
    }
}