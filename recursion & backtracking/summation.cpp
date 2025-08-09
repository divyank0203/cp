#include<bits/stdc++.h>
using namespace std;
long long solve(long long i, vector<long long> a){
    if(i==0){
        return a[0] ;
    }
    // sum+=a[i];
    else{
    return a[i]+solve(i-1, a);
    }

}
int main(){
long long n;
cin>>n;
vector<long long> a(n);
for(long long i=0; i<n; i++){
    cin>>a[i];
}
long long ans = solve(n-1, a);
cout<<ans;
}