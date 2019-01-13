#include <stdio.h>
#include <algorithm>
#include <vector>
#include "matrix.h"
using std::vector;
namespace G {
	typedef unsigned long long u64;
	static const u64 b1 = 233, b2 = 667;
	static const int L = 65;
	static u64 p1[L], p2[L], mat[L][L];
	static char G[L][L];
	static int N, T;
	void ensure(bool f, const char *reason) {
		if (!f) puts(reason), exit(0);
	}
	void validate(vector<vector<char>> W) {
		int i, j;
		ensure(W.size() == N, "Invalid size");
		for (i = 0; i < N; ++i) {
			ensure(W[i].size() == N, "Invalid size");
			for (j = 0; j < N; ++j) ensure(W[i][j] == G[i + 1][j + 1], "Wrong answer");
		}
		double R = double(T) / N / N;
		printf("Accepted: rate = %.6lf, point = %d\n", R, (R <= 60) + (R <= 30) + (R <= 20) + (R <= 10) + (R <= 5));
		exit(0);
	}
	bool isSubMatrix(vector<vector<char>> W) {
		ensure(++T <= 60 * N * N, "Too many operation");
		int n, m, i, j, r, c;
		ensure((n = W.size()) > 0, "Invalid size");
		ensure((m = W[0].size()) > 0, "Invalid size");
		ensure(n <= N && m <= N, "Invalid size");
		for (i = 0; i < n; ++i)
			for (ensure(W[i].size() == m, "Invalid size"), j = 0; j < m; ++j) ensure(W[i][j] == '0' || W[i][j] == '1', "Invalid content");
		u64 h_all = 0;
		for (i = 0; i < n; ++i)
			for (j = 0; j < m; ++j) h_all += W[i][j] * p1[n - i - 1] * p2[m - j - 1];
		for (r = n; r <= N; ++r)
			for (c = m; c <= N; ++c) {
				u64 h_cur = 0;
				h_cur = mat[r][c] - mat[r - n][c] * p1[n] - mat[r][c - m] * p2[m] + mat[r - n][c - m] * p1[n] * p2[m];
				if (h_all == h_cur) {
					bool is = true;
					int _r = r - n + 1, _c = c - m + 1;
					for (i = 0; i < n; ++i) {
						for (j = 0; j < m; ++j)
							if (W[i][j] != G[_r + i][_c + j]) {
								is = false;
								break;
							}
						if (!is) break;
					}
					if (is) return true;
				}
			}
		return false;
	}
	void main() {
		int i, j;
		scanf("%d", &N);
		ensure(1 <= N && N <= 60, "Invalid data");
		p1[0] = p2[0] = 1;
		for (i = 1; i <= N; ++i) p1[i] = p1[i - 1] * b1, p2[i] = p2[i - 1] * b2;
		for (i = 1; i <= N; ++i) scanf("%s", G[i] + 1);
		for (i = 1; i <= N; ++i)
			for (j = 1; j <= N; ++j) ensure(G[i][j] == '0' || G[i][j] == '1', "Invalid data"), mat[i][j] = mat[i - 1][j] * b1 + mat[i][j - 1] * b2 - mat[i - 1][j - 1] * b1 * b2 + G[i][j];
		fprintf(stderr, "--> %lld %lld %lld %lld %lld\n", &G, G, &G[0][0], &G[1][0], (&G[1][0]-&G[0][0]));
		findMatrix(N);
		ensure(false, "Fucked up");
	}
};  // namespace G
bool isSubMatrix(vector<vector<char>> matrix) { return G::isSubMatrix(matrix); }
void foundMatrix(vector<vector<char>> matrix) { G::validate(matrix); }
int main() { G::main(); }
