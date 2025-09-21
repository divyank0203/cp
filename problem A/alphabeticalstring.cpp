#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string s2=s;
        sort(s2.begin(), s2.end());
        bool flag=false;
        ll m=0;
        for(ll i=0; i<s.length(); i++){
            if(s[i]=='a'){
                flag=true;
                m=i;
                break;
            }
        }
        ll i=m;
        ll j=m;
        bool f=true;
        if(!flag){
            cout<<"NO"<<endl;
            
        }
        else{
         while(i>=0&&j<s.length()){
                        if(char(s[m]+1)==s[i-1]){
                            m--;
                            i=m;
                        }
                        else if(char(s[m]+1)==s[j+1]){
                            m++;
                            j=m;
                        }
                        else{
                            f=false;
                            cout<<"NO"<<endl;
                            break;
                        }
                    }
                    if(f){
                        cout<<"YES"<<endl;
                    }
                }

        
    }
}