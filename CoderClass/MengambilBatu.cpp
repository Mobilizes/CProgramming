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

int n, m;
int a[102], b[102];
int dp[102][100002];

int solve(int i, int w){
    if(w<=0) return 0;
    if(i==0 and w>0) return INTMAX + 1;
    if(dp[i][w]!=-1) return dp[i][w];
    return dp[i][w] = min(solve(i-1, w-b[i])+a[i], solve(i-1, w));
}   

int main()
{
    Mob;
    cin >> n >> m;
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=n; i++) cin >> b[i];
    memset(dp, -1, sizeof(dp));
    int s = 0, res = 0;
    while(res<=m){
        s++;
        res = solve(n, s);
    }
    cout << s-1 << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

/*
Deskripsi
Pak Chanek adalah seorang ahli geologi. Pada suatu saat, dia pergi ke sebuah hutan untuk melakukan risetnya. Tak disangka, dia terperosok di suatu tempat dan terjebak di dalam gua! Untungnya, gua tersebut dipenuhi banyak batu yang dibutuhkan Pak Chanek untuk melengkapi risetnya. Setelah dihitung, dalam gua tersebut terdapat N batu yang dinomori dari 1 sampai N. Masing-masing batu memiliki berat Wi dan nilai Vi yang merupakan ukuran keberhargaan suatu batu bagi ahli geologi. Tentu Pak Chanek ingin mengambil sebanyak mungkin batu. Sayangnya, tas yang dimiliki Pak Chanek hanya mampu mengangkut beban maksimum M kg. Pak Chanek ingin mengambil batu-batu tersebut sehingga nilai total yang didapatkannya maksimal. Karena batu-batu tersebut sangat banyak, Pak Chanek bingung batu mana saja yang harus diambil. Sebagai temannya, Anda diminta untuk membantu Pak Chanek memilih batu-batu yang harus diambil sehingga nilai total dari batu-batu tersebut maksimal.

Format Masukan
Baris pertama berisi dua buah bilangan bulat, N dan M, banyak batu dan beban maksimum yang dapat dibawa tas Pak Chanek.
Baris kedua berisi N bilangan bulat, Wi, yang merupakan berat batu ke-i.
Baris ketiga berisi N bilangan bulat, Vi, yang merupakan nilai batu ke-i.

Format Keluaran
Sebuah bilangan bulat yang merupakan nilai total maksimum yang dapat diperoleh Pak Chanek.

Contoh Masukan 1
4 10
100 5 3 6
100 1 3 2
Contoh Keluaran 1
5
Batasan
1 <= N <= 100
1 <= M <= 109
1 <= Wi <= 107
1 <= Vi <= 1000
*/