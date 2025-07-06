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

//     int i=0; 
//     int j=0;
//         int cnta;
//         int cntb;
//         int cura;
//         int curb;
//     long long sum=0;
//     while(i<n&&j<m){
//         cnta=0;
//         cntb=0;
//         cura=a[i];
//         curb=b[j];

//         while(i<n&&curb==a[i]){
//             cnta++;
//             i++;
//         }

//         while(j<m&&cura==b[j]){
//             cntb++;
//             i++;
//         }
//         sum+=(1LL*cnta*cntb);
        
//             if(a[i]<b[j]){
//                 i++;
//             }
//             else if(a[i]>b[j]){
//                 j++;
//             }
        


//     }
//     cout<<sum;
    
// }