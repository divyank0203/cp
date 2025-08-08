#include<bits/stdc++.h>
using namespace std;
int solve(int i, vector<int> a, int sum){
    if(i<0){
        return sum;
    }
    // sum+=a[i];
    return solve(i-1, a, sum+=a[i]);
    

}
int main(){
int n;
cin>>n;
vector<int> a(n);
for(int i=0; i<n; i++){
    cin>>a[i];
}
int ans = solve(n-1, a, 0);
cout<<ans;
}