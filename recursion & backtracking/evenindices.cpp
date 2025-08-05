#include<bits/stdc++.h>
using namespace std;
void even(int n, vector<int> a){
    if((n-1)<0){
        return;
    }

    if((n-1)%2==0){
        cout<<a[n-1]<<" ";
    }
    
    even(n-1,a);
    
}

int main(){
    int m;
    cin>>m;
    vector<int> a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    even(m, a);

}