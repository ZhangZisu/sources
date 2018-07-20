#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#define MOD 998244353
#define G 3
const int MAXN = 1 << 18;

inline int fuck(int x, int p) {
    register int y = 1;
    for (; p; p >>= 1) {
        if (p & 1) y = 1LL * y * x % MOD;
        x = 1LL * x * x % MOD;
    }
    return y;
}
inline void NTT(int *a, int n) {
    for (int i = 1, j = 0; i < n - 1; i++) {
        for (int t = n; ~j & t; j ^= t) t >>= 1;
        if (i < j) std::swap(a[i], a[j]);
    }
    for (int i = 1; i < n; i <<= 1) {
        int t = i << 1, wn = fuck(G, (MOD - 1) / t);
        for (int j = 0; j < n; j += t) {
            for (int k = 0, w = 1; k < i; k++, w = 1LL * w * wn % MOD) {
                int x = a[j + k], y = 1LL * w * a[j + k + i] % MOD;
                a[j + k] = (x + y) % MOD;
                a[j + k + i] = (x - y + MOD) % MOD;
            }
        }
    }
}
inline void DFT(int *a, int n) {
    NTT(a, n);
}
inline void IDFT(int *a, int n) {
    NTT(a, n);
    std::reverse(a + 1, a + n);
    for (int i = 0, v = fuck(n, MOD - 2); i < n; i++) a[i] = 1LL * a[i] * v % MOD;
}
inline void INV(int *a, int *b, int n) {
    memset(b, 0, sizeof(int) * (n << 1));
    b[0] = fuck(a[0], MOD - 2);
    static int t[MAXN];
    for (int i = 2; i <= n; i <<= 1) {
        memcpy(t, a, sizeof(int) * i);
        memset(t + i, 0, sizeof(int) * i);
        DFT(b, i << 1);
        DFT(t, i << 1);
        for (int j = 0; j < (i << 1); j++) b[j] = 1LL * b[j] * (2 - 1LL * t[j] * b[j] % MOD + MOD) % MOD;
        IDFT(b, i << 1);
        memset(b + i, 0, sizeof(int) * i);
    }
}
inline void DRV(int *a, int *b, int n) {
    for (int i = 1; i < n; i++) b[i - 1] = 1LL * i * a[i] % MOD;
    b[n - 1] = 0;
}
inline void ITG(int *a, int *b, int n) {
    for (int i = 1; i < n; i++) b[i] = 1LL * a[i - 1] * fuck(i, MOD - 2) % MOD;
    b[0] = 0;
}
inline void LN(int *a, int *b, int n) {
    static int t[MAXN];
    INV(a, b, n);
    DRV(a, t, n);
    memset(b + n, 0, sizeof(int) * n);
    memset(t + n, 0, sizeof(int) * n);
    DFT(b, n << 1);
    DFT(t, n << 1);
    for (int i = 0; i < (n << 1); i++) b[i] = 1LL * b[i] * t[i] % MOD;
    IDFT(b, n << 1);
    memset(b + n, 0, sizeof(int) * n);
    memcpy(t, b, sizeof(int) * n);
    ITG(t, b, n);
}
inline void EXP(int *a, int *b, int n) {
    static int t[MAXN];
    memset(b, 0, sizeof(int) * (n << 1));
    b[0] = 1;
    for (int i = 2; i <= n; i <<= 1) {
        LN(b, t, i);
        t[0] = (a[0] + 1 - t[0] + MOD) % MOD;
        for (int k = 1; k < i; k++) t[k] = (a[k] - t[k] + MOD) % MOD;
        memset(t + i, 0, sizeof(int) * i);
        DFT(b, i << 1);
        DFT(t, i << 1);
        for (int j = 0; j < (i << 1); j++) b[j] = 1LL * b[j] * t[j] % MOD;
        IDFT(b, i << 1);
        memset(b + i, 0, sizeof(int) * i);
    }
}
const int INV2 = fuck(2, MOD - 2);
inline void SQRT(int *a, int *b, int n) {
    static int t[MAXN];
    memset(b, 0, sizeof(int) * (n << 1));
    b[0] = 1;
    for (int i = 2; i <= n; i <<= 1) {
        INV(b, t, i);
        DFT(b, i);
        for (int j = 0; j < i; j++) b[j] = 1LL * b[j] * b[j] % MOD;
        IDFT(b, i);
        for (int j = 0; j < i; j++) b[j] = (b[j] + a[j]) % MOD;
        DFT(b, i << 1);
        DFT(t, i << 1);
        for (int j = 0; j < (i << 1); j++) b[j] = 1LL * b[j] * t[j] % MOD;
        IDFT(b, i << 1);
        for (int j = 0; j < i; j++) b[j] = 1LL * b[j] * INV2 % MOD;
        memset(b + i, 0, sizeof(int) * i);
    }
}

int f[MAXN], g[MAXN], h[MAXN], l[MAXN];

int main() {
    // freopen("tree.in", "r", stdin);
    // freopen("tree.out", "w", stdout);
    int n = 1 << 10, a, b;
    scanf("%d%d", &a, &b);
    while (n <= b) n <<= 1;
    for (int i = 1, x; i <= a; i++) {
        scanf("%d", &x);
        f[x] = 1;
    }
    for (int i = 0; i < n; i++) g[i] = (MOD - 4LL * f[i] % MOD) % MOD;
    g[0] = 1;

    SQRT(g, h, n);

    for (int i = 0; i < n; i++) h[i] = MOD - h[i];
    h[0] = (h[0] + 1) % MOD;

    for (int i = 0; i < n; i++) l[i] = 2LL * f[i] % MOD;

    int delta = 0;
    for (int i = 0; i < n; i++) {
        if (!l[i])
            delta = i + 1;
        else
            break;
    }
    for (int i = 0; i < n; i++) h[i] = h[i + delta];
    for (int i = 0; i < n; i++) l[i] = l[i + delta];

    INV(l, g, n);

    DFT(g, n << 1);
    DFT(h, n << 1);
    for (int i = 0; i < (n << 1); i++) g[i] = 1LL * g[i] * h[i] % MOD;
    IDFT(g, n << 1);
    for (int i = 1; i <= b; i++) printf("%d\n", g[i]);
    puts("");
    return 0;
}