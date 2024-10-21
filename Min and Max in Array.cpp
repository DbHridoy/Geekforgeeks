//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
   public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        long long n = arr.size();
        long long mn = arr[0], mx = arr[0];
        for (long long i = 0; i < n; i++) {
            if (arr[i] < mn) mn = arr[i];
            if (arr[i] > mx) mx = arr[i];
        }
        pair<long long, long long> b(mn, mx);
        return b; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// }

// #include <bits/stdc++.h>

// #define int long long
// #define endl '\n'
// #define vec vector<long long>
// #define moc map<char, long long>
// #define moi map<long long, long long>
// #define faster                    \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0)

// using namespace std;
// int32_t main() {
//     faster;
//     // freopen("../../input.txt", "r", stdin);
//     // freopen("../../output.txt", "w", stdout);
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int mn=a[0],mx=a[0];
//     for(int i=0;i<n;i++){
//         if(a[i]<mn)mn=a[i];
//         if(a[i]>mx)mx=a[i];
//     }
//     cout<<mn<<" "<<mx<<endl;
//     return (0);
// }
