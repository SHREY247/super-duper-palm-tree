/*Given an integer vector and a bool variable flag, your task is to sort the vector in accordance to the boolean value.
If the bool value passed is true then sort it in non-decreasing order or vice versa.*/

#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b){
    return a>b;
}

vector<int> sortingWithComparator(vector<int> a, bool flag){
    // your code  goes here
    if(flag) sort(a.begin(),a.end());
    else sort(a.begin(),a.end(),compare);
    return a;
}
