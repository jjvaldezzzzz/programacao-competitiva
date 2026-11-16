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

    vi a(n + 1, INF);
    vi b(n + 1, INF);
    int flag = 1;
    for (int i = 0;i<n;i++) {
        cin >> a[i];
    }
    for (int i = 0;i<n;i++) {
        cin >> b[i];
    }
    int diff = INF;
    int num = 0;
    int cont = 0;
    int ind = 0;
    for (int i = 0;i<n + 1;i++) {
        if (a[i] != b[i]) {
            cont++;
            if (a[i] == b[i + 1]) {
                diff = 1;
                num = b[i];
                ind = i + 1;
                break;
            }
            if (a[i + 1] == b[i]) {
                diff = 0;
                num = a[i];
                ind = i + 1;
                break;
            }

        }
    }
    int aux;
    if (!diff) {
        for (int i = ind;i<n;i++) {
            if (a[i + 1] == b[i]) {
                aux = a[i + 1];
                a[i+1] = a[i];
                a[i] = aux;
            }
            ind = i + 1;
        }
    }
    else if (diff == 1) {
        for (int i = ind;i<n;i++) {
            if (b[i + 1] == a[i]) {
                aux = b[i + 1];
                b[i+1] = b[i];
                b[i] = aux;
            }
            ind = i + 1;
        }
    }
    for (int i = ind ; i < n ; i++) {
        if (a[i] != b[i]) {
            flag = 0;
        }
    }
    if (flag) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }





    return 0;
}
