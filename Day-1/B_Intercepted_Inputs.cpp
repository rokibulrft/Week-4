#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int a[k];
        multiset<int> st;
        for(int i=0;i<k;i++){
            cin>>a[i];
            if(a[i]<=k-2){
                st.insert(a[i]);
            }
        }
        k=k-2;
        for(auto x:st){
            if(k%x==0 && st.find(k/x)!=st.end()){
                cout<<x<<" "<<k/x<<endl;
                break;
            }
        }
        
    }
}