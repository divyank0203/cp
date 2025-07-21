#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long sumo=-1;
    long long sume=-1;
    
    sort(a.begin(), a.end());

    vector<long long> odd;
    vector<long long> even;

    
    for(int i=0;i<n;i++){
        if(a[i]%2==0&&a[i]!=0){
            even.push_back(a[i]);
        }
        else if(a[i]%2!=0){
            odd.push_back(a[i]);
        }
        
    }
    if(odd.size()==1&&even.size()==1){
        cout<<-1<<endl;
    }
    else{
        long long k=odd.size();
        long long m=even.size();
        if(k-2>=0){
            sumo=(odd[k-1]+odd[k-2]);
        }
        if(m-2>=0){
            sume=(even[m-1]+even[m-2]);
        }
        cout<<max(sume, sumo)<<endl;
    }


    
}