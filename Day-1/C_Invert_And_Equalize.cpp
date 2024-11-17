#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int countOne=0,countZero=0;
        for(int i=0;i<n;i++){
            if(s[i]!=s[i+1]){
                if(s[i]=='1') countOne++;
                else countZero++;
            }
        }
        cout<<min(countOne,countZero)<<endl;
    }
}