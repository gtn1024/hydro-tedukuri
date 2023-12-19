## 题目描述

已知有两个字串 $A$
, $B$
 及一组字串变换的规则（至多 $6$
 个规则）:

$A_1 \rightarrow B_1$

$A_2 \rightarrow B_2$

$...$

规则的含义为：在 $A$ 中的子串 $A_1$ 可以变换为 $B_1$、$A_2$ 可以变换为 $B_2...$。

例如：$A=abcd$ $B=xyz$

变换规则为：

$abc \rightarrow xu$

$ud \rightarrow y$

$y \rightarrow yz$

则此时，A
 可以经过一系列的变换变为 B
，其变换的过程为：

$abcd \rightarrow xud \rightarrow xy \rightarrow xyz$

共进行了三次变换，使得 $A$ 变换为 $B$。

注意，一次变换只能变换一个子串，例如 $A=aa$ $B=bb$

变换规则为：

$a \rightarrow b$

此时，不能将两个 a 在一步中全部转换为 b，而应当分两步完成。

## 输入格式

输入格式如下：

$A$ $B$

$A_1$ $B_1$

$A_2$ $B_2$

$...$ $...$

第一行是两个给定的字符串 $A$ 和 $B$。

接下来若干行，每行描述一组字串变换的规则。

所有字符串长度的上限为 $20$。

## 输出格式

若在 $10$ 步（包含 $10$ 步）以内能将 $A$ 变换为 $B$ ，则输出最少的变换步数；否则输出 `NO ANSWER!`。


## 样例

```input1
abcd xyz
abc xu
ud y
y yz
```

```output1
3
```

