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

ll sum = 0;

void hanoi(int n, int from, int to, int temp){
    if(n>0){
        hanoi(n-1, from, temp, to);
        cout << n << ' ' << from << ' ' << to << el;
        sum++;
        hanoi(n-1, temp, to, from);
    }
}

int main(){
    Mob;
    hanoi(3, 1, 2, 3);
    cout << sum << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/