#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, u;
    cin>>n>>u;
    vector<double> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int i=0;
    
    int k=0;
    double result=0;
    for(i=0; i<n; i++){
        while(a[k]-a[i]<=u&&k<n){
            k++;
        }
        if(k-1>0&&k-i>=3){
            result=max(result, ((a[k-1]-a[i+1])/(a[k-1]-a[i])));
        }
    }


    if(result>0){
        cout<<fixed<<setprecision(20)<<result;
    }
    else{
        cout<<-1;
    }
}