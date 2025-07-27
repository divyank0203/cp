#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n, c;
        cin>>n>>c;
        vector<long long> a(n);
        for(long long i=0; i<n; i++){
            cin>>a[i];
        }
        int i=0;
        long long p;
        long long coins=0;
        sort(a.begin(), a.end(), greater<>());
        for(long long j=0; j<n; j++){
            p=pow(2, i);
            a[j]*=p;
            if(a[j]>c){
                coins++;
                continue;
            }
            else{
                i++;
            }
        }
        cout<<coins<<endl;
    }
}