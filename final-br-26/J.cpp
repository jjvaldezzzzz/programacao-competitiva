#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a <= 2 || b <= 2) {
        cout << "*" << endl;
    }
    else if (a == b) {
        if (a <= 4) {
            cout << "*" << endl;
        }
        else {
            cout << "1 2" << endl;
        }

    }
    else {
        cout << "1 1" << endl;

    }

}
