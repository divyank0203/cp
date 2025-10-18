// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main(){
//     ll q;
//     cin>>q;
//     stack<char> st;
//     unordered_map<char, ll> mp; 
//     char last='(';
//     while(q--){
//         ll n;
//         cin>>n;
//         if(n==1){
//             char c;
//             cin>>c;
//             last = c;
//             st.push(c);
//             if(c==')'){
//                 mp[')']++;
//             }
//             else{
//                 mp['(']++;
//             }
//             if(st.size()%2!=0){
//                 cout<<"No"<<endl;
//             }
//             else{
//                 if(mp['(']==mp[')']){
//                     if(last ==')'){
//                         cout<<"Yes"<<endl;
//                     }
//                     else{
//                         cout<<"No"<<endl;
//                     }
//                 }
//                 else{
//                     cout<<"No"<<endl;
//                 }
//             }
//         }
//         if(n==2){

//     if (!st.empty()) {
//         char c = st.top();  // save before popping
//         st.pop();
//         mp[c]--;
//     }
//     if(!st.empty()){
//         last = st.top();
//     }

            
            
//             if(st.empty()){
//                 cout<<"Yes"<<endl;
                
//             }
//            else if(st.size()%2!=0){
//                 cout<<"No"<<endl;
//             }
//             else{
//                 if(mp['(']==mp[')']){
//                     if(last ==')'){
//                         cout<<"Yes"<<endl;
//                     }
//                     else{
//                         cout<<"No"<<endl;
//                     }
//                 }
//                 else{
//                     cout<<"No"<<endl;
//                 }
//             }
//         }
        
//     }
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    
    ll Q;
    cin >> Q;
    vector<pair<ll, ll>> balance_history;
    balance_history.push_back({0, 0});


    while (Q--) {
        ll t;
        cin >> t;
        if (t == 1) {
            char c; 
            cin >> c;
            ll balance = balance_history.back().first;
            ll min_balance = balance_history.back().second;
            if (c == '(') {
                balance++;
            }
            else {
                balance--;
            }
            min_balance = min(min_balance, balance);
            balance_history.push_back({balance, min_balance});
        } else {
            balance_history.pop_back();
        }
        ll balance = balance_history.back().first;
        ll min_balance=balance_history.back().second;
        if (balance == 0 && min_balance>= 0){
            cout << "Yes"<<endl;    
        }
            
        else{
            cout << "No"<<endl;
        }
    }
}
