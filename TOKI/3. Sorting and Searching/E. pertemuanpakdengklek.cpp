#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define forinc(a,b,c) for(ll a = b; a < c; a++)
#define fordec(a,b,c) for(ll a = b; a < c; a--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod 1000000007


int main()
{
    Mob;
    int n; cin >> n;
    string arr[11][n];
    map<int, int> mp;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        int stringLength = s.length();
        arr[stringLength][mp[stringLength]] = s;
        mp[stringLength]++;
    }
    for(int i=1; i<=10; i++){
        sort(arr[i], arr[i] + mp[i]);
    }
    for(int i=1; i<=10; i++){
        for(int j=0; j<sizeof(arr[i]) / sizeof(arr[i][0]); j++){
            if(arr[i][j]!="") cout << arr[i][j] << endl;
        }
    }
    return 0;
}