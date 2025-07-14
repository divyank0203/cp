#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(i==0){
                ans.push_back(a[i]);
                
            }
            else if(i>0){

                if(i!=0&&ans[i-1]>=a[i]&&a[i]!=0){
                cout<<-1;
                break;
            }

            else{
                ans.push_back(a[i]+ans[i-1]);
                
            }            



            }

            

        }
        if(ans.size()==n){
        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
    }

        cout<<endl;
    }
}