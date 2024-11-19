#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        long long int a,b,n,s;
        cin>>a>>b>>n>>s;
        long long int div=s/n;
        if(div>a){
            int rem=s-n*a;
            if(rem<=b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else{
            int rem=s%n;
            if(rem<=b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}