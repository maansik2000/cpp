#include <bits/stdc++.h> 
using namespace std; 

class node  
{  
    public: 
    int data;  
    node* left;  
    node* right;  
};  

node* newNode(int data)  
{  
    node* Node = new node(); 
    Node->data = data;  
    Node->left = NULL;  
    Node->right = NULL;  
  
    return(Node);  
}  
  

int identicalTrees(node* a, node* b)  
{  
 
    if (a == NULL && b == NULL)  
        return 1;  
  

    if (a != NULL && b != NULL)  
    {  
        return
        (  
            a->data == b->data &&  
            identicalTrees(a->left, b->left) &&  
            identicalTrees(a->right, b->right)  
        );  
    }  
      
 
    return 0;  
}  
  
/* Driver code*/
int main()  
{  
    node *root1 = newNode(1);  
    node *root2 = newNode(1);  
    root1->left = newNode(2);  
    root1->right = newNode(3);  
    root1->left->left = newNode(4);  
    root1->left->right = newNode(5);  
  
    root2->left = newNode(2);  
    root2->right = newNode(3);  
    root2->left->left = newNode(4);  
    root2->left->right = newNode(5);  
  
    if(identicalTrees(root1, root2))  
        cout << "Both tree are identical.";  
    else
        cout << "Trees are not identical.";  
  
return 0;  
}  

//program 2

// C++ program to find the sum and 
// product of k smallest and k largest 
// composite numbers in an array 
#include <bits/stdc++.h> 
using namespace std; 
  
vector<bool> SieveOfEratosthenes(int max_val) 
{ 
    // Create a boolean vector "prime[0..n]". A 
    // value in prime[i] will finally be false 
    // if i is Not a prime, else true. 
    vector<bool> prime(max_val + 1, true); 
    for (int p = 2; p * p <= max_val; p++) { 
  
        // If prime[p] is not changed, then 
        // it is a prime 
        if (prime[p] == true) { 
  
            // Update all multiples of p 
            for (int i = p * 2; i <= max_val; i += p) 
                prime[i] = false; 
        } 
    } 
    return prime; 
} 
  

void compositeSumAndProduct(int arr[], int n, int k) 
{ 

    int max_val = *max_element(arr, arr + n); 
  

    vector<bool> prime = SieveOfEratosthenes(max_val); 
  
   
    prime[0] = true; 
    prime[1] = true; 
  

    priority_queue<int> maxHeap; 
  

    priority_queue<int, vector<int>, greater<int>>  
        minHeap; 

    for (int i = 0; i < n; i++) 
        if (!prime[arr[i]]) { 
            minHeap.push(arr[i]); 
            maxHeap.push(arr[i]); 
        } 
    long long int minProduct = 1 
        , maxProduct = 1 
        , minSum = 0 
        , maxSum = 0; 
    while (k--) { 
  

        minProduct *= minHeap.top(); 
        maxProduct *= maxHeap.top(); 
  

        minSum += minHeap.top(); 
        maxSum += maxHeap.top(); 
  
        minHeap.pop(); 
  

        maxHeap.pop(); 
    } 
  
    cout << "Sum of k-minimum composite numbers is " 
         << minSum << "\n"; 
    cout << "Sum of k-maximum composite numbers is " 
         << maxSum << "\n"; 
    cout << "Product of k-minimum composite numbers is " 
         << minProduct << "\n"; 
    cout << "Product of k-maximum composite numbers is " 
         << maxProduct; 
} 
  

int main() 
{ 
  
    int arr[] = { 4, 2, 12, 13, 5, 19 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    int k = 3; 
  
    compositeSumAndProduct(arr, n, k); 
  
    return 0; 
} 