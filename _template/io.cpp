#include <cctype>
#include <cstdio>
#define BUF 65536
char ibuf[BUF], *icur = ibuf + BUF;
// 容易和上面那行重复，导致溢出
int isize = 0;
inline int getchar() {
	if (icur == ibuf + BUF) isize = fread(ibuf, sizeof(char), BUF, stdin), icur = ibuf;
	return icur == ibuf + isize ? EOF : *icur++;
}
int main() {
	for (int ch = getchar(); ch != EOF; ch = getchar()) putchar(ch);
}