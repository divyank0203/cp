#include<bits/stdc++.h>
using namespace std;
using ll = long long;
long double sum(vector<long double> a, long double i){
    if(i<0){
        return 0;
    }
    else{
    return a[i]/a.size() + sum(a, i-1);
    }
}
int main(){
long double n;
cin>>n;
vector<long double> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
long double s=sum(a, n-1);
cout<<fixed<<setprecision(10)<<s;
}