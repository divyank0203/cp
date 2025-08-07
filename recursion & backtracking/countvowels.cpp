

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int count(string s, int c){
    if(c>s.size()){
        return 0;
    }
    if(s[c]=='a'||s[c]=='e'||s[c]=='i'||s[c]=='o'||s[c]=='u'){
        return 1+count(s,c+1);
    }
    else{
        return count(s,c+1);
    }
}
int main(){
string st;
getline(cin, st);
cout<<count(st, 0)<<endl;

}