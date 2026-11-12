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
        int n;
        int cont = 0;
        cin >> n;
        string v;
        cin >> v;
        if (v[0] == 'B') {
            cont++;
        }
        for (int i = 1; i < n; i++) {
            if (v[i-1] != v[i]) {
                continue;
            }
            cont++;
        }
        cout << cont << endl;



    }

    return 0;
}
