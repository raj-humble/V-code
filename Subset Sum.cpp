//raj_orton
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<lli,lli>

signed main() {

    int t;
    cin >> t;

    while(t--) {

        int n, k;
        cin >> n >> k;

        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
	}
        sort(a, a+n);
        reverse(a, a+n);

        int sum = 0;
        for(int i = 0; i < k; i++) {
            sum += a[i];
	} 

        cout << sum << endl;

    }

	return 0;
}
