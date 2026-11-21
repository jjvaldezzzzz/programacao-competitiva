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
typedef vector< ull > vi;
typedef pair< int , int > ii;
// (int) 'a' = 97, (int) 'A' = 45

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    char mat[a][b];
    vi v(b, 0);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < a; i++) {
        int cont = 0;
        for (int j = 0; j < b; j++) {
            if (mat[i][j] == 'x') {
                cont++;
                v[j]++;
            }
        }
        if (cont == b) cout << "Faucet " << i+1 << "\n";
    }
    for (int j = 0; j < b; j++) {
        if (v[j] == a) {
            cout << "Drain " << j+1 << "\n";
        }
    }


    return 0;
}
