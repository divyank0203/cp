// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using ld = long double;
// using vll = vector<ll> ;
// using vvll = vector<vll> ;
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         string s;
//         cin>>s;
//         unordered_map<char, ll> m;
//         for(ll i=0; i<s.length(); i++){
//             m[s[i]]++;
//         }
//         if(m['a']==m['b']){
//             cout<<0<<endl;
//         }
//         else if(m['a']==0||m['b']==0){
//             cout<<-1<<endl;
//         }
//         else{
//             ll mx=0;
//             ll mn=0;
//             char maxi;
//             char mini;
//             if(m['a']>m['b']){
//                 maxi = 'a';
//                 mini = 'b';
//                 mx = m['a'];
//                 mn = m['b'];
//             }
//             else{
//                 maxi = 'b';
//                 mini = 'a';
//                 mx = m['b'];
//                 mn = m['a'];
//             }
//             ll dif = (mx-mn);
//             ll count=0;
//             bool flag = false;
//             for(ll i=0; i<s.length(); i++){
//                 if(s[i]==maxi){
//                     count++;
//                     if(count==dif){
//                     flag =true;
//                         break;
//                     }
//                 }
//                 else{
//                     count=0;
//                 }
//             }
//             if(flag){
//                 cout<<dif<<endl;
//             }
//             else{
//                 cout<<-1<<endl;
//             }
            

//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using ld = long double;
// using vll = vector<ll> ;
// using vvll = vector<vll> ;

// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         string s;
//         cin>>s;
        
//         // It's slightly cleaner to count totals directly rather than using a map for just two keys.
//         ll Acount = 0;
//         ll totalB = 0;
//         for(char c : s){
//             if (c == 'a') totalA++;
//             else totalB++;
//         }
        
//         if(totalA == totalB){
//             cout << 0 << endl;
//             continue; // Skip to the next test case
//         }
        
//         // --- START OF LOGICAL FIX ---
//         // The old logic was flawed because it only looked for a substring made of
//         // a single character. The correct substring can have both 'a's and 'b's.
        
//         // The correct logic: Find the shortest substring where the difference between its 'a's and 'b's
//         // equals the total difference of 'a's and 'b's in the whole string.
        
//         ll target_global_diff = totalA - totalB;
        
//         // This map will store the first index at which a certain prefix difference was seen.
//         // Key: (count of 'a' - count of 'b'), Value: index
//         unordered_map<ll, ll> diff_map;
//         diff_map[0] = -1; // A difference of 0 exists before the string starts (at a virtual index -1)
        
//         ll min_len = n + 1; // Initialize min_len to an imossible value
//         ll current_diff = 0;
        
//         for(ll i = 0; i < n; i++){
//             // Update the running difference for the prefix s[0...i]
//             if(s[i] == 'a'){
//                 current_diff++;
//             } else {
//                 current_diff--;
//             }
            
//             // We need to find a previous prefix (ending at index j) such that:
//             // (diff at i) - (diff at j) = target_global_diff
//             // So, we are looking for: (diff at j) = (diff at i) - target_global_diff
//             ll required_prev_diff = current_diff - target_global_diff;
            
//             // Check if we have seen this required previous difference before
//             if(diff_map.count(required_prev_diff)){
//                 ll j = diff_map[required_prev_diff];
//                 ll current_len = i - j;
//                 min_len = min(min_len, current_len);
//             }
            
//             // ImORTANT: Store the current difference's index *only if it's the first time* we see it.
//             // This ensures we find the longest possible previous prefix, which gives the shortest substring length.
//             if(diff_map.find(current_diff) == diff_map.end()){
//                 diff_map[current_diff] = i;
//             }
//         }
        
//         // --- END OF LOGICAL FIX ---
        
//         if(min_len > n){
//             cout << -1 << endl;
//         } else {
//             cout << min_len << endl;
//         }
//     }
// }

