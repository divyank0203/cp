#include<bits/stdc++.h>
using namespace std;
bool notprime(long long t){
    for(long long i=2; i<=t/2; i++){
        if(t%i==0){
            return true;
            break;
        }
    }
    return false;
}
int main(){
    long long n;
    cin>>n;
    if(n%2==0&&notprime(n/2)){
        cout<<n/2<<" "<<n/2<<endl;
    }
    else{

        for(long long i=4; i<n; i+=2){
            if(notprime(n-i)==true){
                cout<<i<<" "<<n-i<<endl;
                break;
            }
        }
    }
}