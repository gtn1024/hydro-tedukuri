## 题目描述

小G是一个出色的诗人，经常作诗自娱自乐。

但是，他一直被一件事情所困扰，那就是诗的排版问题。

一首诗包含了若干个句子，对于一些连续的短句，可以将它们用空格隔开并放在一行中，注意一行中可以放的句子数目是没有限制的。

小G给每首诗定义了一个行标准长度（行的长度为一行中符号的总个数），他希望排版后每行的长度都和行标准长度相差不远。

显然排版时，不应改变原有的句子顺序，并且小G不允许把一个句子分在两行或者更多的行内。

在满足上面两个条件的情况下，小G对于排版中的每行定义了一个不协调度，为这行的实际长度与行标准长度差值绝对值的P次方，而一个排版的不协调度为所有行不协调度的总和。

小G最近又作了几首诗，现在请你对这几首诗进行排版，使得排版后的诗尽量协调（即不协调度尽量小），并把排版的结果告诉他。

## 输入格式

第一行包含一个整数T，表示诗的数量，接下来是T首诗，每首诗是一组数据。

每组数据的第一行包含三个整数N，L和P，其中N表示这首诗句子的数目，L表示这首诗的行标准长度，P的含义参考问题描述。

从第二行开始，每行一个句子，句子由英文字母、数字、标点符号等符号组成。


## 输出格式

对于每组数据，若最小的不协调度不超过 $10^{18}$，则输出一个数表示不协调度，若最小的不协调度超过1018，则输出”Too hard to arrange”(不包含引号)，占一行。
每个输出后面加”--------------------“，占一行。


## 数据范围

$N \leq 10^5$

$L \leq 3 \times 10^6$

$P \leq 10$

每个句子的字符数不超过30。

## 样例

```input1
4
4 9 3
brysj,
hhrhl.
yqqlm,
gsycl.
4 9 2
brysj,
hhrhl.
yqqlm,
gsycl.
1 1005 6
poet
1 1004 6
poet
```

```output1
108
--------------------
32
--------------------
Too hard to arrange
--------------------
1000000000000000000
--------------------
```
