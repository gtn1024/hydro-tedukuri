<h2>Description</h2><p>7月17日是Mr.W的生日，ACM-THU为此要制作一个体积为Nπ的M层生日蛋糕，每层都是一个圆柱体。</p><p>设从下往上数第i(1 &lt;= i &lt;= M)层蛋糕是半径为Ri, 高度为Hi的圆柱。当i &lt; M时，要求Ri &gt; Ri+1且Hi &gt; Hi+1。</p><p>由于要在蛋糕上抹奶油，为尽可能节约经费，我们希望蛋糕外表面（最下一层的下底面除外）的面积Q最小。</p><p>令Q = Sπ</p><p>请编程对给出的N和M，找出蛋糕的制作方案（适当的Ri和Hi的值），使S最小。</p><p>（除Q外，以上所有数据皆为正整数）</p><h2>Input</h2><p>有两行，第一行为N（N &lt;= 10000），表示待制作的蛋糕的体积为Nπ；第二行为M(M &lt;= 20)，表示蛋糕的层数为M。</p><h2>Output</h2><p>仅一行，是一个正整数S（若无解则S = 0）。</p>

<pre><code class="language-input1">100
2</code></pre>

<pre><code class="language-output1">68</code></pre>

<h2>Hint</h2><p>圆柱公式</p><p>体积V = πR<sup>2</sup>H</p><p>侧面积A' = 2πRH</p><p>底面积A = πR<sup>2</sup></p>
