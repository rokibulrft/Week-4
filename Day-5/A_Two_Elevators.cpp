#include<bits/stdc++.h>
using namespace std;

int  main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        long long int timeA=0,timeB=0;
        timeA=a-1;
        timeB=abs(b-c)+abs(c-1);
        if(timeA>timeB){
            cout<<2<<endl;
        }else if(timeA==timeB){
            cout<<3<<endl;
        }else{
            cout<<1<<endl;
        }
    }
}