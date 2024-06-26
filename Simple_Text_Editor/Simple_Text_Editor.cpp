#include <cmath>
#include <cstdio>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;
int queries=0;
string Statements;
void TextEditor(int operation);
stack<string> Copies;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    cin>>queries;
    
    for(int i=0; i<queries;i++){
        int opertion=0;
    cin>>opertion;
    
    TextEditor(opertion);
    
    }
    return 0;
}

void TextEditor(int operation){
       
    if(operation == 1){
        Copies.push(Statements);
        string St_to_Append;
        cin >> St_to_Append;
        Statements+=St_to_Append;
    }else if(operation == 2){
        Copies.push(Statements);
        int k=0;
        cin>>k;
       Statements=Statements.substr(0,Statements.length()-k);
            
       }
    else if(operation == 3){
        int k=0;
        cin>>k;
       
        cout<<Statements[k - 1]<<endl;
    }
    else{
        if(!Copies.empty()){
        Statements = Copies.top();
        Copies.pop();
        }
    }
    
}
