//Given a binary string as input, convert into its decimal form and return it as an integer.

#include <iostream>
#include <string>
#include<cmath>
using namespace std;
 
int binaryToDecimal(string s)
{
    int dec_value=0;
    int base=1;
    int n=s.length();
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            dec_value+=base;
        }
           base=base*2;
        }
            return dec_value;
}
 
