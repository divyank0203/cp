#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string ns = to_string(n);
        bool flag = true;
        ll lun = ns.length();
        for(ll i=1; i<ns.length(); i++){
            if(ns[i]==ns[i-1]){
                continue;
            }
            else{
                flag = false;
                break;
            }
        }
        if(!flag||(lun%2!=0)){
            cout<<0<<endl;
        }
        else{
            if(lun==2){
                cout<<1<<endl<<ns[0]-'0'<<endl;

            }
            else if(lun==4){
                cout<<2<<endl<<ns[0]-'0'<<ns[0]-'0'<<" "<<ns[0]-'0'<<0<<ns[0]-'0'<<endl;
            }
            else if(lun==6){
                cout<<2<<endl<<ns[0]-'0'<<ns[0]-'0'<<ns[0]-'0'<<" "<<ns[0]-'0'<<0<<ns[0]-'0'<<0<<ns[0]-'0'<<endl;
            }
            else if(lun==8){
                cout<<3<<endl;
                for(ll i=0; i<4; i++){
                    cout<<ns[0]-'0';
                }
                cout<<" ";
                for(ll i=0; i<7; i++){
                    if(i%2==0){
                        cout<<ns[0]-'0';
                    }
                    else{
                        cout<<0;
                    }
                }
                cout<<" ";
                for(ll i=0; i<2; i++){
                    cout<<ns[0]-'0';
                }
                for(ll i=0; i<2; i++){
                    cout<<0;
                }
                for(ll i=0; i<2; i++){
                    cout<<ns[0]-'0';
                }
                cout<<endl;
            }
            else if(lun==10){
                cout<<2<<endl;
                for(ll i=0; i<5; i++){
                    cout<<ns[0]-'0';
                }
                cout<<" ";
                for(ll i=0; i<9; i++){
                    if(i%2==0){
                        cout<<ns[0]-'0';
                    }
                    else{
                        cout<<0;
                    }
                }
                cout<<endl;
            }
            else if(lun==12){
                cout<<3<<endl;
                for(ll i=0; i<6; i++){
                    cout<<ns[0]-'0';
                }
                cout<<" ";
                for(ll i=0; i<11; i++){
                    if(i%2==0){
                        cout<<ns[0]-'0';
                    }
                    else{
                        cout<<0;
                    }
                }
                cout<<" ";
                for(ll i=0; i<3; i++){
                    cout<<ns[0]-'0';
                }
                for(ll i=0; i<3; i++){
                    cout<<0;
                }
                for(ll i=0; i<3; i++){
                cout<<ns[0]-'0';
                }
                cout<<endl;
                
            }
            else if(lun==14){
                 cout<<2<<endl;
                for(ll i=0; i<7; i++){
                    cout<<ns[0]-'0';
                }
                cout<<" ";
                for(ll i=0; i<13; i++){
                    if(i%2==0){
                        cout<<ns[0]-'0';
                    }
                    else{
                        cout<<0;
                    }
                }
                cout<<endl;
            
            }
            else if(lun==16){
                 cout<<4<<endl;
                for(ll i=0; i<8; i++){
                    cout<<ns[0]-'0';
                }
                cout<<" ";
                for(ll i=0; i<15; i++){
                    if(i%2==0){
                        cout<<ns[0]-'0';
                    }
                    else{
                        cout<<0;
                    }
                }
                cout<<" ";
                    for(ll i=0; i<2; i++){
                    cout<<ns[0]-'0';
                }
                for(ll i=0; i<2; i++){
                    cout<<0;
                }
                for(ll i=0; i<2; i++){
                    cout<<ns[0]-'0';
                }

                for(ll i=0; i<2; i++){
                    cout<<0;
                }
                for(ll i=0; i<2; i++){
                    cout<<ns[0]-'0';
                }
                for(ll i=0; i<2; i++){
                    cout<<0;
                }
                for(ll i=0; i<2; i++){
                    cout<<ns[0]-'0';
                }
                cout<<" ";
                for(ll i=0; i<4; i++){
                    cout<<ns[0]-'0';
                }
                for(ll i=0; i<4; i++){
                    cout<<0;
                }
                for(ll i=0; i<4; i++){
                    cout<<ns[0]-'0';
                }

                cout<<endl;
            
            }
            else if(lun==18){
                cout<<3<<endl;
                for(ll i=0; i<9; i++){
                    cout<<ns[0]-'0';
                }
                cout<<" ";

                
                for(ll i=0; i<3; i++){
                    cout<<ns[0]-'0';
                }
                for(ll i=0; i<3; i++){
                    cout<<0;
                }
                for(ll i=0; i<3; i++){
                cout<<ns[0]-'0';
                }
                for(ll i=0; i<3; i++){
                    cout<<0;
                }
                for(ll i=0; i<3; i++){
                cout<<ns[0]-'0';
                }
                cout<<" ";
                                for(ll i=0; i<17; i++){
                    if(i%2==0){
                        cout<<ns[0]-'0';
                    }
                    else{
                        cout<<0;
                    }
                }
                cout<<endl;
                
            }
        }

    }
}