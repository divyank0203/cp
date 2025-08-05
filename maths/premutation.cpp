#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t; while(t--){
        int n;
        cin>>n;
        vector<vector<int>> a(n);
        for(int i=0;i<n;i++){
            for(int j=0; j<n-1; j++){
                cin>>a[i][j];
            }
        }
        vector<int> ans(n);
        for(int i=0; i<n-1; i++){
            vector<int> t(n, 0);
            int m=0;
            for(int j=0; j<n; j++){
                t[a[j][i]]+=1;

                if(t[a[j][i]]==*max_element(t.begin(), t.end())){
                    m=a[j][i];
                }
            }
            ans.push_back(m);
            
        }
        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
}