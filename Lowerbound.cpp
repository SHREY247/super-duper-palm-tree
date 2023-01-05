/*Given an array of integers A (sorted) and a integer Val.
Implement a function that takes A and Val as input parameters and returns the lower bound of Val*/


//Binary search
#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    
    int sz = A.size();
    
    int l = 0, r = (sz-1);
     int answer = -1;
     
      while (l <= r) {
        int mid = (l + r) / 2;
         if (A[mid] > Val) {
            r = mid-1;
        }
        else
        {
            answer = A[mid];
            l = mid+1;
        }
    }
    
    return answer;
    
}
