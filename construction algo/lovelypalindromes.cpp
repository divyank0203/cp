#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    string s;
    cin>>s;
    for(ll i=0; i<s.length(); i++){
        cout<<s[i];
    }
    for(ll i=s.length()-1; i>=0; i--){
        cout<<s[i];
    }

}