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
        int n, k; cin >> n >> k;
        int arr[n]; init(arr, n, -1);
        int itr = 0;
        int last = 0;
        bool flag = 0;
        int l=1, r=n;
        while (1) {
            if (arr[itr]!=-1) {
                break;
            }
            if (!flag) arr[itr] = l++;
            else arr[itr] = r--;

            if (itr+k>=n){
                itr = last + 1;
                flag = !flag;
                last++;
            }
            else itr += k;
        }
        for(int i=0; i<n; i++) cout << arr[i] << ' ';
        cout << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/