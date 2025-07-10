#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    unordered_map<int, int> m;
    for(int i=1; i<n; i++){
        cin>>a[i];
        m[a[i]]++;

    }
    //     for(int i=1; i<n; i++){
    //         a.push_back(i);

    // }
    int ans=0;
    // auto it = m.begin();
    for(int i=1; i<=n; i++){
        if(m.find(i)==m.end()){
            ans=i;
            break;
        }
    }
    cout<<ans;



}