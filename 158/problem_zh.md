## 题目描述

给定一个长度为N的数列A，以及M条指令，每条指令可能是以下两种之一：

1、“C l r d”，表示把 A[l],A[l+1],…,A[r] 都加上 d。

2、“Q l r”，表示询问 A[l],A[l+1],…,A[r] 的最大公约数(GCD)。

对于每个询问，输出一个整数表示答案。

## 输入格式

第一行两个整数N,M。

第二行N个整数A[i]。

接下来M行表示M条指令，每条指令的格式如题目描述所示。

## 输出格式

对于每个询问，输出一个整数表示答案。

每个答案占一行。

## 数据范围

$N \leq 500000, M \leq 100000$

## 样例

```input1
5 5
1 3 5 7 9
Q 1 5
C 1 5 1
Q 1 5
C 3 3 6
Q 2 4
```

```output1
1
2
4
```
