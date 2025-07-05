//Number of Smaller

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    
    
    int i=0;
    
    for(int j=0; j<m; j++){

        while(i<n&&a[i]<b[j]){

                i++;            
                
        }
        cout<<i<<" ";
        
    }



}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, m;
//     cin>>n>>m;
//     vector<int> a(n);
//     vector<int> b(m);
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     for(int i=0; i<m; i++){
//         cin>>b[i];
//     }
 
    
//     int j=0;
//     int i=0;
//     int count=0;
//     while(j<m){
 
//         while(i<n&&a[i]<b[j]){
                
//                 i++;            
//                 count++;
                
                
            
//         }
//         cout<<count<<" ";
//         j++;
//     }
 
 
 
// }