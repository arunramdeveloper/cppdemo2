#include <iostream>
using namespace std;

int main(){
    int a = 10, b = 20, c = 30;

    if(a>=b && a>=c){
        cout << a << endl;
    }else if(b >=a && b>=c){
        cout << b << endl;
    }else if(c >=a && c >=b){
        cout << c << endl;
    }
    return 0;
}