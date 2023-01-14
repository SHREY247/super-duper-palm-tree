/*Given co-ordinates of N points on X-Y axis, your task is to sort them in accordance to the x-coordinate.
If the x-coordinates are same then compare y-coordinates.*/


#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    sort(v.begin(), v.end());
    return v;
}
