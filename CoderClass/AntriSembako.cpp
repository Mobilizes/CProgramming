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

queue<string> q;

int main()
{
    Mob;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int c; cin >> c;
        if(c==1){
            string s; cin >> s;
            q.push(s);
        } else{
            cout << q.front() << el;
            q.pop();
        }
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

/*
Budi baru saja mendapat PR yang melelahkan dari gurunya:

Diberikan N, A, dan B. Tuliskan semua bilangan bulat positif, tidak lebih besar dari N, dan habis dibagi A atau habis dibagi B. Semua bilangan harus ditulis tepat sekali, dan terurut dari kecil ke besar.

Namun, anda penasaran mengapa Budi bisa tahu bahwa PR ini akan melelahkan. Ternyata, Budi sudah mengetahui banyaknya bilangan yang akan ia tulis. Sekarang, anda yang ingin tahu, sebenarnya ada berapa banyak bilangan yang akan Budi tulis?

Format Masukan
Satu baris berisi 3 buah bilangan bulat N, A, dan B, sesuai deskripsi soal.

Format Keluaran
Satu baris berisi sebuah bilangan bulat, banyak bilangan yang akan Budi tulis.

Contoh Masukan
12 3 4
Contoh Keluaran
6
Penjelasan
Barisan bilangan yang akan Budi tulis adalah 3, 4, 6, 8, 9, 12. Ada 6 bilangan.

Batasan
1 ≤ N ≤ 1015
1 ≤ A, B ≤ 109
*/