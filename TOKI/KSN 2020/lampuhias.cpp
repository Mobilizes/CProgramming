#include <bits/stdc++.h>
#include <cmath>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#define ll long long

using namespace std;

int main()
{
    ll n, a, b, x, y, result;
    cin >> n >> a >> b;
    x = a*n;
    y = b*n;
    ll lcm = (a * b) / __gcd(a, b);
    result = lcm/a + lcm/b;
    cout << result;
    return 0;
}