////
//// Created by CharlesHan on 2023/4/18.
////
//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//#define N 100
//typedef struct
//{
//    int _x, _y;
//}PII;
//int n, m;
//int g[N][N];// 图
//int d[N][N];// 距离数组
//PII q[N * N], Prev[N][N];// 队列
//
//int bfs()
//{
//    int hh = 0, tt = -1;
//    int dx[4] = {0, 1, 0, -1}; // 定义方向数组
//    int dy[4] = {1, 0, -1, 0};
//    memset(d, -1, sizeof d); // 初始化距离数组
//    d[0][0] = 0; // 起点到起点的距离为0
//    q[++tt] = {0, 0}; // 将起点加入队列
//    while (hh <= tt) // 队列不为空
//    {
//        PII t = q[hh++]; // 取出队头
//        for(int i = 0; i < 4; ++i) // 枚举四个方向
//        {
//            int x = t._x + dx[i]; // 计算新的x坐标
//            int y = t._y + dy[i]; // 计算新的y坐标
//            if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1) // 判断是否越界、是否为障碍物、是否已经访问过
//            {
//                d[x][y] = d[t._x][t._y] + 1; // 更新距离数组
//                Prev[x][y] = t; // 更新前驱数组
//                printf("{%d %d} %d %d\n", Prev[x][y]._x, Prev[x][y]._y, x, y);
//                tt ++;
//                q[tt]._x = x; // 将新的点加入队列
//                q[tt]._y = y;
//            }
//        }
//    }
//    int x = n - 1, y = m - 1; // 从终点开始
//    while (x != 0 || y != 0) // 判断是否到达起点
//    {
//        printf("(%d, %d) -> ", x, y); // 输出路径
//        PII t = Prev[x][y]; // 取出前驱
//        x = t._x; // 更新x坐标
//        y = t._y; // 更新y坐标
//    }
//    return d[n - 1][m - 1]; // 返回终点到起点的距离
//}
//
//
//int main ()
//{
//
//    scanf("%d %d", &n, &m); // 输入矩阵的行数和列数
//    for (int i = 0; i < n; ++i) { // 输入矩阵
//        for(int j = 0; j < m; ++j)
//        {
//            scanf("%d", &g[i][j]);
//        }
//    }
//    printf("%d", bfs()); // 输出终点到起点的距离
//
//    return 0;
//
//
//}
//
