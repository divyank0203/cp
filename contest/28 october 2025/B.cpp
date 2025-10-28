#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
#define pb push_back;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        string t;
        cin>>s>>t;
        set<char> m1;
        set<char> m2;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s==t){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}