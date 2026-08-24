#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<pair<int, int>> a(n);
    set<pair<int, int>> b;
    for(int i=0; i<n; i++){
        cin>>a[i].first>>a[i].second;
    }
    vector<pair<int, int>> ans;
    for(int i=0; i<n; i++){
        pair<int, int> temp = {a[i].second, a[i].first};
        if(b.find(temp)!=b.end()){
            ans.push_back(a[i]);
        }
        b.insert(a[i]);

    }
    if(ans.size()==0){
        cout<<-1<<endl;
    }
    else{
        for(auto it: ans){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }

    return 0;
}