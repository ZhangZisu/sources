#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#define BUF 1048576
char _1[BUF], _2[BUF], *_3 = _1 + BUF, *_4 = _2;
inline char gc() {
    if (_3 == _1 + BUF) fread(_1, 1, BUF, stdin), _3 = _1;
    return *_3++;
}
inline void pc(char c) {
    if (_4 == _2 + BUF) fwrite(_2, 1, BUF, stdout), _4 = _2;
    *_4++ = c;
}
inline void rt() {
    fwrite(_2, 1, _4 - _2, stdout);
    exit(0);
}
inline int $() {
    register int x = 0;
    register char ch = gc();
    while (!isdigit(ch)) ch = gc();
    for (; isdigit(ch); ch = gc()) x = (x << 1) + (x << 3) + (ch ^ 48);
    return x;
}
inline char _() {
    register char ch = gc();
    while (!isalpha(ch)) ch = gc();
    return ch;
}
inline void ps(const char *s) {
    for (; *s; s++) pc(*s);
    pc(10);
}
#define MAXN 1000010
const int MOD1 = 1000000009;
const int MOD2 = 1000000007;
const int MOD3 = 998244353;
const int BASE1 = 29;
const int BASE2 = 31;
const int BASE3 = 37;
int n, m, a[MAXN], as1, as2, as3, asp, as;
int hash1[MAXN], hash2[MAXN], hash3[MAXN], pow1[MAXN], pow2[MAXN], pow3[MAXN];
inline int cb1(int x, int y) {
    return x + y >= MOD1 ? x + y - MOD1 : x + y;
}
inline int cb2(int x, int y) {
    return x + y >= MOD2 ? x + y - MOD2 : x + y;
}
inline int cb3(int x, int y) {
    return x + y >= MOD3 ? x + y - MOD3 : x + y;
}
inline int getHash1(int l, int r) {
    return cb1(hash1[r], MOD1 - 1LL * hash1[l - 1] * pow1[r - l + 1] % MOD1);
}
inline int getHash2(int l, int r) {
    return cb2(hash2[r], MOD2 - 1LL * hash2[l - 1] * pow2[r - l + 1] % MOD2);
}
inline int getHash3(int l, int r) {
    return cb3(hash3[r], MOD3 - 1LL * hash3[l - 1] * pow3[r - l + 1] % MOD3);
}
int main() {
    pow1[0] = pow2[0] = pow3[0] = 1;
    for (register int i = 1; i < MAXN; i++) pow1[i] = 1LL * pow1[i - 1] * BASE1 % MOD1;
    for (register int i = 1; i < MAXN; i++) pow2[i] = 1LL * pow2[i - 1] * BASE2 % MOD2;
    for (register int i = 1; i < MAXN; i++) pow3[i] = 1LL * pow3[i - 1] * BASE3 % MOD3;
    for (int t = $(); t; t--) {
        n = $();
        m = (n - 1) / 2;
        as = 0;
        for (register int i = 1; i <= n; i++) a[i] = _() - 'A';
        if (n % 2 == 0) {
            ps("NOT POSSIBLE");
            continue;
        }
        for (register int i = 1; i <= n; i++) hash1[i] = cb1(1LL * hash1[i - 1] * BASE1 % MOD1, a[i]);
        for (register int i = 1; i <= n; i++) hash2[i] = cb2(1LL * hash2[i - 1] * BASE2 % MOD2, a[i]);
        int HSL1 = getHash1(1, m);
        int HSL2 = getHash2(1, m);
        int HSL3 = getHash3(1, m);
        int HSR1 = getHash1(m + 2, n);
        int HSR2 = getHash2(m + 2, n);
        int HSR3 = getHash3(m + 2, n);
        for (register int i = 1, hsl1, hsl2, hsl3, hsr1, hsr2, hsr3; i <= n; i++) {
            if (i == m + 1) {
                hsl1 = HSL1;
                hsl2 = HSL2;
                hsl3 = HSL3;
                hsr1 = HSR1;
                hsr2 = HSR2;
                hsr3 = HSR3;
            } else if (i <= m) {
                hsl1 = cb1(1LL * getHash1(1, i - 1) * pow1[m - i + 1] % MOD1, getHash1(i + 1, m + 1));
                hsl2 = cb2(1LL * getHash2(1, i - 1) * pow2[m - i + 1] % MOD2, getHash2(i + 1, m + 1));
                hsl3 = cb3(1LL * getHash3(1, i - 1) * pow3[m - i + 1] % MOD3, getHash3(i + 1, m + 1));
                hsr1 = HSR1;
                hsr2 = HSR2;
                hsr3 = HSR3;
            } else {
                hsl1 = HSL1;
                hsl2 = HSL2;
                hsl3 = HSL3;
                hsr1 = cb1(1LL * getHash1(m + 1, i - 1) * pow1[n - i] % MOD1, getHash1(i + 1, n));
                hsr2 = cb2(1LL * getHash2(m + 1, i - 1) * pow2[n - i] % MOD2, getHash2(i + 1, n));
                hsr3 = cb3(1LL * getHash3(m + 1, i - 1) * pow3[n - i] % MOD3, getHash3(i + 1, n));
            }
            if (hsl1 == hsr1 && hsl2 == hsr2 && hsl3 == hsr3) {
                if (!as) {
                    as = 1, as1 = hsl1, as2 = hsl2, as3 = hsr3, asp = i;
                } else {
                    if (as1 != hsl1 || as2 != hsl2 || as3 != hsr3) {
                        ps("NOT UNIQUE");
                        as = 2;
                        break;
                    }
                }
            }
        }
        if (!as) {
            ps("NOT POSSIBLE");
        } else if (as == 1) {
            for (int i = 1; i <= m; i++) {
                if (i == asp) {
                    m++;
                } else {
                    pc(a[i] + 'A');
                }
            }
            pc(10);
        }
    }
    rt();
}