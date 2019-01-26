#include <bits/stdc++.h>
using namespace std;

#define lli long long
#define pii pair<lli,lli>

int main() {

    lli t;
    cin >> t;

    while(t--) {

        lli n, k;
        cin >> n >> k;

        pii p[n];
        lli ma = -1;

        for(lli i = 0; i < n; i++) {
            cin >> p[i].first >> p[i].second;
            ma = max(ma, p[i].second);
        }

        sort(p, p + n);

        lli ans = max(p[0].first, k - ma);
        for(int i = 1; i < n; i++)
            ans = max(ans, p[i].first - p[i-1].second);

        cout << ans << endl;

    }

	return 0;
}
