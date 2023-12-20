#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;
int n, m, __ans, val, c[32], g[32];

bool check() {
  n = inf.readInt(), m = inf.readInt();
  for (int i = 1; i <= n; i++)
    g[i] = inf.readInt();
  __ans = ans.readInt();
  val = ouf.readInt();
  // 答案不对
  if (__ans != val)
    return false;
  for (int i = 1; i <= n; i++) {
    c[i] = ouf.readInt();
    // 每个孩子分到正整数块饼干
    if (c[i] <= 0)
      return false;
    m -= c[i];
  }
  // 饼干没有分完
  if (m)
    return false;
  // 检查方案的怨气值是否等于输出的值
  for (int i = 1; i <= n; i++) {
    int cnt = 0;
    for (int j = 1; j <= n; j++)
      if (c[j] > c[i])
        cnt++;
    val -= cnt * g[i];
  }
  return val == 0;
}

int main(int argc, char *argv[]) {
  registerTestlibCmd(argc, argv);
  if (check()) {
    quitf(_ok, "Accepted");
  } else {
    quitf(_wa, "Wrong __answer");
  }
}
