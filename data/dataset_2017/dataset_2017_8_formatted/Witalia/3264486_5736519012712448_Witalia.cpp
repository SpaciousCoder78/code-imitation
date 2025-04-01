#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <map>
#include <memory.h>
#include <set>
#include <stdio.h>
#include <string>
#include <vector>
#define _USE_MATH_DEFINES
#include <complex>
#include <fstream>
#include <iomanip>
#include <limits.h>
#include <list>
#include <math.h>
#include <queue>
#include <stack>
#include <time.h>

#define Cpp11
#ifdef Cpp11
#include <atomic>
#include <cassert>
#include <chrono>
#include <condition_variable>
#include <mutex>
#include <random>
#include <regex>
#include <thread>
#include <unordered_map>
#include <unordered_set>
#include <valarray>
using namespace std::chrono;
#endif
using namespace std;

typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

// const int mx[4] = { 1, 0, -1, 0 };
// const int my[4] = { 0, 1, 0, -1 };

const int Inf = 1000000000;
const int Mi = 1000000007;
const int N = 500005;
const int M = 100005;
// const int K = 20;
const ld eps = 10e-7;
const ld PI = 2 * acos(0.0);
const ll InfLL = ll(Inf) * ll(Inf);

unsigned rand16() { return rand() % (1 << 16); }
unsigned rand32() { return (rand16() << 16) + rand16(); }
ull rand64() { return (((ull)rand32()) << 32) + rand32(); }
int rand(int L, int R) {
  if (L > R)
    return R;
  return rand32() % (R - L + 1) + L;
}
ld random(ld L, ld R) {
  return rand(ceil((L - eps) * 100), floor((R + eps) * 100)) / 100.0;
}

ll Abs(ll a) { return a < 0 ? -a : a; }
ll sqr(ll a) { return a * a; }
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }

string toStr(int n) {
  char s[100];
  sprintf(s, "%d", n);
  return string(s);
}

//#define ONLINE_JUDGE
int main() {
  std::ios_base::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int T;
  cin >> T;
  for (int t = 0; t < T; ++t) {
    cout << "Case #" << (t + 1) << ": ";

    string s;
    int k;
    cin >> s >> k;
    int ans = 0;
    for (int i = 0; i <= s.size() - k; ++i) {
      if (s[i] == '-') {
        for (int j = 0; j < k; ++j) {
          s[i + j] = s[i + j] == '-' ? '+' : '-';
        }
        ++ans;
      }
    }
    bool fl = true;
    for (auto ch : s) {
      fl &= ch == '+';
    }
    if (fl) {
      cout << ans << endl;
    } else {
      cout << "IMPOSSIBLE" << endl;
    }
  }
  return 0;
}