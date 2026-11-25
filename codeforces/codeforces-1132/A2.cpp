#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define EXP2(a, b) ((a) << (b))
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int uint;
typedef vector< int > vi;
typedef pair< int , int > ii;
// (int) 'a' = 97, (int) 'A' = 45

int main(){
    //ios_base::sync_with_stdio(false);
    //in.tie(nullptr);

    int t;
    int n;
    ull x;
    ull a, b;
    cin >> t;
    while (t--) {
        a = 0, b = 0;
        cin >> n;
        vi v(n);
        for (int i = 0;i<n;i++) cin >> v[i];
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < n; i++) {

            if (a < b) {
                a += EXP2(1, v[i]);

            }
            else {
                b += EXP2(1, v[i]);

            }
        }
        cout << a * b << "\n";
    }

    return 0;
}
