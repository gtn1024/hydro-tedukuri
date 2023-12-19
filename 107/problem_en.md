<h2>Description</h2><p>Flood-it is a fascinating puzzle game on Google+ platform. The game interface is like follows:</p><p><center><img src="file://itIAvDwT.png"></center></p><p>At the beginning of the game, system will randomly generate an N×N square board and each grid of the board is painted by one of the six colors. The player starts from the top left corner. At each step, he/she selects a color and changes all the grids connected with the top left corner to that specific color. The statement “two grids are connected” means that there is a path between the certain two grids under condition that each pair of adjacent grids on this path is in the same color and shares an edge. In this way the player can flood areas of the board from the starting grid (top left corner) until all of the grids are in same color. The following figure shows the earliest steps of a 4×4 game (colors are labeled in 0 to 5):</p><p><center><img src="file://1P0HD9Z1.png"></center></p><p>Given a colored board at very beginning, please find the minimal number of steps to win the game (to change all the grids into a same color).</p><h2>Input</h2><p>The input contains no more than 20 test cases. For each test case, the first line contains a single integer N (2&lt;=N&lt;=8) indicating the size of game board.</p><p>The following N lines show an N×N matrix (a<sub>i,j</sub>)n×n representing the game board. a<sub>i,j</sub> is in the range of 0 to 5 representing the color of the corresponding grid.</p><p>The input ends with N = 0.</p><h2>Output</h2><p>For each test case, output a single integer representing the minimal number of steps to win the game.</p>

<pre><code class="language-input1">2
0 0
0 0
3
0 1 2
1 1 2
2 2 1
0
</code></pre>

<pre><code class="language-output1">0
3
</code></pre>

<h2>Source</h2><p>Fuzhou 2011</p>
