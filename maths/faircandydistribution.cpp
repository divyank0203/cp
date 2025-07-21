#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long k;
    cin>>n>>k;
    

    
    vector<pair<long long, long long>> cit(n);
    for(int i=0; i<n; i++){
        cin >> cit[i].first;
        cit[i].second=i;
    }
    sort(cit.begin(), cit.end());
    vector<long long> ans(n, k/n);
    int r=k%n;
    for(int i=0; i<r; i++){
        ans[cit[i].second]++;
    }
    for(int i=0; i<n; i++){
        cout << ans[i] <<endl;
    }
    


}