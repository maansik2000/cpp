
#include <bits/stdc++.h>
using namespace std;
 

int OddEvenDegree(int N, int M,
                    int edges[][2])
{

    vector<int> Adj[N + 1];
     
    int EvenSum = 0;
    int OddSum = 0;
 
    for (int i = 0 ; i < M ; i++) {
        int x = edges[i][0];
        int y = edges[i][1];
 
        Adj[x].push_back(y);
        Adj[y].push_back(x);
    }
 
 
    for (int i = 1; i <= N; i++) {
 

        int x = Adj[i].size();

        if (x % 2 != 0)
        {
            OddSum += x;
        }
        else
        {
            EvenSum += x;
        }
             
    }
     
    return abs(OddSum - EvenSum);
}
 
// Driver code
int main()
{
    // Vertices and Edges
    int N = 4, M = 6;
 
    // Edges
    int edges[M][2] = { { 1, 2 }, { 1, 3 }, { 1, 4 },
                       { 2, 3 }, { 2, 4 }, { 3, 4 } };
 
    // Function Call
    cout<< OddEvenDegree(N, M, edges);
 
    return 0;
}