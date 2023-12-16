#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> chosen; // 被选择的数
unordered_map<string, bool> h;

void calc(int x) {
  if (x == n + 1) { // 问题边界
    string s;
    for (int i = 0; i < chosen.size(); i++) {
      if (i > 0)
        s += ' ';
      if (chosen[i] < 10)
        s += chosen[i] + '0';
      else
        s += chosen[i] / 10 + '0', s += chosen[i] % 10 + '0';
    }
    h[s] = 1;
    return;
  }
  //"不选x"分支
  calc(x + 1); // 求解子问题
  //"选x"分支
  chosen.push_back(x); // 记录x已被选择
  calc(x + 1);         // 求解子问题
  chosen.pop_back();   // 准备回溯到上一问题之前，还原现场
}

bool check() {
  n = inf.readInt();
  calc(1);
  while (!ouf.eof()) {
    string str = ouf.readLine();
    int len = str.size();
    // remove last space
    if (str[len - 1] == ' ')
      str = str.substr(0, len - 1);
    if (h.find(str) == h.end())
      return 0;
    h.erase(str);
  }
  return !h.size();
}

int main(int argc, char *argv[]) {
  registerTestlibCmd(argc, argv);
  if (check()) {
    quitf(_ok, "Accepted");
  } else {
    quitf(_wa, "Wrong Answer");
  }
}
