#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;

int main(){

    vi v(3);
    cin >> v[0] >> v[1] >> v[2];
    auto mini = min_element(v.begin(), v.end());
    cout << *mini << " " << *max_element(begin(v), end(v)) << endl;
}
