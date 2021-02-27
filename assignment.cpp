#include <algorithm>
#include <iostream>
 
using namespace std;
 

int findPlatform(int arr[], int dep[], int n)
{
 
 
    int plat_needed = 1, result = 1;
    int i = 1, j = 0;
 

    for (int i = 0; i < n; i++) {
     
        plat_needed = 1;
 
        for (int j = i + 1; j < n; j++) {
          
            if ((arr[i] >= arr[j] && arr[i] <= dep[j]) || 
           (arr[j] >= arr[i] && arr[j] <= dep[i]))
                plat_needed++;
        }
 
   
        result = max(result, plat_needed);
    }
 
    return result;
}
 

int main()
{
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum Number of Platforms Required = "
         << findPlatform(arr, dep, n);
    return 0;
}


//program 1

#include <bits/stdc++.h>
using namespace std;

int deno[] = { 1, 2, 5, 10, 20,
               50, 100, 500, 1000 };
int n = sizeof(deno) / sizeof(deno[0]);
 
void findMin(int V)
{
    sort(deno, deno + n);
 

    vector<int> ans;
 
 
    for (int i = n - 1; i >= 0; i--) {
 
 
        while (V >= deno[i]) {
            V -= deno[i];
            ans.push_back(deno[i]);
        }
    }
 

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}
 

int main()
{
    int n = 93;
    cout << "Following is minimal"
         << " number of change for " << n
         << ": ";
    findMin(n);
    return 0;
}