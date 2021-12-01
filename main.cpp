#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int x=0, y=2;
    cin >> x;
    bool ris= numeriprimi(x,y);
    if(ris){
        cout << "numero primo" << endl;
    }else{
        cout << "numero non primo" << endl;
    }
    return 0;
}
