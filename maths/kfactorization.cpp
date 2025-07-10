#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, k;
    cin>>n>>k;
    int i=2;
    vector<long long> v;
    while(n!=1){
        if(n%i==0){
            v.push_back(i);
            n/=i;
        }
        else{
            i++;
        }
    }

    if(v.size()<k){
        cout<<-1;
    }
    else if(v.size()==k){
        for(auto it: v){
            cout<<it<<" ";
        }
    }
    else{
        int d=((v.size()-k));
        for(int j=1; j<=d; j++){
            v[v.size()-2]*=v[v.size()-1];
            v.pop_back();
        }
        for(auto it: v){
            cout<<it<<" ";
        }
    }
}