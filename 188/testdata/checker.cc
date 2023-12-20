#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;
int n, m, k, a[20][20], v[20][20], __ans, val;

bool check() {
  n = inf.readInt();
  m = inf.readInt();
  k = inf.readInt();
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
      a[i][j] = inf.readInt();
  ans.readToken(), ans.readToken();
  __ans = ans.readInt();
  ouf.readToken(), ouf.readToken();
  val = ouf.readInt();
  // 答案不对
  if (val != __ans)
    return false;
  for (int i = 1; i <= k; i++) {
    int x, y;
    x = ouf.readInt(), y = ouf.readInt();
    // 格子越界或者有重复
    if (x < 1 || y < 1 || x > n || y > m || v[x][y])
      return false;
    v[x][y] = 1;
    val -= a[x][y];
  }
  // 输出的格子加起来不等于答案
  if (val)
    return false;
  // 检查凸性
  for (int i = 1; i <= n; i++) {
    int cnt = 0, l = m, r = 1;
    for (int j = 1; j <= m; j++)
      if (v[i][j])
        cnt++, l = min(l, j), r = max(r, j);
    if (cnt == 0)
      continue;
    // 输出的格子在一行里不连续
    if (r - l + 1 != cnt)
      return false;
  }
  for (int j = 1; j <= m; j++) {
    int cnt = 0, l = n, r = 1;
    for (int i = 1; i <= n; i++)
      if (v[i][j])
        cnt++, l = min(l, i), r = max(r, i);
    if (cnt == 0)
      continue;
    // 输出的格子在一列里不连续
    if (r - l + 1 != cnt)
      return false;
  }
  return true;
}

int main(int argc, char *argv[]) {
  registerTestlibCmd(argc, argv);
  if (check()) {
    quitf(_ok, "Accepted");
  } else {
    quitf(_wa, "Wrong answer");
  }
}
