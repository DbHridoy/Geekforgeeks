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
long long maxSubarraySum(int arr[], int n) {
    long long maxsum = arr[0];
    long long sum = 0;
    // memset(arr,0,sizeof(arr));
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        // cout<<sum[i]<<" "<<maxsum<<endl;
        maxsum = max(sum, maxsum);
        if (sum < 0) {
            sum = 0;
        }
    }
    return maxsum;
}
int32_t main() {
    faster;
    int i, j;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int n;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << maxSubarraySum(a, n) << endl;
    return (0);
}