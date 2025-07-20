#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, a, b;
    cin>>n>>a>>b;
    
        long long total = a+b;
        long long seg = n/total;
        cout<<seg*a + min(n%total, a);
    
    }