#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  auto sum = 0LL;
  for (auto i = 0; i < n; ++i) {
    ll w;
    cin >> w;
    sum += w;
  }

  if (0 == sum % 3) {
    cout << "yes";
  } else {
    cout << "no";
  }

  return 0;
}