#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define forinc(a,b,c) for(ll a = b; a < c; a++)
#define fordec(a,b,c) for(ll a = b; a >= c; a--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod 1000000007

int n;
vector<string> names;

int swaptoback(int i, int step){
    if(i==0) return step;
    if(names[i]<names[i-1]){
        swap(names[i], names[i-1]);
        return swaptoback(i-1, step+1);
    }
    return step;
}

int main()
{
    Mob;
    cin >> n;
    forinc(i,0,n){
        string s; cin >> s;
        names.push_back(s);
        cout << names.size() - swaptoback(i, 0) << endl;
    }
    return 0;
}