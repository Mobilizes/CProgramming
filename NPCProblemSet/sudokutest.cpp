#include <bits/stdc++.h>
#include <windows.h>
#include <thread>
#include <chrono>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

int field[9][9];
map<int, vector<int>> mp;

void initmp(){
    // mp[1] = {};
    // mp[2] = {};
    // mp[3] = {};
    // mp[4] = {};
    // mp[5] = {};
    // mp[6] = {};
    // mp[7] = {};
    // mp[8] = {};
    // mp[9] = {};

    // mp[1] = {};
    // mp[2] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    // mp[3] = {3, 6, 9, 12, 15, 18};
    // mp[4] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    // mp[5] = {5, 10, 15};
    // mp[6] = {2, 3, 4, 6, 8, 9, 10, 12, 14, 15, 16, 18};
    // mp[7] = {7, 14};
    // mp[8] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    // mp[9] = {3, 6, 9, 12, 15, 18};

    // mp[1] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // mp[2] = {1, 3, 5, 7, 9};
    // mp[3] = {1, 2, 4, 5, 7, 8};
    // mp[4] = {1, 3, 5, 7, 9};
    // mp[5] = {1, 2, 3, 4, 6, 7, 8, 9};
    // mp[6] = {1, 5, 7};
    // mp[7] = {1, 2, 3, 4, 5, 6, 8, 9};
    // mp[8] = {1, 3, 5, 7, 9};
    // mp[9] = {1, 2, 4, 5, 7, 8};

    mp[1] = {1};
    mp[2] = {2};
    mp[3] = {3};
    mp[4] = {4};
    mp[5] = {5};
    mp[6] = {6};
    mp[7] = {7};
    mp[8] = {8};
    mp[9] = {9};
    
    // mp[10] = {2, 4, 5, 6, 8, 10, 12, 14, 15, 16, 18};
    // mp[11] = {11};
    // mp[12] = {2, 3, 4, 6, 8, 9, 10, 12, 14, 15, 16, 18};
    // mp[13] = {13};
    // mp[14] = {2, 4, 6, 7, 8, 10, 12, 14, 16, 18};
    // mp[15] = {3, 5, 6, 9, 10, 12, 15, 18};
    // mp[16] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    // mp[17] = {17};
    // mp[18] = {2, 3, 4, 6, 8, 9, 10, 12, 14, 15, 16, 18};
}

bool fits(int i, int j, int num){
    /* check subgrid */

    int startRow = i - i % 3, 
            startCol = j - j % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++){
            int curr = field[i+startRow][j+startCol];
            if (find(begin(mp[curr]), end(mp[curr]), num) != end(mp[curr]))
                return false;
        }

    /* check row */
    for(int k=0; k<9; k++){
        // if(k==j) continue;
        int curr = field[i][k];
        if (find(begin(mp[curr]), end(mp[curr]), num) != end(mp[curr])){
            return false;
        }
    }

    /* check colomn */
    for(int k=0; k<9; k++){
        // if(k==i) continue;
        int curr = field[k][j];
        if (find(begin(mp[curr]), end(mp[curr]), num) != end(mp[curr])){
            return false;
        }
    }
    return true;
}

bool solveSudoku(int i, int j){
    // cout << i << ' ' << j << el;
    if(j==9 && i==8){
        return true;
    }
    if(j==9){
        i++;
        j = 0;
    }
    if(field[i][j] > 0) return solveSudoku(i, j+1);
    for(int k=1; k<=9; k++){
        if(fits(i, j, k)){
            field[i][j] = k;
            if(solveSudoku(i, j+1)) return true;
        }
        field[i][j] = 0;
    }
    return false;
}

int main(int argc, char const* argv[]){
    Mob;
    initmp();
    for(int i=0; i<9; i++) for(int j=0; j<9; j++) cin >> field[i][j];
    solveSudoku(0, 0);
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            printf("%d ", field[i][j]);
        }
        printf(el);
    }
    
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/