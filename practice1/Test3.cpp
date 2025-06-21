#include <iostream>
using namespace std;

int main(){
    cout << "Welcome to cpp " << endl;
    int number = 10;
    int *ptr;
    ptr = &number;

    cout << "Value of number " << number << endl;

    cout << "Address of number (&number) " << &number << endl;

    cout << "value stored in ptr " << *ptr << endl;
    *ptr = 25;

    cout << "new value of number after ptr=25 " << number << endl;
    return 0;
}