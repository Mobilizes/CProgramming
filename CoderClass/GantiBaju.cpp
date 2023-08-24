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
    double p; cin >> p; p /= 100;
    if(p==0){
        cout << 0.0 << el;
        return 0;
    }
    double x = 1-p;
    double res = p/(1.0-x*x);
    cout << setprecision(9) << res << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

/*
Rama merupakan salah satu keponakan kesayangan Pak Chanek. Sayangnya, Rama memiliki kebiasaan buruk, yaitu malas mandi. Biasanya, untuk menghilangkan bau badan, Rama "mandi" dengan menggunakan parfum (jangan ditiru!). Karena ia malas mandi, ia juga malas mengganti bajunya. Masalahnya, jika ia tidak mengganti bajunya, maka orang-orang akan sadar dan nama baiknya akan hancur. Oleh karena itu, terkadang ia mengganti bajunya, dengan probabilitas mengganti baju untuk setiap harinya adalah X. Jika hari ini adalah tanggal ganjil, berapakah kemungkinan Rama mengganti baju untuk pertama kalinya di hari dengan tanggal ganjil?

 

Asumsikan bahwa tidak ada pergantian bulan, sehingga tanggal pasti terus menerus bergantian ganjil-genap-ganjil-genap dan seterusnya.

Format Masukan
Satu baris berisi sebuah bilangan bulat P, yang menandakan bahwa X atau probabilitas Rama mengganti baju adalah P/100.

Format Keluaran
Satu baris berisi sebuah bilangan nyata, kemungkinan Rama mengganti bajunya untuk pertama kali di tanggal ganjil. Jawaban dianggap benar jika kesalahan absolut atau kesalahan relatif tidak melebihi 10-6.

Contoh Masukan
50
Contoh Keluaran
0.666666667
Batasan
0 ≤ P ≤ 100
*/