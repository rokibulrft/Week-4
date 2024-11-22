#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long int l = 0, r = 0, ans = 0;
    map<long long int, long long int> mp;
    while (r < n)
    {
        mp[v[r]]++;
        if (mp.size() > k)
        {
            while (mp.size() > k)
            {
                mp[v[l]]--;
                if (mp[v[l]] == 0)
                {
                    mp.erase(v[l]);
                }
                l++;
            }
            if (mp.size() <= k)
            {
                ans += r - l + 1;
            }
        }
        else
        {
            if (mp.size() <= k)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }
    cout << ans;
}