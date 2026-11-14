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

    vi a(n+1, INF);
    vi b(n+1, INF);
    int cont = 0;

    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    for (int i = 0 ; i < n ; i++) {
        cin >> b[i];
    }
    int diff = INF;
    int ind = INF;
    for (int i = 1 ; i < n ; i++) {
        if (a[i] != b[i]) {
            cont++;
            if (a[i+1] == b[i]) {
                diff = 0;
                ind = i + 1;
                break;
            }
            if (b[i+1] == a[i]) {
                diff = 1;
                ind = i + 1;
                break;
            }

        }
    }
    if (diff == 0) {
        for (int i = ind ; i < n+1; i++) {
            if (a[i] != b[i-1]) {
                cont++;
                break;
            }
        }
    }
    else if (diff == 1) {
        for (int i = ind ; i < n+1; i++) {
            if (b[i] != a[i-1]) {
                cont++;
                break;
            }
        }
    }
    int flag = 1;
    sort(all(a));
    sort(all(b));
    for (int i = 0 ; i < n ; i++) {
        if (a[i] != b[i]) {
            flag = 0;
        }
    }
    if (cont == 2 && flag) {
        cout << "Yes\n";
    }
    else if (cont == 0) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }





    return 0;
}
