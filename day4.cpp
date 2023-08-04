// An array contains both positive and negative numbers in random order. Rearrange the array elements
//  so that all negative numbers appear before all positive numbers.
// looking at expected output we have to use extra space(array) to store negative nos and positive nos.
// so TC:O(n) and SC:O(n) 

#include <iostream>
using namespace std;
void solve(int arr[], int n)
{
    int ans[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ans[j++] = arr[i];
        }
    }
    if (j == n or j == 0)
        return;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            ans[j++] = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // int arr[] = {1, -2, 3, -4, 5, -6};
    // Test Case 2:
    // int arr[]= {10, -5, 7, -3, 0, -8};
    // Expected Output: [-5, -3, -8, 10, 7, 0]
    // Test Case 3:
    // int arr[]={2, 4, -6, 8, -10};
    // Expected Output: [-6, -10, 2, 4, 8]

    // Test Case 4:
    // int arr[]= {1, 2, 3, -4, -5, -6};
    // Expected Output: [-4, -5, -6, 1, 2, 3]
    // Test Case 5:
    // int arr[]={7, -9, 2, -6, 0, -1};
    // Expected Output: [-9, -6, -1, 7, 2, 0]

    // Test Case 6:
    // int arr[]={3, -7, 2, -8, 5, -4};
    // Expected Output: [-7, -8, -4, 3, 2, 5]
    // Test Case 7:
    // int arr[]={-1, -2, -3, -4, -5};
    // Expected Output: [-1, -2, -3, -4, -5]
    // Test Case 8:
    // int arr[]= {6, 4, 3, 0, -2, -7, -9};
    // Expected Output: [-2, -7, -9, 6, 4, 3, 0]
    // Test Case 9:
    // int arr[]= {1, 2, 3, 4, 5};
    // Expected Output: [1, 2, 3, 4, 5]

    // Test Case 10:
    int arr[] = {0, 0, 0, -1, -2, -3};
    // Expected Output: [-1, -2, -3, 0, 0, 0]

    int n = sizeof(arr) /
            sizeof(arr[0]);
    solve(arr, n);
    display(arr, n);
    return 0;
}
// -------------------------------------------------------
// Below solution is for : Move all negative numbers to beginning and positive to end with constant extra space
//SO TC: O(n) and SC: O(1)
#include<iostream>
using namespace std;

void solve(int arr[],int low,int high){
    while(low<=high){
        if(arr[low] > 0 and arr[high] < 0){
            swap(arr[low],arr[high]);
            low++;high--;
        }
        else if(arr[low] < 0 and arr[high] < 0){
            low++;
        }
        else if(arr[low] > 0 and arr[high] > 0){
            high--;
        }
        else{
            low++;high--;
        }
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1, -2, 3, -4, 5, -6};
    int n = sizeof(arr) /
                sizeof(arr[0]);
    solve(arr,0,n-1);
    display(arr,n);
    return 0;
}