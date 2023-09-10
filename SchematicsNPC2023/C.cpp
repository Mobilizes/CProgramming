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


int main()
{
    Mob;
    int r=1, c=1, y=1;
    while(true){
        cin >> r >> c >> y;
        if(r==0 and c==0 and y==0) break;
        vector<vector<char>> labirin(r+5, vector<char>(c+5, '!'));
        vector<vector<int>> jejak(r+5, vector<int>(c+5, 0));
        for(int i=1; i<=r; i++) for(int j=1; j<=c; j++) cin >> labirin[i][j];
        int a = 1, b = y, totaljejak = 0;
        bool found = true;
        while(labirin[a][b]!='!'){
            if(jejak[a][b]!=0){
                found = false;
                break;
            }
            jejak[a][b]++;
            totaljejak++;
            if(labirin[a][b]=='U') a--;
            else if(labirin[a][b]=='S') a++;
            else if(labirin[a][b]=='B') b--;
            else if(labirin[a][b]=='T') b++;
        }
        int ja = a, jb = b;
        int deadend = 0;
        if(!found){
            do{
                deadend++;
                if(labirin[ja][jb]=='U') ja--;
                else if(labirin[ja][jb]=='S') ja++;
                else if(labirin[ja][jb]=='B') jb--;
                else if(labirin[ja][jb]=='T') jb++;
            } while(ja!=a or jb!=b);
            cout << 1 << ' ' << totaljejak - deadend << ' ' << 0 << ' ' << deadend << el;
        } else cout << 1 << ' ' << totaljejak << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/