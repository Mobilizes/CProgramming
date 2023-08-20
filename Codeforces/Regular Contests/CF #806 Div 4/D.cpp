#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)


int main()
{
    Mob;
    int t; cin >> t;
    testcases(t){
        int n; cin >> n;
        string arr[n];
        map<string, bool> mp;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            mp[arr[i]] = true;
        }
        for(int i=0; i<n; i++){
            bool flag = false;
            for(int j=1; j<arr[i].size(); j++){
                string pre = arr[i].substr(0, j);
                string suf = arr[i].substr(j, arr[i].size()-j);
                if(mp[pre] and mp[suf]){
                    flag = true;
                    break;
                }
            }
            if(flag) cout << '1';
            else cout << '0';
        }
        cout << endl;
    }
    return 0;
}