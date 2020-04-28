﻿#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
#include<utility>
#include<string>
#include<cmath>
#include<cstring>
#include<queue>
#include<map>
#include<set>
#include<climits>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)

using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


template<typename T>
vector<T> make_v(size_t a) { return vector<T>(a); }
template<typename T, typename... Ts>
auto make_v(size_t a, Ts... ts) {
	return vector<decltype(make_v<T>(ts...))>(a, make_v<T>(ts...));
}
template<typename T, typename V>
typename enable_if<is_class<T>::value == 0>::type
fill_v(T& t, const V& v) { t = v; }
template<typename T, typename V>
typename enable_if<is_class<T>::value != 0>::type
fill_v(T& t, const V& v) {
	for (auto& e : t) fill_v(e, v);
}


#define ARRAY_MAX 100005
const int INF = INT32_MAX / 3;
const ll MOD = 1e9 + 7;

int dx[4] = { 1,0,0,-1 };
int dy[4] = { 0,1,-1,0 };


/******************************************************************************************/



//ユークリッド互除法
template<typename T>
T gcd(T x, T y) {

	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}

/*最小公倍数*/
template<typename T>
T lcm(T x, T y) {
	T tmp = gcd(x, y);
	return x * y / tmp;
}


int main() {

	

	int t;
	cin >> t;
	for (int _ = 0; _ < t; _++)
	{
		int n, m;
		cin >> n >> m;
		vector<pii> v(n);
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i].first;
			v[i].second = i;
			sum += v[i].first;
		}

		if (n == 2) {
			cout << "-1" << endl;
			continue;
		}
		if (n > m) {
			cout << "-1" << endl;
			continue;
		}
		sort(v.begin(), v.end());

		int ans = 2 * sum;
		ans += (m - n) * (v[0].first + v[1].first);
		cout << ans << endl;
		for (int i = 0; i < n; i++)
		{
			cout << i % n + 1 << " " << (i + 1) % n + 1 << endl;
		}

		for (int i = 0; i < m - n; i++)
		{
			cout << v[0].second + 1 << " " << v[1].second + 1 << endl;
		}
	}

	return 0;
}