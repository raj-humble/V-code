//raj_orton
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<lli,lli>

signed main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        if(n == 0) {
            cout << 0 << endl;
            continue;
        }

        lli ans = (n - 1) * 33 + 36;

        cout << ans << endl;

    }

	return 0;
}
