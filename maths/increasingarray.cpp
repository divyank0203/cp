#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    long long count=0;
    for(int i=1; i<n; i++){
        while(a[i]<a[i-1]){
            a[i]++;
            count++;
        }
    }
    cout<<count;
}