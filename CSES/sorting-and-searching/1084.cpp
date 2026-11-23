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

    int n, m, k;
    cin >> n >> m >> k;

    vi a(n);
    vi b(m);

    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int j = 0;
    int i = 0;
    int r = 0;
    while (j < m && i < n) {
        if (abs(a[i] - b[j]) <= k) {
            r++;
            i++;
            j++;
        }
        else if (a[i] < b[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    cout << r << endl;




    return 0;
}
