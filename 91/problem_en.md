<h2>Description</h2><p>The 15-puzzle has been around for over 100 years; even if you don't know it by that name, you've seen it.  It is constructed with 15 sliding tiles, each with a number from 1 to 15 on it, and all packed into a 4 by 4 frame with one tile missing.  Let's call the missing tile 'x'; the object of the puzzle is to arrange the tiles so that they are ordered as:</p><p><pre><p> 1  2  3  4
</p><p> 5  6  7  8
</p><p> 9 10 11 12
</p><p>13 14 15  x </p></pre></p><p>where the only legal operation is to exchange 'x' with one of the tiles with which it shares an edge.  As an example, the following sequence of moves solves a slightly scrambled puzzle:</p><p><pre><p> 1  2  3  4    1  2  3  4    1  2  3  4    1  2  3  4
</p><p> 5  6  7  8    5  6  7  8    5  6  7  8    5  6  7  8
</p><p> 9  x 10 12    9 10  x 12    9 10 11 12    9 10 11 12
</p><p>13 14 11 15   13 14 11 15   13 14  x 15   13 14 15  x
</p><p>           r-&gt;           d-&gt;           r-&gt; </p></pre></p><p>The letters in the previous row indicate which neighbor of the 'x' tile is swapped with the 'x' tile at each step; legal values are 'r','l','u' and 'd', for right, left, up, and down, respectively.</p><p>Not all puzzles can be solved; in 1870, a man named Sam Loyd was famous for distributing an unsolvable version of the puzzle, and</p><p>frustrating many people.  In fact, all you have to do to make a regular puzzle into an unsolvable one is to swap two tiles (not counting the missing 'x' tile, of course).</p><p>In this problem, you will write a program for solving the less well-known 8-puzzle, composed of tiles on a three by three</p><p>arrangement.</p><h2>Input</h2><p>You will receive  a description of a configuration of the 8 puzzle.  The description is just a list of the tiles in their initial positions, with the rows listed from top to bottom, and the tiles listed from left to right within a row, where the tiles are represented by numbers 1 to 8, plus 'x'.  For example, this puzzle</p><p><pre><p> 1  2  3
</p><p> x  4  6
</p><p> 7  5  8 </p></pre></p><p>is described by this list:</p><p><pre><p> 1 2 3 x 4 6 7 5 8 </p></pre></p><h2>Output</h2><p>You will print to standard output either the word ``unsolvable'', if the puzzle has no solution, or a string consisting entirely of the letters 'r', 'l', 'u' and 'd' that describes a series of moves that produce a solution.  The string should include no spaces and start at the beginning of the line.</p>

<pre><code class="language-input1"> 2  3  4  1  5  x  7  6  8 </code></pre>

<pre><code class="language-output1">ullddrurdllurdruldr</code></pre>

