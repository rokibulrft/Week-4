#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>> n;
        string s;
        cin>> s;
        string decoded;
        for(int i =n-1; i>= 0;i--) {
            if (s[i] == '0') {
                int num =(s[i-2] -'0') * 10 + (s[i-1] -'0');
                decoded.push_back('a' + num - 1);
                i-= 2;
            } else {
                decoded.push_back('a'+ (s[i] -'0')-1);
            }
        }
        reverse(decoded.begin(), decoded.end());
        cout << decoded << endl;
    }
    return 0;
}
