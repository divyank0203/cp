#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void dm(ll i, string t, ll total, vector<ll>& ans){
    if(i==t.size()){
        ans.push_back(total);
        return;
    }
    if(t[i]=='+'){
        dm(i+1, t, total+1, ans);
    }
    else if(t[i]=='-'){
        dm(i+1, t, total-1, ans);
    }
    else{
        dm(i+1, t, total+1, ans);
        dm(i+1, t, total-1, ans);
    }
}

vector<ll> solve(string t){
    vector<ll> ans;
    dm(0, t, 0, ans);
    return ans;
}
int main(){
string s, t;
getline(cin, s);
getline(cin, t);
long double c = 0;
for(ll j=0; j<s.length(); j++){
    if(s[j]=='+'){
        c+=1;
    }
    else if(s[j]=='-'){
        c-=1;
    }
}
long double d = 0.000000000000;
vector<ll> ans = solve(t);
for(int j=0; j<ans.size(); j++){
    if(ans[j]==c){
        d+=1.000000000000;
    }
}
long double siz = ans.size();
cout<<fixed<<setprecision(12)<<(long double)(d/siz);
}