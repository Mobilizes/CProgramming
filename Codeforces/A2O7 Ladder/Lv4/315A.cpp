#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)


int main()
{
    Mob;
    int n; cin >> n;
    pair<int, int> arr[n+1];
    int key[1001];
    for(int i=1; i<=1000; i++) key[i] = 0;
    int lockedbottle = n;
    for(int i=0; i<n; i++){
        cin >> arr[i].first >> arr[i].second;
        key[arr[i].second]++;
    }
    for(int i=0; i<n; i++){
        if(arr[i].second==arr[i].first) key[arr[i].second]--;
        if(key[arr[i].first] > 0) lockedbottle--;
        if(arr[i].second==arr[i].first) key[arr[i].second]++;
    }
    cout << lockedbottle << endl;
    return 0;
}

// codeforces.com/problemset/problem/315/A