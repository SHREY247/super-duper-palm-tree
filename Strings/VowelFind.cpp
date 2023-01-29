//Given a string consisting of lowercase English alphabets, return a string containing all the vowels present in S in serial order.

#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
       string output;
    for(auto x : S){
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u') output.push_back(x);
    }
    return output;
}
