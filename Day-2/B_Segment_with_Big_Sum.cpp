#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,s;
    cin>>n>>s;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long int l=0,sum=0,ans=INT_MAX;
    for(int r=0;r<n;r++){
        sum+=a[r];
        while (sum-a[l]>=s){
            sum-=a[l];
            l++;
        }
        if(sum>=s){
            ans=min(ans,r-l+1);
        }
    }
    if(ans!=INT_MAX) cout<<ans;
    else cout<<-1;
}