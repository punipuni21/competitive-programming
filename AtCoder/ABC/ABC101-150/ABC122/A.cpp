#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<string>
#include<cmath>
#include<cstring>
#include<queue>
#include<map>
#include<climits>
#include<set>


using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;
typedef pair<ll, ll> pll;
int dx[4] = { 1,0,0,-1 };
int dy[4] = { 0,1,-1,0 };

#define ARRAY_MAX 100005

const ll INF = 1e9 + 7;
const ll MOD = 1e9 + 7;

int main() {


	char c;
	cin >> c;
	if (c == 'A')
	{
		cout << 'T' << endl;
	}
	else if (c == 'T')
	{
		cout << 'A' << endl;
	}
	else if (c == 'G') {
		cout << 'C' << endl;
	}
	else if (c == 'C')
	{
		cout << 'G' << endl;
	}


	return 0;
}
