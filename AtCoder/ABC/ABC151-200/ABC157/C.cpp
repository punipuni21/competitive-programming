#include<algorithm>
#include<bitset>
#include<cassert>
#include<cfloat>
#include<climits>
#include<cmath>
#include<deque>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<queue>
#include<array>
#include<set>
#include<stack>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<utility>
#include<vector>

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


template <typename T>
bool chmax(T & a, const T & b) {
	if (a < b) {
		a = b;
		return true;
	}
	return false;
}
template <typename T>
bool chmin(T & a, const T & b) {
	if (a > b) {
		a = b;
		return true;
	}
	return false;
}


#define ARRAY_MAX 100005
const int INF = 1e9 + 7;
const ll MOD = 1e9 + 7;

int dx4[4] = { 1,0,0,-1 };
int dy4[4] = { 0,1,-1,0 };
int dx2[2] = { 1,0 };
int dy2[2] = { 0,1 };

/******************************************************************************************/
typedef tuple<int,int,int> tpl;


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


int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(10);

    int N,M;
    cin >> N >> M;

    int v[5] = {};
    for (int i = 0; i < 5; i++)
    {
        v[i] = -1;
    }

    bool ok = true;
    for (int i = 0; i < M; i++)
    {
        int s,c;
        cin >> s >> c;
        if(v[s] == -1 || v[s] == c){
            v[s] = c;
        }else{
            ok = false;
        }
    }
    
    for (int i = 1; i <= N; i++)
    {
        if(v[i] == -1){
            if(i==1){

                if(N==1){
                    v[i] = 0;
                }else
                {
                    v[i] = 1;
                }
                
            }else{
                v[i] = 0;
            }
        }
    }

    if(N > 1 && v[1] == 0){
        ok = false;
    }
    
    if(ok){
        for (int i = 1; i <= N; i++)
        {
            cout << v[i];
        }
        cout << endl;
    }else{
        cout << "-1" << endl;
    }


	return 0;
}




