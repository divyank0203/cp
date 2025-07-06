#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long int s;
    cin>>n>>s;
    vector<long long int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    long long int sum=0;
    int r=0;
    long long int cunt=0;
    
    for(int l=0; l<n; l++){

        while(r<n&&a[r]+sum<=s){
            sum+=a[r];
            r++;
        }
        cunt+=(r-l);
        sum-=a[l];
    }
    cout<<cunt;
}