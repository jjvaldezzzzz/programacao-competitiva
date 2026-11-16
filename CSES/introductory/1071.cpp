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
    ull a = 1, b = 1;
    while (t--) {

        //cin >> a >> b;
        ull maxi = max(a, b);
        if (a % 2 == 0 && maxi == b) {
            cout << maxi*maxi - a + 1;
        }
        else if (a%2 == 0 && maxi == a) {
            cout << maxi*maxi - b + 1;
        }
        else if (a%2 == 1 && maxi == b) {
            cout << (maxi-1)*(maxi-1) + a;
        }
        else {
            cout << (maxi-1)*(maxi-1) + b;
        }

        if (b<5) {
            cout << " ";
            b++;
        }else {
            cout << endl;
            a++;
            b = 1;
        }
    }

    return 0;
}
