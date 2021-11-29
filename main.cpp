#include <iostream>
#include "lib.h"
using namespace std;
int n;
int main() {
    cin>>n;
    //for(int i=0;i<100;i++){
        if(primo(n)) {
            cout << "numero primo" << endl;
        }else{
            cout << "numero non primo" << endl;
        }
    //}
    return 0;
}
