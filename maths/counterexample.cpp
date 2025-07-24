#include<bits/stdc++.h>
using namespace std;
int main(){
    long long l,r;
    cin>>l>>r;
    if(r-l<2){
        cout<<-1<<endl;
    }
    else if(l%2==1&&(r-l)==2){
        cout<<-1<<endl;
    }
    else{
        long long a,b,c;
        if(l%2==0){
            cout<<l<<" "<<l+1<<" "<<l+2<<endl;
        }
        else{
            cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
        }
    }
}