/*Given an integer N. Your task is to return an integer vector containing numbers from 1 to N in increasing order.*/

#include<bits/stdc++.h>
using namespace std;


void help(int i,int n,vector<int> &v){
    //Return if index becomes greater than the number N
    if(i>n){
        return;
    }
    //Push i into v (Note that i starts from 1 in calling function)
    v.push_back(i);
    help(i+1,n,v);
}
vector<int> increasingNumbers(int N) {
    vector<int> v;
    help(1,N,v);
    return v;
}
