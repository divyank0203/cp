#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,k;
    cin>>a>>b>>k;
    int s=min(a,b);
    int div=1;
    int k1=0;
    for(int i=s; i>=1; i--){
        if(a%i==0&&b%i==0){
            k1++;

        }
                if(k1==k){
                div=i;
                break;
            }
    }
    cout<<div;
}