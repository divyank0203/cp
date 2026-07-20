#include<bits/stdc++.h>
using namespace std;
int main(){
    string day;
    getline(cin, day);
    int ndays;
    cin>>ndays;
    int ans=0;
    if(day=="Monday"){
        int temp=0;
        if(ndays>=6){
            temp=6;
            ans++;
        }
        while(temp<=ndays){
            temp+=7;
            if(temp<=ndays){
                ans++;
            }
        }
    }
    else if(day=="Tuesday"){
        int temp=0;
        if(ndays>=5){
            temp=5;
            ans++;
        }
        while(temp<=ndays){
            temp+=7;
            if(temp<=ndays){
                ans++;
            }

        }

    }
    else if(day=="Wednesday"){
        int temp=0;
        if(ndays>=4){
            temp=4;
            ans++;
        }
        while(temp<=ndays){
            temp+=7;
            if(temp<=ndays){
                ans++;
            }
        }
    }
    else if(day=="Thursday"){
        int temp=0;
        if(ndays>=3){
            temp=3;
            ans++;
        }
        while(temp<=ndays){
            temp+=7;
            if(temp<=ndays){
                ans++;
            }
        }
    }
    else if(day=="Friday"){
        int temp=0;
        if(ndays>=2){
            temp=2;
            ans++;
        }
        while(temp<=ndays){
            temp+=7;
            if(temp<=ndays){
                ans++;
            }
        }
    }
    else if(day=="Saturday"){
        int temp=0; 
        if(ndays>=1){
            temp=1;
            ans++;
        }
        while(temp<=ndays){
            temp+=7;
            if(temp<=ndays){
                ans++;
            }
        }
    }
    else if(day=="Sunday"){
        int temp=0;
        ans=1;
        while(temp<=ndays){
            temp+=7;
            if(temp<=ndays){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}