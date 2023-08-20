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


struct TrieNode{
    TrieNode* children[26];
};

int main()
{
    Mob;
    TrieNode* root = new TrieNode();
    string s; cin >> s;
    string goodS; cin >> goodS;
    int k; cin >> k;
    int n = s.length();
    int res = 0;
    for(int i=0; i<n; i++){
        int currBad = 0;
        TrieNode* node = root;
        for(int j=i; j<n; j++){
            int ptr = s[j]-'a';
            if(goodS[ptr]=='0') currBad++;
            if(currBad>k) break;
            if(node->children[ptr]==NULL){
                node->children[ptr] = new TrieNode();
                res++;
            }
            node = node->children[ptr];
        }
    }
    cout << res << endl;
    return 0;
}