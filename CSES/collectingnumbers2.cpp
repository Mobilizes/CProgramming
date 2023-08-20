#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) int t; cin >> t; while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int n, m; 
int sum = 1;
pair<int, int> arr[200005];
int mp[200005];

void update(int& a, int& b, int val){
    if(mp[a]>mp[b]) swap(a, b);
    int i = mp[a];
    int j = mp[b];
    if(i>0 and arr[i-1].se>arr[i].se) sum += val;
    if(j<n-1 and arr[j].se>arr[j+1].se) sum += val;
    if(i+1==j){
        if(arr[i].se>arr[j].se) sum += val;
    } else{
        if(arr[i].se>arr[i+1].se) sum += val;
        if(arr[j-1].se>arr[j].se) sum += val;
    }
}


int main()
{
    Mob;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i].fi;
        arr[i].se = i;
    }
    sort(arr, arr+n);
    for(int i=0; i<n; i++) mp[arr[i].se] = i;
    for(int i=1; i<n; i++){
        if(arr[i].se<arr[i-1].se) sum++;
    }
    for(int i=0; i<m; i++){
        int a, b; cin >> a >> b;
        a--; b--;
        update(a, b, -1);
        swap(arr[mp[a]].se, arr[mp[b]].se);
        swap(mp[a], mp[b]);
        update(a, b, 1);
        cout << sum << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/