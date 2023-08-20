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
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    if(n==1) return (arr[0]==1?0:1);
    int ret = 0;
    for(int i=0; i<n; i++){
        if(arr[i]) {arr[i] = -1; ret++;}
        else arr[i] = 1;
    }
    int res = 0; int temp = 0;
    for(int i=0; i<n; i++){
        temp = max(arr[i], temp+arr[i]);
        res = max(res, temp);
    }
    if(res==0) res = -1;
    cout << ret+res << endl;
    return 0;
}   

// codeforces.com/problemset/problem/327/A