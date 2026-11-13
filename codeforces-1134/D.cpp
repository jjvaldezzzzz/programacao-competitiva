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
        int n, meio;
        int impar = 0;
        cin >> n;
        string v;
        cin >> v;
        vi resp(26, 0);
        if (n % 2 == 1) {
            impar = 1;
        }

        meio = n/2;
        for (int i = 0; i < n/2; i++) {
            char e = v[meio - i - 1];
            char d = v[(n/2) + impar + i];
            // cout << e << " " << d << endl;
            if (e != d) {
                int l = e - 97;
                int r = d - 97;
                //cout << l << " " << r << endl;
                if (l > r) {
                    while (l>r) {
                        //cout << l << endl;
                        resp[l] = 1;
                        l--;
                    }
                }
                else {
                    while (r > l) {
                        //cout << r << endl;
                        resp[r] = 1;
                        r--;
                    }
                }
            }
        }
        int r = 0;
        for (int i = 0; i < 26; i++) {
            r += resp[i];
        }
        cout << r << endl;




    }
    return 0;
}
