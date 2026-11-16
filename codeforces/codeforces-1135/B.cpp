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

    int t;

    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll cont0 = 0, cont1 = 0;
        string s;
        cin >> s;
        for (auto i : s) {
            if (i == '0') {
                cont0++;
            }
            else if (i == '1') {
                cont1++;
            }
        }
        //cout << cont0 << " " << cont1 << endl;
        if (cont0 >= cont1) {

            if (cont0 + k > n) cont0 = n;
            else cont0 += k;

            if (cont1 - k < 0) cont1 = 0;
            else cont1 -= k;
        }
        else if (cont1 > cont0) {
            if (cont1 + k > n) cont1 = n;
            else cont1 += k;

            if (cont0 - k < 0) cont0 = 0;
            else cont0 -= k;
        }
        //cout << cont0 << " " << cont1 << endl;
        ull r = 1 + ((cont0*cont0)+cont0)/2 + ((cont1*cont1)+cont1)/2;

        cout << r << endl;

    }

    return 0;
}
