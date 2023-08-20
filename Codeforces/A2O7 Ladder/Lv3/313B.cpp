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

string s; int m;
vector<int> arr(1, 0);

int main()
{
    Mob;
    cin >> s; cin >> m;
    int n = s.length();
    int temp = 0;
    for(int i=0; i<n-1; i++){
        if(s[i]==s[i+1]) temp++;
        arr.push_back(temp);
    }
    for(int i=0; i<m; i++){
        int l, r; cin >> l >> r;
        cout << arr[r-1] - arr[l-1] << endl;
    }
    return 0;
}

// codeforces.com/problemset/problem/313/B