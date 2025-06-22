#include <iostream>
using namespace std;

bool isEven(int n) {
    return (n % 2 == 0);
}
int main(){
    int n = 250;
    if(isEven(n)== true){
        cout << "Even number " << endl;
    }else {
        cout << " odd number " << endl;
    }
    return 0;
}