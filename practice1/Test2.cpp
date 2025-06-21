#include <iostream>
using namespace std;

void meth1(){
    cout << "this is meth1 ";
}
void meth2(){
    cout << "this is meth2";
}
void meth3(){
    cout << "this is meth3";
}

int main(){
    cout << "Welcome to cpp " << endl;
    meth1();
    meth2();
    meth3();
    return 0;
}