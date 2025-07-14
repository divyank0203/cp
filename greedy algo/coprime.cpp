#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n+1);
        unordered_map<int, int> m;

        int sum=-1;
        for(int i=1; i<=n; i++){
            cin>>a[i];
            m[a[i]]=i;
        }
        for(auto it : m){
            int f = it.first;
            for(auto it2 : m){
                int s = it2.first;
                if(__gcd(f,s)==1){
                    sum = max(sum, it.second + it2.second);
                }
            }
        }
        

        
        cout<<sum<<endl;
    }
}