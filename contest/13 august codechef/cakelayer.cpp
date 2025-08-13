#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll a, b;
    cin>>a>>b;
    if(a==b){
        cout<<(a-1)*b<<endl;
    }
    else{
        ll m = max(a, b);
        ll mi = min(a, b);
        cout<<mi*(m-1)<<endl;
    }
}