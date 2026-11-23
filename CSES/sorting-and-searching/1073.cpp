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
    for (int i = 0; i < n; i++) cin >> a[i];

    multiset<int> multi;
    int cont = 1;
    multi.insert(a[0]);
    for (int i = 1; i < n; i++) {
        auto it = multi.upper_bound(a[i]);
        if (it == multi.end()) {
            cont++;
        }
        else {
            multi.erase(it);
        }
        multi.insert(a[i]);
    }
    cout << cont << endl;



    return 0;
}
