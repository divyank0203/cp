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
//         if(n%2!=0){
//             a[n/2]=1;

//             ll j=(n-1);
//             for(ll i=0; i<n/2; i++){
//                 a[i]=j;
//                 j-=2;
//             }
//             j=n;
//             for(ll i=(n-1); i>(n/2); i--){
//                 a[i]=j;
//                 j-=2;
//             }
//             for(ll i=0; i<n; i++){
//                 cout<<a[i]<<" ";
//             }
//             cout<<endl;
//         }
//         else{
//             a[(n/2)-1]=1;
//             a[(n/2)]=n;
//             ll j=(n-1);
//             if(n>2){
//             for(ll i=(n/2)-2; i>=0; i--){
//                 a[i]=j;
//                 j-=2;
//             }
//             j=2;
//             for(ll i=(n/2)+1; i<n; i++){
//                 a[i]=j;
//                 j+=2;
//             }

//             }
//                         for(ll i=0; i<n; i++){
//                 cout<<a[i]<<" ";
//             }
//             cout<<endl;
         
//         }
//     }
// }
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(ll i=n; i>=1; i--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
