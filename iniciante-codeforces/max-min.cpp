#include <bits/stdc++.h>
#define vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vi v(3);
    cin >> v[0] >> v[1] >> v[2];
    int r = min_element(v.begin(), v.end());
    cout << r << endl;
}
