// check if the string is already sorted or not
// if not then check each element if it is the smallest
// if not then remove it and replace it with min(element+1, 9)


#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ll t;
    cin>>t; 
    while(t--){
        string s;
        cin>>s;
        string s2=s;
        sort(s2.begin(), s2.end());
        if(s==s2){
            cout<<s<<endl;
        }
        else{
            map<char, ll> mp;
            multiset<char> st;
            for(ll i=0; i<s.size(); i++){
                mp[s[i]]++;
                st.insert(s[i]);
            }
            ll k=0;
            while(st.size()){
                if(s[k]!=*(st.begin())){
                    auto it = st.find(s[k]);
                                        if(s[k]<'9'){
                        mp[s[k]]--;
                        mp[s[k]+1]++;
                    }
                    st.erase(it);

                }
                else{
                    st.erase(st.begin());
                }
                k++;
            }
            for(auto it: mp){
                for(ll i=0; i<it.second; i++){
                    cout<<it.first;
                }
            }
            cout<<endl;
            
            
        }
    }
}