
  
#include <bits/stdc++.h> 
using namespace std; 

int getPairs(int arr[], int N, int K) 
{
    int count = 0; 
  

    for (int i = 0; i < N; i++) { 
  
        for (int j = i + 1; j < N; j++) { 
  

            if (arr[i] > K * arr[i + 1]) 
                count++; 
        } 
    } 
    cout << count; 
} 
  
// Driver Code 
int main() 
{ 
    int arr[] = { 5, 6, 2, 1 }; 
    int N = sizeof(arr) / sizeof(arr[0]); 
    int K = 2; 
  
    // Function Call 
    getPairs(arr, N, K); 
  
    return 0; 
} 

//program 2
#include <stdio.h>
#include<stdlib.h>

int* SurpassersKing(int input1_size, int* input1)
{
    int i,k;
    int * count = (int*)malloc(input1_size*sizeof(int));
    for  (i = 0; i < input1_size; i++)
        *(count + i) = 0;


    for ( i = 0; i < input1_size; i++) 
    {
        for ( k = i + 1; k <input1_size; k++) 
            {
                    if (input1[i] < input1[k]) {
                             count[i]++;
                    }
            }
    } 

    return count;
}

int main() {
// your code goes here
int output_size;
int* output;

int ip1_size = 0;
int ip1_i;
int output_i;

printf("Enter the size:\n");
scanf("%d",&ip1_size);
int ip1[ip1_size];
for(ip1_i = 0; ip1_i < ip1_size; ip1_i++) {
    scanf("%d",%ip1[ip1_i]);
}
output = SurpassersKing(ip1_size,ip1);
output_size = ip1_size;

for(output_i=0; output_i < output_size; output_i++) {

    printf("%d\n",output[output_i]");

}
return 0;
}