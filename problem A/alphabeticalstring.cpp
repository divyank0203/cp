#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll m=-1;
        for(ll i=0; i<s.length(); i++){
            if(s[i]=='a'){
                m=i;
                break;
            }
        }
        ll i=m-1;
        ll j=m+1;
        bool f=true;
        if(m==-1){
            cout<<"NO"<<endl;
        }
        else{
         while(i>=0&&j<s.length()){
                        if(s[m]+1==s[i]){
                            m--;
                            i=m;
                        }
                        else if(s[m]+1==s[j]){
                            m++;
                            j=m;
                        }
                        else{
                            f=false;
                            cout<<"NO"<<endl;
                            break;
                        }
                    }
                    if(f==true){
                        cout<<"YES"<<endl;
                    }
                }

        
    }
}