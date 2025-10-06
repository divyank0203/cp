#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll> ;
using vvll = vector<vll> ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        // ll i=0; 
        // ll j=(n-1);
        vector<char> res(n, '?');
        ll two=0;
        ll zz=0;
        ll one=0;
        for(ll m=0; m<s.length(); m++){
            if(s[m]=='0'){
                zz++;
            }
            else if(s[m]=='1'){
                one++;
            }
            else{
                two++;
            }
        }
        for(ll i=0; i<zz; i++){
            res[i]='-';
        }
        for(ll i=(n-1); i>=(n-one); i--){
            res[i]='-';
        }
        if((n-(one+zz))>0&&(n-(one+zz))==two){
            for(ll i=zz; i<=(n-one-1); i++){
                res[i]='-';
            }
        }
        else if((n-(one+zz))>two){
            ll st=(zz+two);
            ll en=(n-one-two);
            for(ll i=st; i<en; i++){
                res[i]='+';
            }
        }
        // if(two==n){
        //     while(two){
        //         res[i]='-';
        //         i++;
        //         res[j]='-';
        //         j--;
        //         two--;
        //     }
            
        // }
        // else{

        // while(two){
        //     res[i]='?';
        //     i++;
        //     res[j]='?';
        //     j--;
        //     two--;
            

        // }
        // }

        for(ll m=0; m<n; m++){
            cout<<res[m];
        }
        cout<<endl;
    }
}