#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m;
    cin>>n>>m;
    vector<long long> a(5);
    vector<long long> b(5);
    long long count=0;
    for(int i = 1; i <= n; i++){
        a[i%5]++;
    }
    
    for(int i = 1; i <= m; i++){
        b[i%5]++;
    }

    for(int i=0; i<5; i++ ){
        if(i==0){
            count+=a[i]*b[i];
        }
        else{
            count+=a[i]*b[5-i];
        }
    }

    cout<<count;
    
}