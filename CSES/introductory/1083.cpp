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

    ull n;
    cin >> n;
    int c;
    vi v(n, 0);
    for (int i = 0; i < n - 1; i++) {
        cin >> c;
        v[c-1]++;
    }

    for (int i = 0; i < n ; i++) {
        if (v[i] == 0) cout << i + 1 << endl;
    }



    return 0;
}
