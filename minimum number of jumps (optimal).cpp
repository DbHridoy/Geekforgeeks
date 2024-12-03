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
int minJumps(int a[], int n) {
    if(n==1)return 0;
    int i,j,mxr,cre;
    j=mxr=cre=0;
    for(i=0;i<n;i++){
        mxr=max(mxr,i+a[i]);
        // cout<<i<<" "<<j<<" "<<cre<<" "<<mxr<<endl;
        if(mxr>=n-1){
            return ++j;
        }
        else if(mxr==i){
            return -1;
        }
        else if(i==cre){
            j++;
            cre=mxr;
        }
    }
    return j;
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