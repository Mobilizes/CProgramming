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


deque<string> dq;

int main()
{
    Mob;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int q; cin >> q;
        string s;
        if(q==1){
            cin >> s;
            dq.push_front(s);
        } else if(q==2){
            cin >> s;
            dq.push_back(s);
        } else if(q==3){
            cout << dq.front() << el;
            dq.pop_front();
        } else{
            cout << dq.back() << el;
            dq.pop_back();
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
Deskripsi
Bekerja sama seringkali mempercepat pekerjaan, akan tetapi, terkadang yang terjadi justru sebaliknya jika kerja sama tidak berjalan dengan baik.

Pada antri sembako yang lalu, hanya terdapat satu petugas yang mengatur antrian. Menjelang siang hari, datang satu petugas baru, yang juga ingin ikut memerintah. Namun, yang terjadi justru kekacauan, karena persepsi depan dan belakang kedua petugas ini berlawanan! Untuk kali ini, anda memandang dari sudut pandang petugas pertama. Akibat datangnya petugas kedua, sekarang terdapat 4 jenis perintah, yang dapat dikodekan sebagai berikut:

1 nama, berarti orang dengan nama tersebut masuk di depan antrian.
2 nama, berarti orang dengan nama tersebut masuk di belakang antrian.
3, berarti orang yang berada di depan antrian keluar.
4, berarti orang yang berada di belakang antrian keluar.
Untuk setiap operasi 3 dan 4, nama orang tersebut akan dicatat (agar tidak dapat mengambil sembako berkali-kali). Apa isi catatan petugas sembako?

Format Masukan
Baris pertama berisi sebuah bilangan bulat Q, banyak perintah.

Q baris selanjutnya berisi perintah, sesuai deskripsi soal.

Format Keluaran
Untuk setiap perintah 3 dan 4, keluarkan nama orang yang keluar dari antrian.

Contoh Masukan
3
1 chanek
2 dengklek
4
Contoh Keluaran
dengklek
Batasan
1 ≤ Q ≤ 10.000
Panjang nama tidak akan melebihi 10 karakter, dan hanya akan terdiri dari karakter 'a' sampai 'z'.
Dijamin antrian tidak kosong saat dilakukan perintah 3 dan 4.
*/