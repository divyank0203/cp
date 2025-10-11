#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    ll N, M;
    cin>>N>>M;
    vector<pair<ll,ll>> edges;
    for(ll i=0;i<M;i++){
        ll u,v; 
        cin >> u >> v;
        --u; --v;
        edges.emplace_back(u,v);
    }

    ll k = 0;
    ll maxMask = 1<<N;
    for(ll mask = 0; mask < maxMask; ++mask){
        ll keep = 0;
        for(auto &e: edges){
            ll u = e.first, v = e.second;
            if( ((mask>>u)&1) != ((mask>>v)&1) ){
                 ++keep;
            }
        }
        if(keep > k){

         k = keep;
        }
    }

    cout << (M - k) << endl;
    
}
