#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
vector<char> a(n);
vector<int> b(n);
for(int i=0; i<n; i++){
    cin>>a[i];
}
for(int i=0; i<n; i++){
    cin>>b[i];
}
int sum=0;
int prev=-1;

for(int i=0; i<n;){
    if(a[i]=='0'){
        i++;
        continue;
    }
    else if(a[i]=='1'&&i>0&&a[i-1]!='1'){

    prev=b[i-1];
    
    while(a[i]-'0'==1&&i<n){
        sum+=max(prev, b[i]);
        prev=min(prev, b[i]);
        i++;
    }
}
    else{
        sum+=b[i];
        i++;
}
}

cout<<sum<<endl;



}
}