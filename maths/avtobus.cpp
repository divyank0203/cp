#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2!=0||n<4){
            cout<<-1<<endl;
        }
        else{
            long long mini = LONG_LONG_MAX;
            long long maxi = LONG_LONG_MIN;
            if(n%4==0&&n%6==0){
                mini = n/6;
                maxi = n/4;
             
            }
            else if(n%4==0&&n%6==4){
                maxi = n/4;
                mini = (((n%6)/4) + (n-(n%6))/6);
            }
            else if(n%4==0&&n%6==2){
                maxi = n/4;
                mini = ((((n%6)/4) + (n-(n%6))/6))+1;
            }
            else if(n%4!=0&&n%6==0){
                mini = n/6;
                maxi = (n-2)/4;
            }
                else if(n%4==2&&n%6==2){
                mini = (n/6)+1;
                maxi = (n-2)/4;
            }
            else if(n%6==4&&n%4==2){
                maxi = (n-2)/4;
                mini = ((n%6)/4) + (n-(n%6))/6;
            }

            cout<<mini<<" "<<maxi<<endl;
}

    }
}