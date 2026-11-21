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
typedef vector< ull > vi;
typedef pair< int , int > ii;
// (int) 'a' = 97, (int) 'A' = 45

ll comp(ll a, ll b) {
    return a+b;
}

class SegmentTree {
    private:
        vector<ll> st, A;
        ll size;
        #define left(p) (p << 1)
        #define right(p) ((p << 1) + 1)
        void build(ll p, ll l, ll r) {
            if (l == r) st[p] = A[l];
            else {
                build(left(p), l, (l+r)/2);
                build(right(p), (l+r)/2 + 1, r);
                st[p] = comp(st[left(p)], st[right(p)]);
            }
        }
        int query(ll p, ll l, ll r, ll a, ll b) {
            if (a > r || b < l) return 1;
            if (l >= a && r <= b) return st[p];
            ll p1 = query(left(p), l, (l+r)/2, a, b);
            ll p2 = query(right(p), (l+r)/2 + 1, r, a, b);
            return comp(p1, p2);
        }
        void update(ll p, ll l, ll r, ll ind, ll v) {
            if (ind > r || ind < l) return;
            else if (l == ind && r == ind) {
                A[ind] = v;
                st[p] = A[l];
            }
            else {
                update(left(p), l, (l+r)/2, ind, v);
                update(right(p), (l+r)/2 + 1, r, ind, v);
                st[p] = comp(st[left(p)], st[right(p)]);
            }
        }
    public:
        SegmentTree(vector<ll> &_A) {
            A = _A;
            size = A.size();
            st.assign(4*size, INF);
            build(1, 0, size - 1);
        }
    ll query(ll a, ll b){ query(1, 0, size - 1, a, b); }
    void update(int ind, int v) { update(1, 0, size - 1, ind, v); }
    ll solve(ll l, ll r) {
        ll cont = 0;
        for (ll i = 0;i<4*size;i++) {
            cout << st[i] << " ";
            if (st[i] <= r && st[i] >= l) cont++;
        }
            cout << endl;
        return cont;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> vet(n);
    for (ll i = 0;i<n;i++) {
        cin >> vet[i];
    }
    SegmentTree st = SegmentTree(vet);
    cout << st.solve(l, r) << endl;


    return 0;
}
