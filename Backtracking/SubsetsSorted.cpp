//Sorted subsets
//Sorted subsets(Sorted firstly on the basis of length and then lexicographically)
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Compare function for length so that shortest string appears first
bool compare(string a, string b){
    if(a.length()==b.length()){
        return a<b;//Lexicographic order
    }
    return a.length()<b.length();
} 
void findSubsets(char *input,char *output,int i, int j, vector<string> &list){
    //i points to input element
    //j points to output element
    //base case
    if(input[i]=='\0'){
        output[j]='\0';
      /*  if(output[0]=='\0'){
            cout<<"NULL\n";
        }*/
        string temp(output);
        list.push_back(temp);
        //cout<<output<<endl;
        return;
    }
    
    //Recursive case
    //Include the ith letter
    output[j]=input[i];
    findSubsets(input,output,i+1,j+1,list);
    
    //Exclude the ith letter
    findSubsets(input,output,i+1,j,list);
}

int main() {
    char input[100];
    char output[100];
    vector<string> list;  //list is just a variable here
    cin>>input;
    
    findSubsets(input,output,0,0,list);
    
    sort(list.begin(),list.end(),compare);
    
    
    cout<<"The subsets are:\n";
    for(auto s:list){
        cout<<s<<", ";
    }

    return 0;
}
