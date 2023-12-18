<h2>Problem Description</h2>Last night, little erriyue had a horrible nightmare. He dreamed that he and his girl friend were trapped in a big maze separately. More terribly, there are two ghosts in the maze. They will kill the people. Now little erriyue wants to know if he could find his girl friend before the ghosts find them.<br>You may suppose that little erriyue and his girl friend can move in 4 directions. In each second, little erriyue can move 3 steps and his girl friend can move 1 step. The ghosts are evil, every second they will divide into several parts to occupy the grids within 2 steps to them until they occupy the whole maze. You can suppose that at every second the ghosts divide firstly then the little erriyue and his girl friend start to move, and if little erriyue or his girl friend arrive at a grid with a ghost, they will die.<br>Note: the new ghosts also can devide as the original ghost.<br><h2>Input</h2>The input starts with an integer T, means the number of test cases.<br>Each test case starts with a line contains two integers n and m, means the size of the maze. (1&lt;n, m&lt;800)<br>The next n lines describe the maze. Each line contains m characters. The characters may be:<br>‘.’ denotes an empty place, all can walk on.<br>‘X’ denotes a wall, only people can’t walk on.<br>‘M’ denotes little erriyue<br>‘G’ denotes the girl friend.<br>‘Z’ denotes the ghosts.<br>It is guaranteed that will contain exactly one letter M, one letter G and two letters Z. <br><h2>Output</h2>Output a single integer S in one line, denotes erriyue and his girlfriend will meet in the minimum time S if they can meet successfully, or output -1 denotes they failed to meet.
<pre><code class="language-input1"><pre><div style="font-family:Courier New,Courier,monospace;">3
5 6
XXXXXX
XZ..ZX
XXXXXX
M.G...
......
5 6
XXXXXX
XZZ..X
XXXXXX
M.....
..G...

10 10
..........
..X.......
..M.X...X.
X.........
.X..X.X.X.
.........X
..XX....X.
X....G...X
...ZX.X...
...Z..X..X

</div></pre></code></pre>

<pre><code class="language-output1"><pre><div style="font-family:Courier New,Courier,monospace;">1
1
-1
</div></pre></code></pre>

