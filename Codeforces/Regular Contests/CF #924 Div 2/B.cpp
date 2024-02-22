#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el '\n'


int main(int argc, char const* argv[]){
    Mob;
    tcs(){
        int n; cin >> n;
        vector<int> arr(n); for(int i=0; i<n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        arr.resize(unique(arr.begin(), arr.end()) - arr.begin());
        int idx = 0;
        int res = 0;
        for(int i=0; i<arr.size(); i++){
            while(arr[i] - arr[idx] >= n) idx++;
            res = max(res, i-idx+1);
        }
        cout << res << el;
    }
    return 0;
}

// 1 1 1 100 101
// 6 5 4 102 102

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/