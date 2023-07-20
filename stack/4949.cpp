#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    char stack[101];
    int i;
    while(getline(cin, str)){
        int size = 0;
        if(str[0]=='.') break;
        for(i=0;str[i]!='.';i++){
            if(str[i]=='('||str[i]=='['){
                stack[size]=str[i];
                size++;
            }
            else if(str[i]==')'){
                if(size == 0) break;
                if(stack[size-1]=='(') size--;
                else break;
            } 
            else if(str[i]==']'){
                if(size == 0) break;
                if(stack[size-1] == '[') size--;
                else break;
            }
        }
        if(str[i]=='.'&&size==0) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}