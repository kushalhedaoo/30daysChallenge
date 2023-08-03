
#include <iostream>
using namespace std;

/* Returns true if the there is a subarray of
arr[] with a sum equal to 'sum' otherwise
returns false. Also, prints the result */
int subArraySum(int arr[], int n, int sum)
{
    //  Initialize currentSum as value of
    // first element and starting point as 0 
    int currentSum = arr[0], start = 0, i;

    // //  Add elements one by one to currentSum and
    // if the currentSum exceeds the sum,
    // then remove starting element 
    for (i = 1; i <= n; i++)
    {
        // If currentSum exceeds the sum,
        // then remove the starting elements
        while (currentSum > sum && start < i - 1)
        {
            currentSum = currentSum - arr[start];
            start++;
        }

        // If currentSum becomes equal to sum,
        // then return true
        if (currentSum == sum)
        {
            for (int j = start; j < i; j++)
            {
                cout << arr[j] << " ";
            }
            return 1;
        }

        // Add this element to currentSum
        if (i < n)
            currentSum = currentSum + arr[i];
    }

    // If we reach here, then no subarray
    cout << "No subarray found";
    return 0;
}

// Driver Code
int main()
{
    // TC 1
    // int arr[] = { 1,4,7,3,9,8};
    // int sum = 11;
    // // TC 2
    // int arr[] = { 3, 2, 1, 5, 6};
    // int sum = 7;
    // TC 3
    // int arr[] = {2, 4, 6, 8};
    // int sum = 14;
    // // TC 4
    // int arr[] = {1, 2, 3, 4, 5};
    // int sum = 7;
    // // TC 5
    // int arr[] = {10, 5, 2, 6, 8};
    // int sum = 12;
    // // TC 6
    // int arr[] = {1, 2, 3, 4, 5};
    // int sum = 15;
    // TC 7
    int arr[] = {5, 10, 20, 30, 40};
    int sum = 100;
    int n = sizeof(arr) / sizeof(arr[0]);
    subArraySum(arr, n, sum);
    return 0;
}