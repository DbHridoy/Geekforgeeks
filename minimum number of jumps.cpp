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
int minJumps(int arr[], int n) {
    int i,j,k;
    int a[n];
    fill_n(a,n,INT_MAX);
    a[0]=0;
    // for(i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(j+arr[j]>=i){
                // cout<<i<<" "<<j<<" "<< a[j]<<endl;
                a[i]=min(a[i],a[j]+1);
            }
        }
    }
    // for(i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    if(a[n-1]<0||a[n-1]==INT_MAX){
        return -1;
    }
    return a[n-1];
}
int32_t main() {
    faster;
    int i, j;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<minJumps(a,n)<<endl;
    return (0);
}