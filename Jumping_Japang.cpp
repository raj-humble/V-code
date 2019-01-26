#include <bits/stdc++.h>
using namespace std;

#define lli long long
#define pii pair<lli,lli>

int main() {

    lli t;
    cin >> t;

    while(t--) {

        lli n;
        cin >> n;

        lli a[n+1];
        for(int i = 1; i <= n ;i++)
            cin >> a[i];

        vector<lli> dp(n+1, -12345678910LL);

        dp[0] = 0;
        for(int i = 1; i <= n; i++) {
            if(i >= 1)
                dp[i] = max(dp[i], dp[i - 1] + a[i]);
            if(i >= 2)
                dp[i] = max(dp[i], dp[i - 2] + a[i]);
            if(i >= 3)
                dp[i] = max(dp[i], dp[i - 3] + a[i]);
        }

        cout << dp[n] << endl;

    }

	return 0;
}
