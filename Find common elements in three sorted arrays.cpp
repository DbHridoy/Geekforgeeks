#include <bits/stdc++.h>

#define int long long
#define endl '\n'
#define vec vector<long long>
#define moc map<char, long long>
#define moi map<long long, long long>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

using namespace std;
int32_t main() {
    faster;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int m, n, o;
    cin >> m >> n >> o;
    int a[m], b[n], c[o];
    map<int, int> mp;
    vector<int> v;
    for (int i = 0; i < m; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (mp[b[i]] == 1) mp[b[i]]++;
    }
    for (int i = 0; i < o; i++) {
        cin >> c[i];
        if (mp[c[i]] == 2) {
            mp[c[i]]++;
            v.push_back(c[i]);
        }
    }
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    return (0);
}
