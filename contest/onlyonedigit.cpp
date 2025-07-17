#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        
        vector<int> ans;
        while(x){
            ans.push_back(x%10);
            x/=10;
        }
        sort(ans.begin(),ans.end());
        cout<<ans[0]<<endl;
    }
}