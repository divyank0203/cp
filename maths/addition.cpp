#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    long long sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    if(sum%2==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}