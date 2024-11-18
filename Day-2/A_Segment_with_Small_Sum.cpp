#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,s;
    cin>>n>>s;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=0,ans=0;
    long long int sum=0;
    while(j<n){
        sum=sum+a[j];
        if(sum<=s){
            ans=max(ans,j-i+1);
        }else{
            sum=sum-a[i];
            i++;
        }
        j++;
    }
    cout<<ans;
}