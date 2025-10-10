// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         vector<ll> a(n);
        
//         for(ll i=0; i<n; i++){
//             cin>>a[i];
//         }
//         sort(a.begin(), a.end(), greater<ll>());
//         unordered_map<ll, ll> mp;
//         for(ll i=0; i<n; i++){
//             mp[a[i]]++;
//         }
//         ll p=0;
//         bool flag=false;
//         set<ll> st;
//         for(auto it: mp){
//             st.insert(it.second*it.first);
//             if(it.second>1){
//                 flag = true;
//                 break;

//             }
//         }
//         if(st.size()!){
//             flag = true;
//         }
//         if(!flag){
//             cout<<0<<endl;
//         }
//         else{

//         }


//     }
// }