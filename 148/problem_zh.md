## 题目描述


Freda和rainbow是超自然之界学校(Preternatural Kingdom University，简称PKU)魔法学院的学生。为了展示新学的魔法，Ta们决定进行一场对弈~~~

起初Freda面前有n堆魔法珠，其中第i堆有ai颗。Freda和rainbow可以轮流进行以下操作：

1. 选择n堆中魔法珠数量大于1的任意一堆。记该堆魔法珠的数量为p，p有 $b_1,b_2,...b_m$ 这m个小于p的约数。
2. 施展魔法把这一堆魔法珠变成m堆，每堆各有 $b_1,b_2,...b_m$  颗魔法珠。
3. 选择这 $m$ 堆中的一堆魔法珠，施展魔法令其消失。


注意一次操作过后，魔法珠的堆数会增加m-2，各堆中魔法珠数量的总和可能会发生变化。

当轮到某人操作时，如果每堆中魔法珠的数量均为1，那么ta就输了。

Freda和rainbow都采取最好的策略，从Freda开始。请你预测一下，谁能获胜呢？


## 输入格式

本题仅有一个测试点，包含多组数据，以EOF结尾。

每组数据的第一行包含一个整数n。

第二行包含n个整数ai。

## 输出格式

对于每组数据，在两人均采取最佳策略的前提下，若Freda能获胜，输出 `freda`；若Rainbow能获胜，输出 `rainbow`。

## 数据范围

$1 \leq n \leq 100, 1 \leq a_i \leq 1000$

## 样例

```input1
3
2 2 2
3
1 3 5
```

```output1
freda
rainbow
```
