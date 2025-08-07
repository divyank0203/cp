#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void digit(long long m){
    if(m==0){
        return;
    }
    digit(m/10);
    cout<<m%10<<" ";
}
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    if(n==0){
        cout<<0<<endl;
    }
    else{
    digit(n);
    cout<<endl;
}
}
}