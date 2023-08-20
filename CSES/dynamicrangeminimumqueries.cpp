#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'

int n, q;
int block_size;
int arr[200000];
int block[450];

void update(int i, int v){
    int block_idx = i/block_size;
    arr[i] = v;
    block[block_idx] = INTMAX;
    for(int i=block_idx*block_size; i<(block_idx+1)*block_size; i++){
        block[block_idx] = min(block[block_idx], arr[i]);
    }
}

int query(int l, int r){
    int res = INTMAX;
    while(l<r and l % block_size != 0 and l != 0){
        res = min(res, arr[l]);
        l++;
    }
    while(l + block_size - 1 <= r){
        res = min(res, block[l/block_size]);
        l += block_size;
    }
    while(l <= r){
        res = min(res, arr[l]);
        l++;
    }
    return res;
}

void init(){
    int block_idx = -1;
    block_size = sqrt(n);
    for(int i=0; i<n; i++){
        if(i % block_size == 0) block_idx++;
        block[block_idx] = min(arr[i], block[block_idx]);
    }
}

int main()
{
    Mob;
    cin >> n >> q;
    for(int i=0; i<450; i++) block[i] = INTMAX;
    for(int i=0; i<n; i++) cin >> arr[i];
    init();
    for(int i=0; i<q; i++){
        int k, a, b; cin >> k >> a >> b;
        if(k==1){
            update(a-1, b);
        } else{
            cout << query(a-1, b-1) << el;
        }
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
https://www.geeksforgeeks.org/square-root-sqrt-decomposition-algorithm/
*/