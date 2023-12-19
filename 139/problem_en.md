<h2>Problem Description</h2>   In our daily life we often use 233 to express our feelings. Actually, we may say 2333, 23333, or 233333 ... in the same meaning. And here is the question: Suppose we have a matrix called 233 matrix. In the first line, it would be 233, 2333, 23333... (it means a<sub>0,1</sub> = 233,a<sub>0,2</sub> = 2333,a<sub>0,3</sub> = 23333...) Besides, in 233 matrix, we got a<sub>i,j</sub> = a<sub>i-1,j</sub> +a<sub>i,j-1</sub>( i,j ≠ 0). Now you have known a<sub>1,0</sub>,a<sub>2,0</sub>,...,a<sub>n,0</sub>, could you tell me a<sub>n,m</sub> in the 233 matrix?<h2>Input</h2>   There are multiple test cases. Please process till EOF.<br><br>   For each case, the first line contains two postive integers n,m(n ≤ 10,m ≤ 10<sup>9</sup>). The second line contains n integers, a<sub>1,0</sub>,a<sub>2,0</sub>,...,a<sub>n,0</sub>(0 ≤ a<sub>i,0</sub> &lt; 2<sup>31</sup>).<h2>Output</h2>   For each case, output a<sub>n,m</sub> mod 10000007.
<pre><code class="language-input1"><pre><div style="font-family:Courier New,Courier,monospace;">1 1
1
2 2
0 0
3 7
23 47 16</div></pre></code></pre>

<pre><code class="language-output1"><pre><div style="font-family:Courier New,Courier,monospace;">234
2799
72937</div></pre></code></pre>

<h2>Hint</h2><br><center><img style="max-width:100%;" src="file://Q8k4wDYo.png"></center><br>
