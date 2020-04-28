#define _USE_MATH_DEFINES
#include<iostream>
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
#include<bitset>
#include<stack>
#include<fstream>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define repi(itr, ds) for (auto itr = ds.begin(); itr != ds.end(); itr++)

using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef tuple<ll, ll, ll> lltpl;
typedef tuple<int, int, int> tpl;

int dy8[8] = { 2,2,-2,-2,1,1,-1,-1 };
int dx8[8] = { 1,-1,1,-1,2,-2,2,-2 };
int dx4[4] = { 1,0,0,-1 };
int dy4[4] = { 0,1,-1,0 };


/******************************************************************************************/

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

// vector
template <typename T>
istream& operator>>(istream & is, vector<T> & vec) { for (T& x : vec) is >> x; return is; }
// pair
template <typename T, typename U>ostream& operator<<(ostream & os, pair<T, U> & pair_var) { os << "(" << pair_var.first << ", " << pair_var.second << ")"; return os; }
// vector
template <typename T>ostream& operator<<(ostream & os, const vector<T> & vec) { os << "{";	for (int i = 0; i < vec.size(); i++) { os << vec[i] << (i + 1 == vec.size() ? "" : ", "); }os << "}"; return os; }
// map
template <typename T, typename U>ostream& operator<<(ostream & os, map<T, U> & map_var) { os << "{";	repi(itr, map_var) { os << *itr; itr++; if (itr != map_var.end()) os << ", "; itr--; }os << "}"; return os; }
// set
template <typename T>ostream& operator<<(ostream & os, set<T> & set_var) { os << "{"; repi(itr, set_var) { os << *itr; itr++; if (itr != set_var.end()) os << ", "; itr--; }os << "}"; return os; }



const int IINF = 1e9 + 7;
const ll LINF = 1e18 + 7;
constexpr ll MOD = 1e9 + 7;

//ここから書くこと






int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<pii> a(n);

	vector<int> idx(n);
	int sum = 1LL;
	for (int i = 0; i < n;i++)
	{
		idx[i] = i;
		sum *= (i + 1);
	}

	for (int i = 0; i < n; i++)
	{
		cin >> a[i].first >> a[i].second;
		//cout << a[i].first << " " << a[i].second << endl;
	}

	double ans = 0;
	do {

		

		for (int i = 0; i < n - 1; i++)
		{
			//idx[i]がインデックス番号
			int from = idx[i];
			int to = idx[i + 1];
			ans += sqrt((a[from].first - a[to].first) * (a[from].first - a[to].first) + (a[from].second - a[to].second) * (a[from].second - a[to].second));
		}
		//cout << "ans= " << ans << endl;


	} while (next_permutation(idx.begin(), idx.end()));
	
	
	printf("%.9f\n", ans / (double)sum);

	return 0;
}