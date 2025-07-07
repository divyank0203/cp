#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long s;
    cin>>n>>s;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];

    }

    
    
    long long sum = 0;
    long long cunt=0;
    

    long long l,r=0;
    for(l=0; l<n; l++){
        while(sum+a[r]<s&&r<n){
            sum+=a[r];
            r++;
        }
        if(sum+a[r]>=s&&r<n){
            cunt+=(n-r);
        }
        sum-=a[l];
    }
    cout<<cunt;

}