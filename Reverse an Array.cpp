//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        long long n=arr.size();
        for(long long i=0;i<n/2;i++){
            swap(arr[i],arr[n-1-i]);
        }



        // long long a[n];
        // for(long long i=0;i<n;i++){
        //     a[i]=arr[n-1-i];
        // }
        // for(long long i=0;i<n;i++){
        //     arr[i]=a[i];
        // }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends