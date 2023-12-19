<h2>Description</h2><p><span lang="en-us"><p>A lattice point (<i><b>x</b></i>, <i><b>y</b></i>) in the first quadrant (<i><b>x</b></i> and <i><b>y</b></i> are integers greater than or equal to 0), other than the origin, is visible from the origin if the line from (0, 0) to (<i><b>x</b></i>, <i><b>y</b></i>) does not pass through any other lattice point. For example, the point (4, 2) is not visible since the line from the origin passes through (2, 1). The figure below shows the points (<i><b>x</b></i>, <i><b>y</b></i>) with 0 ≤ <i><b>x</b></i>, <i><b>y</b></i> ≤ 5 with lines from the origin to the visible points.</p><center><img src="file://pqQ9Mo7x.png"></center><p>Write a program which, given a value for the size, <i><b>N</b></i>, computes the number of visible points (<i><b>x</b></i>, <i><b>y</b></i>) with 0 ≤ <i><b>x</b></i>, <i><b>y</b></i> ≤ <i><b>N</b></i>.</p></span></p><h2>Input</h2><p><span lang="en-us"><p>The first line of input contains a single integer <i><b>C</b></i> (1 ≤ <i><b>C</b></i> ≤ 1000) which is the number of datasets that follow.</p><p>Each dataset consists of a single line of input containing a single integer <i><b>N</b></i> (1 ≤ <i><b>N</b></i> ≤ 1000), which is the size.</p></span></p><h2>Output</h2><p><p>For each dataset, there is to be one line of output consisting of: the dataset number starting at 1, a single space, the size, a single space and the number of visible points for that size.</p></p>

<pre><code class="language-input1">4
2
4
5
231</code></pre>

<pre><code class="language-output1">1 2 5
2 4 13
3 5 21
4 231 32549</code></pre>

<h2>Source</h2><p>Greater New York 2006</p>
