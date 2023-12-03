#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'

int n;
int arr[200005];
int temp = 0;

int rec(int l, int r, int prevmn){
    // cout << l << ' ' << r << el;
    int mn = arr[l];
    if(l==0) mn = min(mn, temp);
    for(int i=l; i<=r; i++) cout << arr[i] << ' ';
    cout << el;
    for(int i=l+1; i<=r; i++) mn = min(mn, arr[i]);
    int res = mn - prevmn;
    cout << mn << ' ' << prevmn << el;
    if(l==r) return res;
    bool same = true;
    for(int i=l; i<=r; i++) if(arr[i]!=mn) same = false;
    if(same) return res;
    bool flag = false;
    int idx = l;
    for(int i=l; i<=r; i++){
        if(!flag){
            if(i==0 and temp!=mn){
                flag = true;
                idx = i;
            }
            else if(arr[i]!=mn){
                flag = true;
                idx = i;
            }
        } else{
            if(arr[i]==mn){
                flag = false;
                cout << idx << ' ' << i-1 << " mn" << el;
                res += rec(idx, i-1, mn);
            }
        }
    }
    if(flag){
        cout << idx << ' ' << r << " flag" << el;
        res += rec(idx, r, mn);
    }
    return res;
}

int main(){
    Mob;
    tcs(){
        cin >> n;
        for(int i=0; i<n; i++) cin >> arr[i];
        temp = arr[0];
        arr[0]--;
        cout << rec(0, n-1, 1) << el << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/