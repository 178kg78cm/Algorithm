#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, stack[10000], size = 0, data;
    string cmd;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> cmd;
        if(cmd == "push"){
            cin >> data;
            stack[size] = data;
            size++;
        }
        else if(cmd == "top"){        
            if(size == 0) printf("-1\n");
            else cout << stack[size-1] << endl;
        }
        else if(cmd == "empty"){
            if(size == 0){
                cout << "1\n";
            } else cout << "0\n";
        }
        else if(cmd == "size"){
            cout << size << endl;
        }
        else if(cmd == "pop"){
            if(size == 0) cout << "-1\n";
            else {
                cout << stack[size-1] << endl;
                size--;
            }
        }
    }

    return 0;
}