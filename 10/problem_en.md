## 题目描述

Consider two natural numbers $A$ and $B$. Let S be the sum of all natural divisors of $A^B$. Determine S modulo 9901 (the rest of the division of S by 9901).

## 输入格式


The only line contains the two natural numbers $A$ and $B$, ($0 \leq A,B \leq 50000000$) separated by blanks.

## 输出格式

The only line of the output will contain $S$ modulo $9901$.

## 样例

```input1
2 3
```

```output1
15
```

## 提示

$$2 ^ 3 = 8$$

The natural divisors of 8 are: 1,2,4,8. Their sum is 15.
15 modulo 9901 is 15 (that should be output).
