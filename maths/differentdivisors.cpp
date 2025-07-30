#include<bits/stdc++.h>
using namespace std;
bool isprime(int p){
    for(int i=2;i*i<=p;i++){
        if(p%i==0)return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int c=1;
        int a=1;
        // if(d==1){
        //     cout<<6<<endl;
        // }
        // else if(d==2){
        //     cout<<15<<endl;
        // }
        
            int i=1+d;
            while(c<3){
                
                if(!isprime(i)){
                    i++;
                }
                else{
                    a*=i;
                    
                    i+=d;
                    c++;
                }
            }
            cout<<a<<endl;
        
        


    }

}