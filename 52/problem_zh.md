## 题目描述

后缀数组 (SA) 是一种重要的数据结构，通常使用倍增或者 DC3 算法实现，这超出了我们的讨论范围。

在本题中，我们希望使用快排、Hash 与二分实现一个简单的 $O(nlog^2n)$ 的后缀数组求法。

详细地说，给定一个长度为 $n$ 的字符串 $S$（下标 $0∼n−1$），我们可以用整数 $k$（$0 \leq k < n$） 表示字符串 $S$ 的后缀 $S(k∼n−1)$。

把字符串 $S$ 的所有后缀按照字典序排列，排名为 $i$ 的后缀记为 $SA[i]$。

额外地，我们考虑排名为 $i$ 的后缀与排名为 $i−1$ 的后缀，把二者的最长公共前缀的长度记为 $Height[i]$。

我们的任务就是求出 $SA$ 与 $Height$ 这两个数组。

## 输入格式

输入一个字符串，其长度不超过 $30$ 万。

字符串由小写字母构成。

## 输出格式

第一行为数组 $SA$，相邻两个整数用 $1$ 个空格隔开。

第二行为数组 $Height$，相邻两个整数用 $1$ 个空格隔开，我们规定 $Height[1]=0$。


## 样例

```input1
ponoiiipoi
```

```output1
9 4 5 6 2 8 3 1 7 0
0 1 2 1 0 0 2 1 0 2
```

## 说明

排名第一（最小）的后缀是9（S[9~9]，即字符串 i），第二的是后缀4（S[4~9]，即字符串iiipoi），第三的是后缀5（S[5~9]，即字符串iipoi）以此类推。Height[2]表示排名第2与第1的后缀的最长公共前缀，长度为1，Height[3]表示排名第3与第2的后缀的最长公共前缀，长度为2，以此类推。