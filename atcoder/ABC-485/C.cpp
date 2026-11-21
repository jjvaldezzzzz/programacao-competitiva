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
    //ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);

    int n;
    cin >> n;
    vi vet(n);
    vi a(2*n);
    vi b(2*n);
    int i;

    for (i = 0; i < n; i++) {
        cin >> vet[i];
    }

    int ind = 0;
    int cont = 1;

    for (i = 0; i < n-1; i++) {

        if (vet[i] != vet[i+1]) {
            //cout << vet[i] << " " << vet[i+1] << endl;
            while (cont > 0) {
                a[ind] = cont;
                ind++;
                cont--;
            }
            cont = 1;
        }
        else {
            cont++;
        }
    }
    i = 1;
    while (i <= cont) {
        a[ind] = i;
        ind++;
        i++;
    }
    cont = 1;
    ind = 0;
    for (i = n-1; i > 0; i--) {
        if (vet[i] != vet[i-1]) {
            //cout << vet[i] << " " << vet[i+1] << endl;
            while (cont > 0) {
                b[n - ind - 1] = cont;
                cont--;
                ind++;
            }
            cont = 1;
        }
        else {
            cont++;
        }
    }
    i = 1;

    while (i <= cont) {
        b[n - ind - 1] = i;
        i++;
        ind++;
    }
    for (i = 0; i < n; i++) {
        cout << min(a[i], b[i]) << " ";
    }
    cout << endl;

    return 0;
}
