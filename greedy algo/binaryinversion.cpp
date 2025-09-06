// three cases possible:-
// change the first occurence of 0 to 1
// change the first occurence of 1 from the end to 0
// keep the original array as it is
// find the max of all three cases


#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }

        if(n==1){
            cout<<0<<endl;
        }
        else{
            vector<ll> b = a;
            vector<ll> c = a;


            

            for(ll i=0; i<n; i++){
                if(a[i]==0){
                    a[i]=1;
                    break;
                }
            }
                
            
            
            
            unordered_map<ll, ll> mp1;
            for(ll i=0; i<n; i++){
                mp1[a[i]]++;
            }
        ll c1=mp1[1];
        ll ans1=0;
        for(ll i=n-1; i>=0; i--){
            if(a[i]==0){
                ans1+=c1;

            }else{
                c1--;
                if(c1==0){
                    break;
                }
            }
        }


      for(ll i=n-1; i>=0; i--){
                if(b[i]==1){
                    b[i]=0;
                    break;
                }
      }
      
            
                

            

            unordered_map<ll, ll> mp2;
            for(ll i=0; i<n; i++){
                mp2[b[i]]++;
            }
        ll c2=mp2[1];
        ll ans2=0;
        for(ll i=n-1; i>=0; i--){
            if(b[i]==0){
                ans2+=c2;

            }else{
                c2--;
                if(c2==0){
                    break;
                }
            }
        }
        
        b[n-1]=1;
        

            unordered_map<ll, ll> mp3;
            for(ll i=0; i<n; i++){
                mp3[c[i]]++;
            }
        ll c3=mp3[1];
        ll ans3=0;
        for(ll i=n-1; i>=0; i--){
            if(c[i]==0){
                ans3+=c3;

            }else{
                c3--;
                if(c3==0){
                    break;
                }
            }
        }
        cout<<max({ans1, ans2, ans3})<<endl;


    }

    }
}