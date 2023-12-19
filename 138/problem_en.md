<h2>Description</h2><p><span lang="en-us"><p>Given a <i>n</i> × <i>n</i> matrix <i>A</i> and a positive integer <i>k</i>, find the sum <i>S</i> = <i>A</i> + <i>A</i><sup>2</sup> + <i>A</i><sup>3</sup> + … + <i>A<sup>k</sup></i>.</p></span></p><h2>Input</h2><p><span lang="en-us"><p>The input contains exactly one test case. The first line of input contains three positive integers <i>n</i> (<i>n</i> ≤ 30), <i>k</i> (<i>k</i> ≤ 10<sup>9</sup>) and <i>m</i> (<i>m</i> &lt; 10<sup>4</sup>). Then follow <i>n</i> lines each containing <i>n</i> nonnegative integers below 32,768, giving <i>A</i>’s elements in row-major order.</p></span></p><h2>Output</h2><p><p>Output the elements of <i>S</i> modulo <i>m</i> in the same way as <i>A</i> is given.</p></p>

<pre><code class="language-input1">2 2 4
0 1
1 1</code></pre>

<pre><code class="language-output1">1 2
2 3</code></pre>

<h2>Source</h2><p>POJ Monthly--2007.06.03, Huang, Jinsong</p>
