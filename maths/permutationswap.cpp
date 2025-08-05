#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        long long m = 0;
        for(long long i=0; i<n; i++){
            if(a[i]==(i+1)){
                continue;
            }
            
                
                m = __gcd(m, abs(a[i]-(i+1)));
            
        }
        cout<<m<<endl;
    }
}