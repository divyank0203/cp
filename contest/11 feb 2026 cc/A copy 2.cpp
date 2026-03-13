#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
using ld = long double;
using vll = vector<ll>;
int main(){
    vector<int> in(62);
    for(int i=0; i<62; i++){
        cin>>in[i];
    }
    unordered_map<int, int> mp;
    for(int i=0; i<62; i++){
        mp[in[i]]++;
    }
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}