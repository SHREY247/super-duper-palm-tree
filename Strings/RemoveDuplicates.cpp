/*Given a string S, the task is to remove all the duplicates from the given string
and return the updated string in sorted order.*/

//Set stores unique elements in sorted manner

#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){
    // your code goes here
    set<char> ss(s.begin(),s.end());
    string str;
    
    for(auto x:ss)
    str.push_back(x);
    
    return str;
    
}
