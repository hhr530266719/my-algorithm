#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#define N 20

int n;
char g[N][N];
bool col[N], dg[N], udg[N];

void dfs(int u) {
    if (u == n) {
        for (int i = 0; i < n; i++) {
            puts(g[i]);
        }
        puts("");
        return;
    }

    int x = u;
    for (int y = 0; y < n; y++) {
        if (col[y] == false && dg[y - x + n] == false && udg[y + x] == false) {
            col[y] = dg[y - x + n] = udg[y + x] = true;
            g[x][y] = 'Q';
            dfs(x + 1);
            g[x][y] = '.';
            col[y] = dg[y - x + n] = udg[y + x] = false;
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            g[i][j] = '.';
        }
    }

    clock_t start_time = clock();
    dfs(0);
    clock_t end_time = clock();

    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Execution time: %f milliseconds\n", time_taken * 1000);

    return 0;
}