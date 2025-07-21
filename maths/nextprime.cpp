#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
        for(int i=2; i<=n/2; i++){
            if(n%i==0) {return false;
            break;}
            else{
                continue;
            }
        }
        return true;
}
int main(){
    long long k;
    cin>>k;
    if(isprime(k)){
        cout<<k<<endl;
    }
    else{
        while(++k){
            if(isprime(k)){
                cout<<k<<endl;
                break;
            }
        }
    }
    
}