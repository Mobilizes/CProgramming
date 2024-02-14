#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el '\n'

bool compare(const pair<int,int> &a, const pair<int,int> &b){
    return (a.second > b.second);
}

int main(int argc, char const* argv[]){
    Mob;
    tcs(){
        int n, m; cin >> n >> m;
        vector<pair<int, int>> vec(n);
        for(int i=0; i<n; i++){
            string s; cin >> s;
            vec[i].first = s.length();
            int j = s.length() - 1;
            for(; j>=0; j--){
                if(s[j]!='0') break;
            }
            vec[i].second = s.length() - j - 1;
        }
        sort(vec.begin(), vec.end(), compare);
        bool swtch = true;
        int sum = 0;
        for(int i=0; i<n; i++){
            if(swtch){
                sum += abs(vec[i].first - vec[i].second);
            } else{
                if(i<n-1){
                    vec[i+1].first = vec[i].first + vec[i+1].first;
                    vec[i+1].second = min(vec[i].second, vec[i+1].second);
                } else{
                    sum += vec[i].first;
                }
            }
            swtch = !swtch;
        }
        if(sum>=m+1) cout << "Sasha" << el;
        else cout << "Anna" << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/