// #include <bits/stdc++.h> using namespace std; int main() {
// int t;
// cin >> t;     
// for(int test = 0; test < t; test++) { 
//             int n; 
//             cin >> n; 
//             string s; 
//             cin >> s; 
//             int totalA = 0, totalB = 0; 
//             for(char c : s) { 
//                     if(c == 'a') totalA++; 
//                     else totalB++; 
//             } 
//             int D = totalA - totalB; 
//             if(D == 0) { 
//                     cout << 0 << endl; 
//                     continue; 
//             } 
//             map<int, int> m; 
//             m[0] = 0; 
//             int cur = 0; 
//             int min_len = n + 1; 
//             for(int i = 1; i <= n; i++) { 
//                     char c = s[i - 1]; 
//                     cur += (c == 'a' ? 1 : -1); 
//                     int target = cur - D;             auto it = m.find(target);             if(it != m.end()) {                 int j = it->second;                 int len = i - j;                 if(len < min_len) min_len = len;             }             m[cur] = i;         }         if(min_len == n) {             cout << -1 << endl;         } else {             cout << min_len << endl;         }     }     return 0; }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using ld = long double;
// using vll = vector<ll> ;
// using vvll = vector<vll> ;
// int main() {

//     ll t;
//     cin>>t;
//     while(t--) {
//         ll n;
//         cin>>n;
//         string s;
//         cin>>s;
//         // ll Acount =0;
//         // ll Bcount = 0;
//         unordered_map<char, ll> countm;
//         for(ll i=0; i<s.length(); i++){
//             countm[s[i]]++;
//         }


//         ll dif=countm['a']-countm['b'];
//         if(dif==0) {
//             cout<<0<<endl;

            
//         }
//         else{

//         unordered_map<ll, ll> m;
//         m[0] = 0;
//         ll c = 0;
//         ll ans = n+1;
//         bool flag=false;
//         for(ll i = 1; i <= n; i++) {
//             char ch = s[i-1];
            
//             if(ch=='a'){
//                 c++;
//             }
//             else{
//                 c--;
//             }
            
//             ll dif2 = c - dif;
//             auto it = m.find(dif2);
//             if(it != m.end()){
//                 ll j = it->second;
//                 ll curr_length = i - j;
//                 if(curr_length<ans) {
//                     ans = curr_length;
//                     if(ans==n){
//                         flag=true;
//                         break;
//                     }
//                 }
//             }
//             m[c]=i;
//         }
//         if(!flag) {
//             cout<<ans<<endl;
//         } else {
//             cout<<-1<<endl;
//         }

//         }

//     }
    
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int totalA = 0, totalB = 0;
        for (char ch : s) {
            if (ch == 'a') totalA++;
            else totalB++;
        }

        int D = totalA - totalB;
        if (D == 0) {
            cout << 0 << "\n";
            continue;
        }

        // Step 1: Build prefix difference array
        vector<int> prefix(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            prefix[i] = prefix[i - 1] + (s[i - 1] == 'a' ? 1 : -1);
        }

        // Step 2: Store positions of each prefix value
        // Instead of direct hashmap, we group them for lookup.
        unordered_map<int, vector<int>> positions;
        positions.reserve(n * 2);
        for (int i = 0; i <= n; ++i) {
            positions[prefix[i]].push_back(i);
        }

        // Step 3: Iterate and use binary search to find smallest matching range
        int best = n + 1;
        for (int r = 1; r <= n; ++r) {
            int needed = prefix[r] - D;
            auto it = positions.find(needed);
            if (it == positions.end()) continue;
            const vector<int> &indices = it->second;

            // find rightmost prefix index less than r
            auto pos = upper_bound(indices.begin(), indices.end(), r - 1);
            if (pos != indices.begin()) {
                --pos;
                int l = *pos;
                best = min(best, r - l);
            }
        }

        if (best > n - 1) cout << -1 << "\n";
        else cout << best << "\n";
    }
    return 0;
}
