#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long long result = 0;
        int j = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (j < m && b[j] < a[i]) {
                result += a[i] - b[j];
                j++;
            }
        }

        cout << result << endl;
    }

    return 0;
}
