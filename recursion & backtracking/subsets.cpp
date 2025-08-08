#include<bits/stdc++.h>
using namespace std;

void helper(int i, vector<int>& nums, vector<int>& curSet, vector<vector<int>>& subsets) {
    if (i >= nums.size()) {
        subsets.push_back(vector<int>(curSet));
        return;
    }
    // decision to include nums[i]
    curSet.push_back(nums[i]);
    helper(i + 1, nums, curSet, subsets);
    curSet.pop_back();

    // decision NOT to include nums[i]
    helper(i + 1, nums, curSet, subsets);
}
vector<vector<int>> subsetsWithoutDuplicates(vector<int>& nums) {
    vector<int> curSet;
    vector<vector<int>> subsets;
    helper(0, nums, curSet, subsets);
    return subsets;
}



int main(){
vector<int> a = {1,2,4};
vector<int> c;
vector<vector<int>> res = subsetsWithoutDuplicates(a);
for(int i=0; i<res.size(); i++){
    for(int j=0; j<res.size(); j++){
        cout<<res[i][j]<<" ";
    }
    cout<<endl;
}
}