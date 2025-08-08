#include<bits/stdc++.h>
using namespace std;
int solve(int i, vector<int> a, int sum, int m){
    if(i<m-1){
        return sum;
    }
    
    return solve(i-1, a, sum+=a[i], m);
    

}
int main(){
int n, m;
cin>>n>>m;
vector<int> a(n);
for(int i=0; i<n; i++){
    cin>>a[i];
}
int ans = solve(n-1, a, 0, m);
cout<<ans;
}