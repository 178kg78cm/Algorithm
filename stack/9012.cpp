// stack으로 안품

#include <iostream>
using namespace std;

int main(){
    int n;
    char concatList[51];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> concatList;
        int is_vps = 0;
        for(int i=0;concatList[i]!='\0';i++){
            if(concatList[i]=='(') is_vps++;
            else if(concatList[i]==')') is_vps--;
            if(is_vps<0) {
                cout << "NO\n";
                break;
            } 
        }
        if(is_vps>0) cout << "NO\n";
        else if(is_vps==0) cout << "YES\n";
    }

    return 0;
}