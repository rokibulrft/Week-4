#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, s;
    cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long int l = 0, r = 0, ans = 0, sum = 0;
    while(r<n) {
        sum += a[r];
        while (sum >= s) {
            ans += (n - r);
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << ans;
}
