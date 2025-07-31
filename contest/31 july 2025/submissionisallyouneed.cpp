#include<bits/stdc++.h>
using namespace std;
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
        sort(a.begin(), a.end());
        if(a[0]!=0&&a.size()>1){
            long long sum = accumulate(a.begin(), a.end(), 0);
            cout<<sum<<endl;
        }

        



        else{
            long long sum = accumulate(a.begin(), a.end(), 0);
            for(int i=0; i<n; i++){
                if(a[i]==0){
                    sum+=1;
                }
            }
            cout<<sum<<endl;
        }
        

        
    }
}