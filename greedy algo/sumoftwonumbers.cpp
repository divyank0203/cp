#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        vector<int> a;
        while(n){
            a.push_back(n%10);
            n/=10;
        }
        reverse(a.begin(), a.end());
        int c=0;
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<a.size();i++){
            if(a[i]%2==0){
                v1.push_back(a[i]/2);
                v2.push_back(a[i]/2);

            }
            else{
                if(c%2==0){
                    v1.push_back(a[i]/2);
                    v2.push_back((a[i]/2+1));
                    c++;
                }
                else{
                    v2.push_back(a[i]/2);
                    v1.push_back((a[i]/2+1));
                }
            }
        }

        int a1=0;
        for(int i=0; i<v1.size(); i++){
            a1+=a1*10+v1[i];
        }
        int a2=0;
        for(int i=0; i<v2.size(); i++){
            a2=a2*10+v2[i];
        }
        cout<<a1<<" "<<a2<<endl;
        

}
}
