#include <iostream>
using namespace std;
int main(){
    int k, stack[100000];
    int num, size = 0, sum = 0;
    cin >> k;
    for(int i=0;i<k;i++){
        cin >> num;
        if(num == 0){
            if(size == 0) continue;
            else size--;
        }
        else {
            stack[size] = num;
            size++;
        }
    }

    for(int i=0;i<size;i++){
        sum += stack[i];
    }
    cout << sum;

    return 0;
}