#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)

bool exist = false;
unordered_map<string, vector<string>> rlt;
unordered_map<string, bool> visited;
vector<string> res;

void dfs(string a, string b){
    stack<string> st;
    st.push(b);
    res.push_back(b);
    visited[b] = true;
    while(!st.empty()){
        string curr = st.top();
        st.pop();
        if(curr==a){
            exist = true;
            for(int i=res.size()-1; i>=0; i--) cout << res[i] << endl;
            return;
        }
        for(int i=0; i<rlt[curr].size(); i++){
            if(!visited[rlt[curr][i]]){
                st.push(rlt[curr][i]);
                res.push_back(rlt[curr][i]);
                visited[rlt[curr][i]] = true;
            }
        }
    }
}

int main()
{
    Mob;
    int n, m; cin >> n >> m;
    string a, b;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        rlt[b].push_back(a);
    }
    cin >> a >> b;
    dfs(a, b);
    if(!exist){
        cout << "TIDAK MUNGKIN" << endl;
    }
    return 0;
}