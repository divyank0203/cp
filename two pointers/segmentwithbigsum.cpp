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
    long long sum=0;
     int segs=INT32_MAX;
     int r=0;
     for(int i=0; i<n; i++){
        while(r<n&&sum+a[r]<s){
            sum+=a[r];
            r++;
        }
       if(r<n&&sum+a[r]>=s) {
        segs=min(segs, r-i+1);
    }
        sum-=a[i];
     }
    
    if(segs==INT32_MAX){
        cout<<-1;
    }
    else{
        cout<<segs;
    }

}