<h2>Description</h2><p>In how many ways can you choose k elements out of n elements, not taking order into account?</p><p>Write a program to compute this number.</p><h2>Input</h2><p>The input will contain one or more test cases.</p><p>Each test case consists of one line containing two integers n (n&gt;=1) and k (0&lt;=k&lt;=n).</p><p>Input is terminated by two zeroes for n and k.</p><h2>Output</h2><p>For each test case, print one line containing the required number. This number will always fit into an integer, i.e. it will be less than 2<sup>31</sup>.</p><p>Warning: Don't underestimate the problem. The result will fit into an integer - but if all intermediate results arising during the computation will also fit into an integer depends on your algorithm. The test cases will go to the limit.</p>

<pre><code class="language-input1">4 2
10 5
49 6
0 0
</code></pre>

<pre><code class="language-output1">6
252
13983816
</code></pre>

