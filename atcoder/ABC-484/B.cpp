#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int uint;
typedef vector< int > vi;
typedef pair< int , int > ii;
// (int) 'a' = 97, (int) 'A' = 45

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    vi v(n);

    int flag = 0;
    int mini = INF;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < mini) {
            mini = v[i];
        }
        if (v[i] == 9) {
            flag = 1;
        }

    }
    if (!flag) {
        cout << -1 << endl;
    }
    else {
        cout << mini << endl;
    }




    return 0;
}
