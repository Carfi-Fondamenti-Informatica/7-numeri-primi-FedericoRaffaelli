#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int x;
    cin >> x;
    bool ris= numeriprimi(x);
    if(ris){
        cout << "numero primo" << endl;
    }else{
        cout << "numero non primo";
    }
    return 0;
}
