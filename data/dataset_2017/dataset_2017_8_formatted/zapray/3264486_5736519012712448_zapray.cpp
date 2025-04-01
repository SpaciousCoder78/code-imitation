#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;
typedef long long ll;
#define MODD(a, b) (((a) % (b) + (b)) % (b))
#define EPS 1E-5
#define INF 1E9
#define REP(i, s, t) for (int i = (s); i < (t); i++)
#define FILL(x, v) memset(x, v, sizeof(x))

using namespace std;

void flip(string &s, int i, int k) {
  for (int j = 0; j < k; j++) {
    if (s[i + j] == '+')
      s[i + j] = '-';
    else
      s[i + j] = '+';
  }
}

int main() {
  int T;
  cin >> T;
  for (int cs = 1; cs <= T; cs++) {
    string s;
    int k;
    cin >> s >> k;
    int ans = 0;
    for (int i = 0; i + k - 1 < s.size(); i++) {
      if (s[i] == '-') {
        ans++;
        flip(s, i, k);
      }
    }
    bool ok = 1;
    for (char c : s)
      ok &= (c == '+');
    printf("Case #%d: ", cs);
    if (ok)
      printf("%d\n", ans);
    else
      puts("IMPOSSIBLE");
  }

  return 0;
}