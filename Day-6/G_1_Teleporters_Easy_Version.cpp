#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> a(n + 1);
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pq.push(i + a[i]);
        }

        int count = 0;
        while (!pq.empty() && c >= pq.top())
        {
            c -= pq.top();
            pq.pop();
            count++;
        }

        cout << count << endl;
    }
    return 0;
}
