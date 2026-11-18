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

    vi a(n);
    vi b(n);

    for (int i = 0;i<n;i++) cin >> a[i];
    for (int i = 0;i<n;i++) cin >> b[i];

    int pri = -1, ult = n;

    for (int i = 0;i<n;i++) {
        if (a[i] != b[i]) {
            pri = i;
            break;
        }
    }
    for (int i = n-1;i>=0;i--) {
        if (a[i] != b[i]) {
            ult = i;
            break;
        }
    }

    if (pri == ult) {
        cout << "No" << endl;
        return 0;
    }
    if (pri == -1) {
        cout << "Yes" << endl;
        return 0;
    }
    int ultimo = a[ult];
    int prim = a[pri];
    vi a2 = a;
    a.erase(a.begin() + pri);
    a.insert(a.begin() + ult, prim);

    a2.erase(a2.begin() + ult);
    a2.insert(a2.begin() + pri, ultimo);

    if (a == b || a2 == b) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
