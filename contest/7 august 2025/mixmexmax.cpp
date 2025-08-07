#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mex(int a, int b, int c) {
    bool present[4] = {false, false, false, false};

    for (int x : {a, b, c}) {
        if (x >= 0 && x <= 3) {
            present[x] = true;
        }
    }

    for (int i = 0; i <= 3; ++i) {
        if (!present[i]) return i;
    }

    return 4;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        // if(a.size()==3)
        bool ans = true;
        // for(int i=0; i<=n-3; i++){
        //     if(
        //         mex(a[i], a[i+1], a[i+2]) == max({a[i], a[i+1], a[i+2]}) - min({a[i], a[i+1], a[i+2]})
        //     ){
        //         continue;
        //     }
        //     else{
        //         ans = false;
        //     }
        // }
        for(int i=0; i<=n-3; i++){
            if(a[i]==-1&&a[i+1]==-1&&a[i+2]==-1){
                continue;
            }
            
            else if(a[i]==a[i+1]&&a[i+1]==a[i+2]&&a[i]!=0&&a[i+1]!=0&&a[i+2]!=0){
                continue;
            }
            else if(a[i]==-1&&a[i+1]==a[i+2]&&a[i+1]!=0&&a[i+2]!=0){
                continue;
            }
            else if(a[i]==a[i+1]&&a[i+2]==-1&&a[i]!=0&&a[i+1]!=0){
                continue;
            }
            else if(a[i]==a[i+2]&&a[i+1]==-1&&a[i]!=0&&a[i+2]!=0){
                continue;
            }
            else if(a[i]==-1&&a[i+1]==-1&&a[i+2]!=0){
                continue;
            }
            else if(a[i]==-1&&a[i+2]==-1&&a[i+1]!=0){
                continue;
            }
            else if(a[i]!=0&&a[i+1]==-1&&a[i+2]==-1){
                continue;
            }
            else{
                ans = false;
            }
        }
        if(ans==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}