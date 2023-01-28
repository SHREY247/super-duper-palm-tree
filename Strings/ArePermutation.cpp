/*Given two strings A and B. Check if one string is permutation of the other.
A Permutation of a string is another string that contains same characters,
only the order of characters can be different. For example, “abcd” and “dabc” are Permutation of each other*/

#include <bits/stdc++.h>
using namespace std;
 
bool arePermutation(string str1, string str2)
{
    // Get lenghts of both strings
    int n1 = str1.length();
    int n2 = str2.length();
 
    // If length of both strings is not same,
    // then they cannot be Permutation
    if (n1 != n2)
      return false;
 
    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
 
    // Compare sorted strings
    for (int i = 0; i < n1;  i++)
       if (str1[i] != str2[i])
         return false;
 
    return true;
}
