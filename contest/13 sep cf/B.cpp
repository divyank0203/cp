

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        vector<vector<ll>> a(n, vector<ll>(2));
        for(ll i=0; i<n; i++){
            cin>>a[i][0]>>a[i][1];
        }
       ll count =0;
       ll one=0; 
       ll two=0;
       for(ll i=0; i<n; i++){
        if(((a[i][0]-one)%2!=0&&abs(a[i][1]-two)%2!=0)||((a[i][0]-one)%2==0&&abs(a[i][1]-two)%2==0)){
            count+=(a[i][0]-one);

        }
        else if(((a[i][0]-one)%2==0&&abs(a[i][1]-two)%2!=0)||((a[i][0]-one)%2!=0&&abs(a[i][1]-two)%2==0)){
            count+=(a[i][0]-one-1);
        }
        one=a[i][0];
        two=a[i][1];
       }
       if(a[n-1][0]<m){
        count+=(m-a[n-1][0]);
       }
        cout<<count<<endl;

}
}