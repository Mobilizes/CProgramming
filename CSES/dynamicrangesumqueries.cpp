#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int n, q;
ll arr[200000];
ll block[450];
int block_size;

void update(int i, int v){
    int block_idx = i/block_size;
    block[block_idx] += v - arr[i];
    arr[i] = v;
}

ll query(int l, int r){
    ll res = 0;
    while(l<r and l%block_size!=0 and l!=0){
        res += arr[l];
        l++;
    }
    while(l+block_size-1<=r){
        res += block[l/block_size];
        l += block_size;
    }
    while(l<=r){
        res += arr[l];
        l++;
    }
    return res;
}

void init(){
    int blockidx = -1;
    block_size = sqrt(n);
    for(int i=0; i<n; i++){
        if(i%block_size==0) blockidx++;
        block[blockidx] += arr[i];
    }
}

int main()
{
    Mob;
    cin >> n >> q;
    for(int i=0; i<n; i++) cin >> arr[i];
    init();
    for(int i=0; i<q; i++){
        int x, a, b; cin >> x >> a >> b;
        if(x==2){
            cout << query(a-1, b-1) << el;
        } else{
            update(a-1, b);
        }
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/