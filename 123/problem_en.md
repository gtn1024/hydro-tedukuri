<h2>Problem Description</h2>XOR is a kind of bit operator, we define that as follow: for two binary base number A and B, let C=A XOR B, then for each bit of C, we can get its value by check the digit of corresponding position in A and B. And for each digit, 1 XOR 1 = 0, 1 XOR 0 = 1, 0 XOR 1 = 1, 0 XOR 0 = 0. And we simply write this operator as ^, like 3 ^ 1 = 2,4 ^ 3 = 7. XOR is an amazing operator and this is a question about XOR. We can choose several numbers and do XOR operatorion to them one by one, then we get another number. For example, if we choose 2,3 and 4, we can get 2^3^4=5. Now, you are given N numbers, and you can choose some of them(even a single number) to do XOR on them, and you can get many different numbers. Now I want you tell me which number is the K-th smallest number among them.<h2>Input</h2>First line of the input is a single integer T(T&lt;=30), indicates there are T test cases.<br>For each test case, the first line is an integer N(1&lt;=N&lt;=10000), the number of numbers below.  The second line contains N integers (each number is between 1 and 10^18). The third line is a number Q(1&lt;=Q&lt;=10000), the number of queries. The fourth line contains Q numbers(each number is between 1 and 10^18) K1,K2,......KQ.<h2>Output</h2>For each test case,first output Case #C: in a single line,C means the number of the test case which is from 1 to T. Then for each query, you should output a single line contains the Ki-th smallest number in them, if there are less than Ki different numbers, output -1.
<pre><code class="language-input1"><pre><div style="font-family:Courier New,Courier,monospace;">2
2
1 2
4
1 2 3 4
3
1 2 3
5
1 2 3 4 5</div></pre></code></pre>

<pre><code class="language-output1"><pre><div style="font-family:Courier New,Courier,monospace;">Case #1:
1
2
3
-1
Case #2:
0
1
2
3
-1</div></pre></code></pre>

<h2>Hint</h2><br>If you choose a single number, the result you get is the number you choose.<br>Using long long instead of int because of the result may exceed 2^31-1.<br><h2>Author</h2>elfness
