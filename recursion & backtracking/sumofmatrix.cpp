#include<bits/stdc++.h>
using namespace std;
void solve(int i, int j, vector<vector<int>>& a, vector<vector<int>>& b, vector<int>& curr, vector<vector<int>>& ans){
    if(j>=a.size()){
        ans.push_back(curr);
        while(j--&(!curr.empty())){
            curr.pop_back();
        }
        return;
    }
    if(j>=a.size()&&i>=a[0].size()){
        return;
    }
    curr.push_back(a[i][j]+b[i][j]);
    solve(i, j+1, a, b, curr, ans);
    solve(i+1, j, a, b, curr, ans);
    solve(i+1, j+1, a, b, curr, ans);

}

vector<vector<int>> sum(vector<vector<int>>& a, vector<vector<int>>& b){
    vector<int> curr;
    vector<vector<int>> ans;
    solve(0, 0, a, b, curr, ans);
    return ans;
}
int main(){
vector<vector<int>> a;
vector<vector<int>> b;
int r, c;
cin>>r>>c;
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cin>>a[i][j];
    }
}
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cin>>b[i][j];
    }
}
vector<vector<int>> ans=sum(a, b);
for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
}