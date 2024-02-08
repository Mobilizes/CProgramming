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
        int n, m, k; cin >> n >> m >> k;
        set<int> a;
        set<int> b;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            if(x<=k) a.insert(x);
        }
        for(int i=0; i<m; i++){
            int x; cin >> x;
            if(x<=k) b.insert(x);
        }
        int A = 0, B = 0;
        set<int> ans;
        for(auto& i : a){
            if(b.find(i)==b.end()){
                A++;
                ans.insert(i);
            }
        }
        for(auto& i : b){
            if(a.find(i)==a.end()){
                B++;
                ans.insert(i);
            }
        }
        for(auto& i : a){
            if(b.find(i)!=b.end() && ans.find(i)==ans.end()){
                ans.insert(i);
                if(A<B) A++;
                else B++;
            }
        }
        for(auto& i : b){
            if(a.find(i)!=a.end() && ans.find(i)==ans.end()){
                ans.insert(i);
                if(A<B) A++;
                else B++;
            }
        }
        // cout << A << ' ' << B << ' ';
        if(A>k/2 || B>k/2){
            cout << "NO" << el;
            continue;
        }
        if(ans.size()==k) cout << "YES" << el;
        else cout << "NO" << el;
    }
    return 0;
}

/*
2 3 5 6
1 3 4 5
*/


/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/