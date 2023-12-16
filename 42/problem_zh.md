## 题目背景

这里有n列火车将要进站再出站……

但是，每列火车只有1节---那就是车头……



## 题目描述

有n列火车按1到n的顺序从东方左转进站，这个车站是南北方向的，它虽然无限长，只可惜是一个死胡同，而且站台只有一条股道，火车只能倒着从西方出去，而且每列火车必须进站，先进后出。

（某生：不就是个栈吗？每次可以让右侧头火车进栈，或者让栈顶火车出站？

老师：闭嘴！）

就像这样：

```
  出站<——-    <——进站
            |车|
            |站|
            |__|
```

现在请你按《字典序》输出前20种可能的出栈方案。


## 输入格式

一个整数 n<=20


## 输出格式

《字典序》输出前20种答案，每行一种，不要空格


## 样例

```input1
3
```

```output1
123
132
213
231
321
```
