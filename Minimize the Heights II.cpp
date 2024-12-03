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
int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int ans=arr[n-1]-arr[0];
        int largest=arr[n-1]-k;
        int smallest=arr[0]+k;
        int mi,ma;
        for(int i=0;i<n-1;i++){
            mi=min(smallest,arr[i+1]-k);
            ma=max(largest,arr[i]+k);
            // cout<<mi<<" "<<ma<<endl;

            if(mi<0)continue;
            ans=min(ans,ma-mi);
        }
        // int mn,mx;
        // sort(arr,arr+n);
        // int ans=arr[n-1]-arr[0];
        // // (arr[mn=arr[0]+k;
        // mx=arr[n-1]-k;
        // for(int i=0;i<n-1;i++){
        //     mn=min(mn,arr[i+1]-k);
        //     mx=max(mx,arr[i]+k);
        //     cout<<mn<<" "<<mx<<endl;
        //     if(mn<0)continue;
        //     ans=min(ans,mx-mn);
        // }
        return ans;
    }
int32_t main() {
    faster;
    int i, j;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int n, k;
    cin >> k >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << getMinDiff(a, n, k) << endl;
    return (0);
}