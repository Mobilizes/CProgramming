#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'

char field[3][3];

bool checkwin(char c){
    if(field[0][0]==c and field[1][1]==c and field[2][2]==c) return true;
    if(field[0][2]==c and field[1][1]==c and field[2][0]==c) return true;
    if(field[0][0]==c and field[1][1]==c and field[2][2]==c) return true;
    if(field[0][0]==c and field[0][1]==c and field[0][2]==c) return true;
    if(field[1][0]==c and field[1][1]==c and field[1][2]==c) return true;
    if(field[2][0]==c and field[2][1]==c and field[2][2]==c) return true;
    if(field[0][1]==c and field[1][1]==c and field[2][1]==c) return true;
    if(field[0][2]==c and field[1][2]==c and field[2][2]==c) return true;
    return false;
}

int main()
{
    Mob;
    string s;
    while(cin >> s){
        if(s=="end") break;
        int x=0, o=0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                field[i][j] = s[3*i+j];
                if(field[i][j]=='X') x++;
                if(field[i][j]=='O') o++;
            }
        }
        bool xwin = checkwin('X'), owin = checkwin('O');
        bool flag = false;
        if((xwin and !owin) and x==o+1) flag = true;
        if((!xwin and owin) and x==o) flag = true;
        if((!xwin and !owin) and (x==o or x==o+1)) flag = true;

        if(!flag) cout << "in";
        cout << "valid\n";
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/