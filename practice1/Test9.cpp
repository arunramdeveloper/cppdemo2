#include <iostream>
using namespace std;

void meth2();
void meth1();
int main(){
    cout << "welcome to cpp " << endl;
    meth1();
    meth2();
}

void meth1(){
    cout << "this is meth1 " << endl;
}
void meth2(){
    cout << "this is meth2 " << endl;
}