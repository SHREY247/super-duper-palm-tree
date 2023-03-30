//Finding subsets of a particular string

// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

void findSubsets(char *input,char *output,int i, int j){
    //i points to input element
    //j points to output element
    //base case
    if(input[i]=='\0'){
        output[j]='\0';
        if(output[0]=='\0'){
            cout<<"NULL\n";
        }
        cout<<output<<endl;
        return;
    }
    
    //Recursive case
    //Include the ith letter
    output[j]=input[i];
    findSubsets(input,output,i+1,j+1);
    
    //Exclude the ith letter
    findSubsets(input,output,i+1,j);
}

int main() {
    char input[100];
    char output[100];
    cin>>input;
    cout<<"The subsets are:\n";
    findSubsets(input,output,0,0);

    return 0;
}
