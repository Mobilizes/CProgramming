#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

int digitSum(int x){
    int res = 0;
    while(x>0){
        res += x%10;
        x /= 10;
    }
    return res;
}

void solve(){
    int n, q; cin >> n >> q;
    vector<int> arr(n+1);
    set<int> st;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]>9) st.insert(i);
    }
    while(q--){
        int t; cin >> t;
        if(t==1){
            int l, r; cin >> l >> r; l--, r--;
            int lst = l;
            while(!st.empty()) {
                auto it = st.lower_bound(lst);
                if(it == st.end() || *it > r) break;
                arr[*it] = digitSum(arr[*it]);
                int paiu = *it;
                st.erase(it);
                if(arr[paiu] > 9) st.insert(paiu);
                lst = paiu + 1;
            }
        } else{
            int x; cin >> x;
            cout << arr[x-1] << el;
        }
    }
}

int main(int argc, char const* argv[]){
    Mob;
    tcs() solve();
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/