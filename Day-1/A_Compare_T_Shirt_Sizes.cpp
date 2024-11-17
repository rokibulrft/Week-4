#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        char typeA = a.back(), typeB = b.back();
        if (typeA == typeB) {
            int countX_A = a.size() - 1, countX_B = b.size() - 1;
            if (typeA == 'S') {
                if (countX_A > countX_B) cout << "<\n";
                else if (countX_A < countX_B) cout << ">\n";
                else cout << "=\n";
            } else if (typeA == 'L') {
                if (countX_A > countX_B) cout << ">\n";
                else if (countX_A < countX_B) cout << "<\n";
                else cout << "=\n";
            } else {
                cout << "=\n";
            }
        } else {
            if (typeA == 'M') {
                if (typeB == 'S') cout << ">\n";
                else cout << "<\n";
            } else if (typeB == 'M') {
                if (typeA == 'S') cout << "<\n";
                else cout << ">\n";
            } else {
                if (typeA == 'S') cout << "<\n";
                else cout << ">\n";
            }
        }
    }
    return 0;
}
