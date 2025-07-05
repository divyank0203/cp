#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> b;
    int n;
    cin>>n;
    int t;
    cin>>t;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    int l=0; 
    int r=0;
    int maxi=0;
    int sum=0;
    while(r<b.size()){
        sum+=b[r];
        if(sum<=t){
            
            maxi=max(maxi, r-l+1);
            r++;
        }
        else{
            sum-=b[l];
            l++;
            r++;
        }
    }
    cout<<maxi;
    
}