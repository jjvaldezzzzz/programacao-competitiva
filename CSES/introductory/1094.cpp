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
    vector<ull> v(n);
    for (ull i = 0; i < n; i++) {
        cin >> v[i];
    }
    ull cont = 0;
    for (ull i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            cont += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    cout << cont << endl;



    return 0;
}
