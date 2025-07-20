#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;
    cin>>a>>b;
    long long suma=0;
    while(a){
        suma+=a%10;
        a/=10;
    }
    long long sumb=0;
    while(b){
        sumb+=b%10;
        b/=10;
    }
    cout<<max(suma, sumb);
}