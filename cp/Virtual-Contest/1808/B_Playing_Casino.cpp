// Matrix Column Absolute difference (4 TLEs, this one Optimal)

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rev(i, a, b) for (ll i = a; i >= b; i--)
#define all(x) begin(x), end(x)
#define sz(x) int(x.size())
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<ll, ll> pi;
typedef pair<int, multiset<int> > pmi;
typedef map<ll, ll> mp;
const ll mod = 1e9 + 7;
const int mxn = 2e5 + 5;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll> > vec(n, vector<ll>(m));
        rep(i, 0, n) {
            rep(j, 0, m) {
                cin >> vec[i][j];
            }
        }
        ll ans = 0;
        rep(j, 0, m) {
            vector<ll> column(n);
            rep(i, 0, n) {
                column[i] = vec[i][j];
            }
            sort(column.begin(), column.end());
            ll prefix_sum = 0;
            rep(i, 0, n) {
                ans += column[i] * i - prefix_sum;
                prefix_sum += column[i];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
