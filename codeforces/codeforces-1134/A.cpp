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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;
    int n;
    while (t--) {
        vi v(3);
        for (int i = 0; i < 3; i++) {
            cin >> v[i];
        }
        sort(all(v));
        if (v[2] - v[0] == 2 && v[2] - v[1] == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }




    }

    return 0;
}
