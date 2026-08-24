#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a[i]=x;
    }
    int k;
    cin>>k;
    //do k%n first
    //left rotate:-
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        ans[i]=a[(i+k)%n];
    }

    //right rotation:-
    for(int i=0; i<n; i++){
        ans[i]=a[(i+k-n)%n];

    }
    return 0;
}