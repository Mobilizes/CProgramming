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


vector<vector<int>> arr(105, vector<int>(105, 0));

int main()
{
    Mob;
    int r, c; cin >> r >> c;
    int res = -INTMAX;
    for(int i=1; i<=r; i++) for(int j=1; j<=c; j++){
        cin >> arr[i][j]; 
        arr[i][j] += arr[i-1][j];
    };
    for(int i=1; i<=r; i++){
        for(int j=i; j<=r; j++){
            int temp = 0;
            for(int k=1; k<=c; k++){
                int v = arr[j][k] - arr[i-1][k];
                temp = max(temp+v, v);
                res = max(temp, res);
                // rupanya kadane's algorithm bangs-
            }
        }
    }
    cout << res << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

/*
Deskripsi
Terdapat sebuah dunia yang berbentuk segi empat dengan ukuran R*C. Dunia tersebut terbagi menjadi petak-petak berukuran 1*1, sehingga terdapat R*C petak. Jika suatu petak para baris i dan kolom j dikuasai, maka yang menguasai akan mendapatkan keuntungan sebesar Aij. Terkadang, menguasai sebuah petak justru mendatangkan kerugian, hal ini ditandai Aij yang bernilai negatif. Seorang penghuni dunia tersebut ingin membuat satu kerajaan yang berbentuk persegi panjang, serta mendapatkan keuntungan sebesar-besarnya. Tentukan keuntungan yang bisa ia dapat!

Format Masukan
Baris pertama berisi dua buah bilangan bulat R dan C, banyak baris dan kolom pada dunia.

R baris selanjutnya berisi C buah bilangan bulat Aij, keuntungan yang didapat dari suatu petak.

Format Keluaran
Satu baris berisi sebuah bilangan bulat, keuntungan maksimum yang bisa didapat.

Contoh Masukan
3 3
3 -2 4
3 -2 4
4 -2 2
Contoh Keluaran
14
Batasan
1 ≤ R, C ≤ 100
-100.000 ≤ Aij ≤ 100.000
*/