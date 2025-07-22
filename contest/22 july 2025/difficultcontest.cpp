#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int j=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='T'){
                swap(s[i], s[j]);
                j++;
            }
        }
        


        
        
        
        cout<<s<<endl;
    }
}