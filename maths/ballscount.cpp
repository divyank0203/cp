#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, a, b;
    cin>>n>>a>>b;
    long long c=0;
    long long sum=0;
    
    if(a==0){
        cout<<0;
    }
    else{
    while(sum<=n+a||sum<=n+b){
        sum+=a;
        if(sum<=n){
            c+=sum;
        }
        else if(sum>a){
            c+=(n-(sum-a));
            break;
        }
        sum+=b;

    }
    cout<<c;
}
}