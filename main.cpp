#include <iostream>
#include <vector>

using namespace std;

using vb = vector<bool>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		int n;
		cin >> n;

		auto r = vb(n, false);

		for (auto k = 1; k <= n; ++k) {
			for (auto i = k; i <= n; i += k) {
				auto q = r[i - 1];
				r[i - 1] = q ^ true;
			}
		}

		auto ans = int{ 0 };
		for (const auto& x : r) {
			if (x) {
				++ans;
			}
		}

		cout << ans << '\n';
	}

	return 0;
}