/*Pascal’s triangle is a triangular array of the binomial coefficients. Write a function that takes an integer value n as input and returns 2D array with first n lines of the Pascal’s triangle.
Following are the first 5 rows of Pascal’s Triangle.
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1*/

//Using binomial coefficients
#include<bits/stdc++.h>
using namespace std;

int binomialCoeff(int n, int k);
 
// Function to print first
// n lines of Pascal's
// Triangle
vector<vector<int>> printPascal(int n)
{
    // Iterate through every line and
    // print entries in it
     vector<vector<int>> res;
    for (int line = 0; line < n; line++)
    {
        // Every line has number of
        // integers equal to line
        // number
vector<int> v;
        for (int i = 0; i <= line; i++)
         {v.push_back(binomialCoeff(line, i));}

         res.push_back(v);
    }
return res;
}
 
int binomialCoeff(int n, int k)
{
    int res = 1;
    if (k > n - k)
    k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
     
    return res;
}

