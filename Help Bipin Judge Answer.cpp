#include <bits/stdc++.h>
using namespace std;

#define lli long long
#define pii pair<lli,lli>

int main() {

    int t;
    cin >> t;

    while(t--) {

        lli a, b;
        cin >> a >> b;

        lli ans = a;
        for(int i = 0; i <= 60; i++)
            if((ans | (1LL << i)) <= b)
                ans = (ans | (1LL << i));

        cout << ans << endl;

    }

	return 0;
}
