## 题目描述

圣诞老人共有 $M$ 个饼干，准备全部分给 $N$ 个孩子。

每个孩子有一个贪婪度，第 $i$ 个孩子的贪婪度为 $g[i]$。

如果有 $a[i]$ 个孩子拿到的饼干数比第 $i$ 个孩子多，那么第 $i$ 个孩子会产生 $g[i] \times a[i]$ 的怨气。

给定 $N,M$ 和序列 $g$，圣诞老人请你帮他安排一种分配方式，使得每个孩子至少分到一块饼干，并且所有孩子的怨气总和最小。

## 输入格式

第一行包含两个整数 $N,M$。

第二行包含 $N$ 个整数表示 $g_1∼g_N$。

## 输出格式

第一行一个整数表示最小怨气总和。

第二行 $N$ 个空格隔开的整数表示每个孩子分到的饼干数，若有多种方案，输出任意一种均可。

## 数据范围

$1 \leq N \leq 30$

$N \leq M \leq 5000$

$1 \leq g_i \leq 10^7$

## 样例

```input1
3 20
1 2 3
```

```output1
2
2 9 9
```

