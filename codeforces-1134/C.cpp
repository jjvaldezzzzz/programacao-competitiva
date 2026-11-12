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
        int atual = 1;
        cin >> n;
        vi vet(n, 0);
        vi vet1(n, 0);
        vi vet2(n, 0);
        vi sobra;

        ull cont = 1;
        for (int i = 0; i < n; i++) {
            cin >> vet[i];
        }
        sort(all(vet));
        vet1[0] = vet[0];
        for (int i = 1; i < n; i++) {
            if (vet[i-1] == vet[i]) {
                if (atual < 2) {
                    vet2[i] = vet[i];
                    atual++;
                    cont++;
                }
                else {
                    sobra.pb(vet[i]);
                }
            }
            else {
                vet1[i] = vet[i];
                cont++;
                atual = 1;
            }
        }
        sort(all(vet1));
        sort(all(vet2));

        cout << cont << endl;
        for (auto i : vet1) {
            if (i != 0) {
                cout << i << " ";
            }
        }

        for (auto i : sobra) {
            cout << i << " ";
        }
        for (ull i = n - 1; i > 0; i--) {
            if (vet2[i] != 0) {
                cout << vet2[i] << " ";
            }
        }

        cout << endl;


    }

    return 0;
}
