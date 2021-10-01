#include <bits/stdc++.h>
using namespace std;
 
const int mod = 1e9 + 7;
 
// Find the number of ways
// to reach the end
int ways(int i, int arr[], int n)
{
    // Base case
    if (i == n - 1)
        return 1;
 
    int sum = 0;
 
    // Recursive structure
    for (int j = 1;
         j + i < n && j <= arr[i];
         j++) {
        sum += (ways(i + j,
                     arr, n))
               % mod;
        sum %= mod;
    }
 
    return sum % mod;
}
 
// Driver code
int main()
{
    int arr[] = { 5, 3, 1, 4, 3 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << ways(0, arr, n) << endl;
 
    return 0;
}