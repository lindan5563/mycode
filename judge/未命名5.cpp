#include <bits/stdc++.h>
using namespace std;
const int N = 1020202;
int n, m, a[N], s, s1, s2;
int main() {
    cin >> n;
    a[++s] = 1;
    s1 = 1, s2 = 1;
    for (; s <= n;) {
        if (2 * a[s1] + 1 > 3 * a[s2] + 1) {
            if (a[s] != 3 * a[s2] + 1)
                a[++s] = 3 * a[s2] + 1;
            ++s2;
        } else {
            if (a[s] != 2 * a[s1] + 1)
                a[++s] = 2 * a[s1] + 1;
            ++s1;
        }
    }
    for (int i = 1; i <= n; i++) cout << a[i] << endl;
    return 0;
}
