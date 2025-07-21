#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    long long sum=0;
    int g=0;
    for(int i=1; i<=k; i++){
        for(int j=1; j<=k; j++){
           g=__gcd(i, j);
           for(int d=1; d<=k; d++){
            sum+=__gcd(g, d);
           }
        }
    }
    cout<<sum<<endl;
}