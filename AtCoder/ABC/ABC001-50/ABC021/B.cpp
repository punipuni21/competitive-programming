#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
#include<utility>
#include<string>
#include<map>
#include<queue>
#include<cstdio>
#include<cmath>

#define REP(n) for(int i = 0;i < n;i++)
#define LLREP(n) for(long long int  i = 0;i < n;i++)
typedef long long int ll;
using namespace std;
#define MAX_A 105

int main(){

    int n,a,b,k,tmp;
    cin >> n >> a >> b >> k;

    vector<int> count(MAX_A,0);

    count[a]++;
    count[b]++;

    REP(k){
        cin >> tmp;
        count[tmp]++;
    }

    /*REP(n){
        //cout << count[i] << endl;
        //count[tmp]++;
    }*/

    bool mini = true;
    REP(n+1){
        if(count[i] >1){
            mini = false;
        }
    }
    if(mini){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
