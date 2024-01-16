#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t-- > 0) {
        int n, a, b;
        long long f;
        cin >> n >> f >> a >> b;
        
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        for (int i = 1; i <= n; i++) {
            long long requiredCharge = 1LL * (arr[i] - arr[i-1]) * a;

            if (requiredCharge > b) {
                f -= b;
            } else {
                f -= requiredCharge;
            }

            if (f <= 0) {
                cout << "NO" << endl;
                break;
            }

            if (i == n) {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
