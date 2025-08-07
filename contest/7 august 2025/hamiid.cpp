#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        string s;
        getline(cin, s);
        int bf =0;
        int af=0;
        for(int i=0; i<(x-1); i++){
            if(s[i]=='#'){
                bf++;
            }
        }
        for(int i=x; i<n; i++){
            if(s[i]=='#'){
                af++;
            }
        }
        if(x==1||x==n||(bf==0&&af==0)){
            cout<<1<<endl;
        }
        

    }
}