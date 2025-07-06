//B. Kefa and Company

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, d;
    cin>>n>>d;
    vector<pair<int, int>> ans(n);
    for(int i = 0; i<n; i++){
        
        cin>>ans[i].first>>ans[i].second;
        
    }
    sort(ans.begin(), ans.end());
    long long sum=0;
    int l=0;
    int r=0;
    long long result=0;
    while(r<n){
        if(ans[r].first-ans[l].first<d){
            sum+=ans[r].second;
            result=max(result, sum);
            r++;
            
        }
        else{
            result=max(result, sum);
            sum-=ans[l].second;
            l++;
            
        }
        

    }
    cout<<result;



}