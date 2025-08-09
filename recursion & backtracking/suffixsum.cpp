#include<bits/stdc++.h>
using namespace std;
long long solve(long long i, vector<long long>& a,  long long m){
    if(m==0){
        return 0;
    }
    else{
    return a[i]+solve(i-1, a, m-1);
    }

}
int main(){
long long n, m;
cin>>n>>m;
vector<long long> a(n);
for(long long i=0; i<n; i++){
    cin>>a[i];
}
long long ans = solve(n-1, a, m);
cout<<ans;
}