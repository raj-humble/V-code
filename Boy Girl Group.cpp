#include <bits/stdc++.h>
using namespace std;

#define lli long long
#define pii pair<lli,lli>

int main() {

    lli t;
    cin >> t;

    while(t--) {

        string s;
        cin >> s;

        int ans = 1;
        for(int i = 1; i < s.size(); i++) {
            if(s[i] == s[i-1])
                ans++;
        }

        cout << ans << endl;

    }

	return 0;
}
