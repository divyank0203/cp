#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<bool> ld(15);
vector<bool> rd(15);
vector<bool> row(7);
vector<vector<char>> ch(8, vector<char>(8));
ll c=0;
void solve(ll j){
    if(j==8){
        c++;
        return;
    }
    for(ll i=0; i<8; i++){

        //checking the availability of box
        if(ld[i-j+7]==0&&rd[i+j]==0&&row[i]==0&&ch[i][j]=='.'){
            
            //filling in the boxes around the queen
            ld[i-j+7]=1;
            rd[i+j]=1;
            row[i]=1;
            
            //recursion call
            solve(j+1);

            // backtrack if we don't get valid square
            ld[i-j+7]=0;
            rd[i+j]=0;
            row[i]=0;
            
        }
    }
}
void in(){
    for(ll i=0; i<8; i++){
        for(ll j=0; j<8; j++){
            cin>>ch[i][j];
        }
    }
    solve(0);
    cout<<c<<endl;
}
int main(){
in();
}