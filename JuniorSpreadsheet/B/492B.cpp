#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int main(){
    Mob;
    int n, l; cin >> n >> l;
    double arr[n]; for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    vector<double> vec;
    vec.push_back(arr[0]-0);
    vec.push_back(l-arr[n-1]);
    for(int i=1; i<n; i++) vec.push_back((arr[i]-arr[i-1])/2);
    sort(vec.begin(), vec.end());
    printf("%.10lf\n", vec[vec.size()-1]);
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/