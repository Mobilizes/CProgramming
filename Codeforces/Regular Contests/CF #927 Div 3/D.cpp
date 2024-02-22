#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

void solve1(vector<int> trump, vector<int> s1, vector<int> s2, vector<int> s3, char t, char a, char b, char c){
    // cout << trump.size() << ' ' << s1.size() << ' ' << s2.size() << ' ' << s3.size() << el;
    vector<string> res;
    if(s1.size() & 1){
        if(trump.size()==0){
            cout << "IMPOSSIBLE" << el;
            return;
        }
        res.push_back(to_string(s1.back()) + a);
        res.push_back(to_string(trump.back()) + t);
        s1.pop_back();
        trump.pop_back();
    }
    if(s2.size() & 1){
        if(trump.size()==0){
            cout << "IMPOSSIBLE" << el;
            return;
        }
        res.push_back(to_string(s2.back()) + b);
        res.push_back(to_string(trump.back()) + t);
        s2.pop_back();
        trump.pop_back();
    }
    if(s3.size() & 1){
        if(trump.size()==0){
            cout << "IMPOSSIBLE" << el;
            return;
        }
        res.push_back(to_string(s3.back()) + c);
        res.push_back(to_string(trump.back()) + t);
        s3.pop_back();
        trump.pop_back();
    }
    if(trump.size() & 1){
        cout << "IMPOSSIBLE" << el;
        return;
    }
    for(int i=0; i<s1.size(); i+=2){
        res.push_back(to_string(s1[i]) + a);
        res.push_back(to_string(s1[i+1]) + a);
    }
    for(int i=0; i<s2.size(); i+=2){
        res.push_back(to_string(s2[i]) + b);
        res.push_back(to_string(s2[i+1]) + b);
    }
    for(int i=0; i<s3.size(); i+=2){
        res.push_back(to_string(s3[i]) + c);
        res.push_back(to_string(s3[i+1]) + c);
    }
    for(int i=0; i<trump.size(); i+=2){
        res.push_back(to_string(trump[i+1]) + t);
        res.push_back(to_string(trump[i]) + t);
    }
    for(int i=0; i<res.size(); i++){
        cout << res[i] << ' ';
        if(i&1) cout << el;
    }
}

void solve(){
    int n; cin >> n;
    char c; cin >> c;
    vector<int> C, D, S, H;
    for(int i=0; i<n*2; i++){
        string t; cin >> t;
        if(t[1]=='C') C.push_back(t[0]-'0');
        if(t[1]=='D') D.push_back(t[0]-'0');
        if(t[1]=='S') S.push_back(t[0]-'0');
        if(t[1]=='H') H.push_back(t[0]-'0');
    }
    // cout << C.size() << ' ' << D.size() << ' ' << S.size() << ' ' << H.size() << el;
    sort(C.begin(), C.end());
    sort(D.begin(), D.end());
    sort(S.begin(), S.end());
    sort(H.begin(), H.end());
    if(c=='C'){
        sort(C.begin(), C.end(), greater<int>());
        solve1(C, D, S, H, 'C', 'D', 'S', 'H');
    }
    if(c=='D'){
        sort(D.begin(), D.end(), greater<int>());
        solve1(D, C, S, H, 'D', 'C', 'S', 'H');
    }
    if(c=='S'){
        sort(S.begin(), S.end(), greater<int>());
        solve1(S, D, C, H, 'S', 'D', 'C', 'H');
    }
    if(c=='H'){
        sort(H.begin(), H.end(), greater<int>());
        solve1(H, D, S, C, 'H', 'D', 'S', 'C');
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