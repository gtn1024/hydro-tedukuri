## 题目背景


Xiao 9\*、朱最学、小全同属LOI,朱某某同学由于学习认真得到了小全的仰慕~~送其外号---朱最学。最学想：神牛我当不成难道还养不成？随后便出现了到Xiao 9\*农场放牛的情况- -（灰常无语）。于是Xiao 9\*与朱最学间的一场战争便开始了。。。

## 题目描述

自从朱最学~搞定了QQ农场以后，就开始捉摸去QQ牧场干些事业，不仅自己牧场养牛，还到Xiao 9\*农场放牛- -！Xiao 9\*很生气，有一次朱最学想知道Xiao 9\*牧场奶牛的数量，于是Xiao 9\*想狠狠耍朱最学一把。举个例子，假如有16头奶牛，如果建了3个牛棚，剩下1头牛就没有地方安家了。如果建造了5个牛棚，但是仍然有1头牛没有地方去，然后如果建造了7个牛棚，还有2头没有地方去。你作为Xiao 9\*的私人秘书理所当然要将准确的奶牛数报给Xiao 9\*，你该怎么办？

## 输入格式

第一行包含一个整数 $n$（$n \leq 10$） - 建立牛棚的次数

接下来 $n$ 行，每行两个整数 $a_i,b_i$（$b_i \leq a_i \leq 1200000$），表示建立 $a_i$ 个牛棚，有 $b_i$ 头牛没有去处。你可以假定 $ai,aj$ 互质。

## 输出格式

输出包含一个正整数，即为Xiao 9\*至少养奶牛的数目。



## 样例

```input1
3
3 1
5 1
7 2
```

```output1
16
```
