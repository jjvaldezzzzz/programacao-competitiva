#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ull a, b, c, d;
    cin >> a >> b >> c >> d;
    while (a >= 100 || b >= 100 || c >= 100 || d >= 100) {
        a = a%100, b = b%100, c = c%100, d = d%100;
    }
    ull r = a*b*c*d;
    if (r%100 < 10) {
        cout << "0";
    }

    cout << r%100 << endl;

}
