/*Given an array arr[] of size n containing integers. 
The problem is to find the length of the longest sub-array having sum equal to the given value k.*/

/* Example:
Input: arr[] = { 10, 5, 2, 7, 1, 9 }, k = 15
Output: 4
Explanation: The sub-array is {5, 2, 7, 1}.*/


#include <bits/stdc++.h>
using namespace std;

// function to find the length of longest
// subarray having sum k
int lenOfLongSubarr(int arr[], int N, int K)
{

	// Variable to store the answer
	int maxlength = 0;

	for (int i = 0; i < N; i++) {

		// Variable to store sum of subarrays
		int Sum = 0;

		for (int j = i; j < N; j++) {

			// Storing sum of subarrays
			Sum += arr[j];

			// if Sum equals K
			if (Sum == K) {

				// Update maxLength
				maxlength = max(maxlength, j - i + 1);
			}
		}
	}

	// Return the maximum length
	return maxlength;
}

// Driver Code
int main()
{

	// Given input
	int arr[] = { 10, 5, 2, 7, 1, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 15;

	// Function Call
	cout << "Length = " << lenOfLongSubarr(arr, n, k);

	return 0;
}

