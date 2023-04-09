/*Given an array, return the Next Greater Element for every element. The Next greater Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider the next greater element as -1.

Input Format
In the function an integer vector is passed

Output Format
Return an integer vector containing the next greater element for each element

Sample Input
v = { 4, 5, 2, 25 }

Sample Output
{ 5, 25, 25, -1 }*/

#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> v){
    int n=v.size();
    vector<int> arr(n,0);
    stack<int> s;
    
    
    for(int i=n-1;i>=0;i--){
        // Keep on popping until the top element is greater than current
        while(!s.empty() && s.top()<=v[i])
        s.pop();
        
        if(s.empty())
        arr[i]=-1;
        
        else
        arr[i]=s.top();
        
        //Push v[i] into stack
        s.push(v[i]);
        
        
    }
    return arr;
}

