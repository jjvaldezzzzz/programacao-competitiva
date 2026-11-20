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

    ull n;
    cin >> n;
    vi vet(n);
    vi cont(n + 1, 0);
    vi res(n, 0);
    for (ull i = 0;i<n;i++) {
        cin >> vet[i];
        cont[vet[i]]++;
        if (i > 0) {
            if (vet[i]==vet[i-1]) {
                res[i] = 0;
                continue;
            }
        }
        res[i] = i - cont[vet[i]] + 1;
    }
    ull contr = 1;
    for (ull i = 0;i<n;i++) {
        contr += res[i];
    }
    cout << contr << endl;


    return 0;
}
