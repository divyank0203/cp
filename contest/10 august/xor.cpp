#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int x = a[0];
    for(int i=1; i<n; i++){
        x^=a[i];
    }
    cout<<x<<endl;
}