#include <iostream>
using namespace std;
int main(){
    cout << "Welcome to cpp " << endl;
    int number1 = 10;
    int *ptr;
    ptr = &number1;
    cout << "value of ptr " << *ptr << endl;
    *ptr = 22;
    number1 = number1 + 5;
    cout << " value of number1 after ptr " << number1 << endl;
    return 0;
}