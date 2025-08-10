#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll sum = LONG_LONG_MIN;
void knap(vector<ll>& wt, vector<ll>& val, ll weight, ll n, ll w, ll csum, ll i){
    if(i>=n){
        if(weight<=w){
         sum=max(sum, csum);
        }
         return;
        
    }
    

     knap(wt, val, weight+wt[i], n, w, csum+val[i], i+1);

    
     knap(wt, val, weight, n, w, csum, i+1);
    
    
}
int main(){
ll n, w;
cin>>n>>w;
vector<ll> wt(n), val(n);
for(int i=0;i<n;i++){
    cin>>wt[i];
    cin>>val[i];
}

knap(wt, val, 0, n, w, 0, 0 );
cout<<sum<<endl;

}