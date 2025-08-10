#include<bits/stdc++.h>
using namespace std;
using ll = long long;
long double ncr(long double n, long double r){
    if(r > n) return 0;
    if(r==0){
        return 1;
    }
    return n/r*ncr(n-1, r-1);
}
int main(){
long double n, r;
cin>>n>>r;
cout<<ncr(n, r);
}