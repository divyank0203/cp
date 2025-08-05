#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        
        long long n;
        cin>>n;
        vector<long long> a(n);
        vector<pair<long long, long long>> mp;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            mp.push_back({a[i], i+1});
        }
        sort(mp.begin(), mp.end());
        long long cunt=0; 
        for(long long i=0; i<n-1; i++){
            long long f1 = mp[i].first;
            long long i1 = mp[i].second;
            for(long long j=i+1; j<n; j++){
            long long f2 = mp[j].first;
            long long i2 = mp[j].second;
                if(f1*f2==i1+i2){
                    cunt++;
                }
                else {
                    if(f1*f2>2*n){
                    break;
                }
            }
            }
        }
        cout<<cunt<<endl;
    }
}