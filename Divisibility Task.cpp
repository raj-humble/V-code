#include <bits/stdc++.h>
using namespace std;

#define lli long long
#define pii pair<lli,lli>

int main() {

    int t;
    cin >> t;

    while(t--) {

        string s;
        cin >> s;

        int sum = 0;
        int n = s.size();
        int freq[3] = { };

        for(int i = 0; i < n; i++) {
            int cur = (s[i] - '0');
            sum += cur;
            freq[cur%3]++;
        }

        int ans = 0;
        if(sum % 3 == 1) {
            if(freq[1])
                ans = 1;
            else
                ans = 2;
        }
        if(sum % 3 == 2) {
            if(freq[2])
                ans = 1;
            else
                ans = 2;
        }

        cout << ans << endl;

    }

	return 0;
}
