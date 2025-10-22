#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n; 
        string s;
        cin>>s;
        ll f=-1;
        ll l=-1;
        ll count=0;
        for(ll i=0; i<n; i++){
            if(s[i]=='1'&&f==-1){
                f=i;
                l=i;
                count++;
            }
            else if(s[i]=='1'){
                l=i;
                count++;
            }
        }
        if(count==2||count==3){
            if(l-f+1==count){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
    

        }
    }
}
    

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     // Solution By Larning Unique
//     int scenarioTotal;
//     cin >> scenarioTotal;

//     while (scenarioTotal--) {
//         // https://t.me/AllContestSolutions
//         // Solution By Larning Unique
//         int binarySize;
//         cin >> binarySize;
//         string binaryStream;
//         cin >> binaryStream;

//         int firstOne = -1, lastOne = -1, oneCount = 0;

//         for (int scanIndex = 0; scanIndex < binarySize; ++scanIndex) {
//             if (binaryStream[scanIndex] == '1') {
//                 if (firstOne == -1) firstOne = scanIndex;
//                 lastOne = scanIndex;
//                 ++oneCount;
//             }
//         }

//         // Solution By Larning Unique
//         bool compactCluster = (oneCount == 2 || oneCount == 3) &&
//                               (lastOne - firstOne + 1 == oneCount);

//         cout << (compactCluster ? "NO\n" : "YES\n");

//         // https://t.me/AllContestSolutions
//     }

//     // Solution By Larning Unique
//     return 0;
// }

// // Solution By Larning Unique
// // https://t.me/AllContestSolutions
// // Solution By Larning Unique

// explain this to me