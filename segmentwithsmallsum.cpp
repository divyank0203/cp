#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long s;
    cin>>n>>s;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
  
    int segs=0;
    long long sum=0;
    int r=0;
    for(int l=0; l<n; l++){
        while(r<n&&sum+a[r]<=s){
            sum+=a[r];
            r++;
        }
        segs=max(segs, r-l);
        sum-=a[l];
    }
    cout<<segs;
}