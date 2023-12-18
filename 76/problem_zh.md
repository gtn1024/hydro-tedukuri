## 题目描述

给定一张 $N$ 个点 $M$ 条边的有向无环图，分别统计从每个点出发能够到达的点的数量。

## 输入格式

第一行两个整数 $N,M$，接下来 $M$ 行每行两个整数 $x,y$，表示从 $x$ 到 $y$ 的一条有向边。

## 输出格式

输出共 $N$ 行，表示每个点能够到达的点的数量。

## 数据范围

$$1 \leq N,M \leq 30000$$

$$1 \leq x,y \leq N$$

## 样例

```input1
10 10
3 8
2 3
2 5
5 9
5 9
2 3
3 9
4 8
2 10
4 9
```

```output1
1
6
3
3
2
1
1
1
1
1
```
