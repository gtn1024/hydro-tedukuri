<h2>Description</h2><p>An addition chain for n is an integer sequence <a0, a1,a2,...,am=""> with the following four properties:</a0,></p><p><ul><li>a0 = 1</li></ul></p><p><li>am = n</li></p><p><li>a0 &lt; a1 &lt; a2 &lt; ... &lt; a<sub>m-1</sub> &lt; am</li></p><p><li>For each k (1&lt;=k&lt;=m) there exist two (not necessarily different) integers i and j (0&lt;=i, j&lt;=k-1) with ak=ai+aj </li></p><p>You are given an integer n. Your job is to construct an addition chain for n with minimal length. If there is more than one such sequence, any one is acceptable.</p><p>For example, &lt;1,2,3,5&gt; and &lt;1,2,4,5&gt; are both valid solutions when you are asked for an addition chain for 5. </p><h2>Input</h2><p>The input will contain one or more test cases. Each test case consists of one line containing one integer n (1&lt;=n&lt;=100). Input is terminated by a value of zero (0) for n.</p><h2>Output</h2><p>For each test case, print one line containing the required integer sequence. Separate the numbers by one blank.</p><p>Hint: The problem is a little time-critical, so use proper break conditions where necessary to reduce the search space.</p>

<pre><code class="language-input1">5
7
12
15
77
0
</code></pre>

<pre><code class="language-output1">1 2 4 5
1 2 4 6 7
1 2 4 8 12
1 2 4 5 10 15
1 2 4 8 9 17 34 68 77
</code></pre>

