#include<bits/stdc++.h>
using namespace std;
int main(){
    

    int n=10;
    int n2=n;
    int t=0;
    
    while(n!=0){
        t|=1;
        n>>=1;
        if(n==0){
            break;
        }
        t<<=1;
    }
    cout<<(t^n2);

}