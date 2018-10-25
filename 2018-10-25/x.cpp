#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
class IO {
   protected:
    static const int BSIZE = 65536;
    int is;
    char ib[BSIZE], ob[BSIZE], *ip, *op;
    FILE *in, *out;

   public:
    inline IO(FILE *in = stdin, FILE *out = stdout) {
        ip = ib + BSIZE, op = ob, is = 0;
        this->in = in;
        this->out = out;
    }
    inline ~IO() {
        fwrite(ob, 1, op - ob, out);
    }
    inline char getchar() {
        if (ip == ib + BSIZE) is = fread(ib, 1, BSIZE, in), ip = ib;
        return ip == ib + is ? 0 : *ip++;
    }
    inline void putchar(char c) {
        if (op == ob + BSIZE) fwrite(ob, 1, BSIZE, out), op = ob;
        *op++ = c;
    }
};
class IOX : public IO {
   protected:
    int tmp[64];

   public:
    inline IOX(FILE *in = stdin, FILE *out = stdout) : IO(in, out) {}
    inline int getdigit() {
        register char ch = getchar();
        while (!isdigit(ch)) ch = getchar();
        return ch ^ 48;
    }
    inline int getint() {
        register int x = 0, f = 0;
        register char ch = getchar();
        for (; !isdigit(ch); ch = getchar()) f ^= ch == 45;
        for (; isdigit(ch); ch = getchar()) x = (x << 1) + (x << 3) + (ch ^ 48);
        return f ? -x : x;
    }
    inline unsigned getuint() {
        register unsigned x = 0;
        register char ch = getchar();
        for (; isdigit(ch); ch = getchar()) x = (x << 1) + (x << 3) + (ch ^ 48);
        return x;
    }
    inline void putint(int x) {
        if (!x) return putchar('0');
        if (x < 0) putchar(45), x = -x;
        register int _6;
        for (_6 = 0; x; x /= 10) tmp[++_6] = (x % 10) ^ 48;
        while (_6) putchar(tmp[_6--]);
    }
    inline void putint64(long long x) {
        if (!x) return putchar('0');
        if (x < 0) putchar(45), x = -x;
        register int _6;
        for (_6 = 0; x; x /= 10) tmp[++_6] = (x % 10) ^ 48;
        while (_6) putchar(tmp[_6--]);
    }
    inline void puts(const char *s) {
        for (; *s; s++) putchar(*s);
    }
};
#define MAXN 2000010
#define MAXV 1000000
#define MOD 1000000007
int n, p[MAXN], bin[MAXN];
inline int find(int x) { return x == p[x] ? x : p[x] = find(p[x]); }
inline int trim(int x) { return x >= MOD ? x - MOD : x; }
int main() {
    IOX io = IOX(fopen("x.in", "r"), fopen("x.out", "w"));
    bin[0] = 1;
    for (int i = 1; i < MAXN; i++) bin[i] = trim(bin[i - 1] << 1);
    for (int T = io.getint(); T; T--) {
        n = io.getint();
        for (int i = 1; i <= MAXV; i++) p[i] = i;
        for (int i = 1; i <= n; i++) {
            int t = i + MAXV;
            p[t] = t;
            int x = io.getint();
            for (int j = 2; j * j <= x; j++) {
                if (x % j) continue;
                while (x % j == 0) x /= j;
                p[find(j)] = t;
            }
            if (x != 1) p[find(x)] = t;
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) ans += (find(i + MAXV) == i + MAXV);
        io.putint(trim(bin[ans] + MOD - 2));
        io.putchar(10);
    }
    return 0;
}