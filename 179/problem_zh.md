## 题目描述


维护一个W*W的矩阵，初始值均为S.每次操作可以增加某格子的权值,或询问某子矩阵的总权值.修改操作数 $M \leq 160000$，询问数 $Q \leq 10000,W \leq 2000000$

## 输入格式

第一行两个整数,S,W;其中S为矩阵初始值;W为矩阵大小

接下来每行为一下三种输入之一(不包含引号):

"1 x y a"

"2 x1 y1 x2 y2"

"3"

输入1:你需要把(x,y)(第x行第y列)的格子权值增加a

输入2:你需要求出以左下角为 $(x_1,y_1)$ 右上角为 $(x_2,y_2)$ 的矩阵内所有格子的权值和,并输出

输入3:表示输入结束


## 输出格式

对于每个输入2,输出一行,即输入2的答案

## 样例

```input1
0 4
1 2 3 3
2 1 1 3 3
1 2 2 2
2 2 2 3 4
3
```

```output1
3
5
```

## 备注

保证答案不会超过int范围
