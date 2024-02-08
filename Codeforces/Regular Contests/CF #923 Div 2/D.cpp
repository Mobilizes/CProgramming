#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int a[n];
        vector<int> b(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(i > 0) {
                if(a[i] == a[i - 1]) {
                    b[i] = b[i - 1];
                }
                else {
                    b[i] = b[i - 1] + 1;
                }
            }
            else {
                b[i] = 1;
            }
        }

        int q;
        cin >> q;

        for(int i=0; i<n; i++) cout << b[i] << ' ';
        cout << "\n";

        while(q--) {
            int l, r;
            cin >> l >> r;

            if(upper_bound(b.begin(), b.end(), b[l - 1]) - b.begin() > r - 1) {
                cout << "-1 -1";
            }
            else {
                cout << l << ' ' << upper_bound(b.begin(), b.end(), b[l - 1]) - b.begin() + 1; 
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}